#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

// Include the OpenCV and BGSLibrary libraries
#include <opencv2/opencv.hpp>
#include <bgslibrary/algorithms/algorithms.h>

int main( int argc, char** argv )
{
    // Prints the version of OpenCV being used
    std::cout << "Using OpenCV " << CV_MAJOR_VERSION << "." << CV_MINOR_VERSION << "." << CV_SUBMINOR_VERSION << std::endl;
    
    // Set default values for algorithm name and images dir
    std::string algorithmName = "FrameDifference";
    std::string baseDir = "./dataset/frames";
    
    // Override default values with command-line arguments, if provided
    if (argc > 1) algorithmName = argv[1];
    if (argc > 2) baseDir = argv[2];
    
    // Print the name of the selected algorithm
    std::cout << "Running " << algorithmName << std::endl;
    
    // Create an instance of the specified algorithm
    auto bgs = BGS_Factory::Instance()->Create(algorithmName);
    
    // Initialize variables for input frame and key press
    auto frame_counter = 0;
    auto key = 0;
    
    // Display a message to stop the program
    std::cout << "Press 's' to stop:" << std::endl;
    
    // Loop until 's' is pressed
    while (key != 's') {
        // Capture frame-by-frame from the images dir
        frame_counter++;
        std::stringstream ss;
        ss << frame_counter;
        auto fileName = baseDir + "/" + ss.str() + ".png";
        std::cout << "reading " << fileName << std::endl;
        auto img_input = cv::imread(fileName, cv::IMREAD_COLOR);
        
        // Break the loop if no image was read
        if (img_input.empty()) break;
        
        // Resize the input frame for better visualization
        cv::resize(img_input, img_input, cv::Size(380, 240), 0, 0, CV_INTER_LINEAR);
        cv::imshow("input", img_input);
        
        // Initialize variables for the foreground mask and background model
        cv::Mat img_mask;
        cv::Mat img_bkgmodel;
        
        try {
            // Process the input frame with the specified algorithm to obtain the foreground mask and background model
            bgs->process(img_input, img_mask, img_bkgmodel);
            
            // Show the foreground mask if it is not empty
            if(!img_mask.empty())
                cv::imshow("Foreground", img_mask);
            // Do something else with the foreground mask or background model...
        }
        catch (std::exception& e) {
            // Handle any exceptions that may occur during processing
            std::cout << "Exception occurred" << std::endl;
            std::cout << e.what() << std::endl;
        }
        
        // Wait for a key press (maximum delay of 33 milliseconds)
        key = cv::waitKey(33);
    }
    
    // Wait for a key press
    cv::waitKey(0);
    
    // Clean up and release resources
    cv::destroyAllWindows();

    // Return 0 to indicate that the execution was successful
    return 0;
}
