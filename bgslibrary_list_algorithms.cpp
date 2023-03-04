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
    
    // Gets the names of the background subtraction algorithms registered in the BGSLibrary factory
    auto algorithmsName = BGS_Factory::Instance()->GetRegisteredAlgorithmsName();

    // Displays the number of available background subtraction algorithms in the BGSLibrary
    std::cout << "Number of available algorithms: " << algorithmsName.size() << std::endl;

    // Displays the list of available background subtraction algorithms in the BGSLibrary
    std::cout << "List of available algorithms:" << std::endl;
    std::copy(algorithmsName.begin(), algorithmsName.end(), std::ostream_iterator<std::string>(std::cout, "\n"));

    // Returns 0 to indicate that the execution was successful
    return 0;
}
