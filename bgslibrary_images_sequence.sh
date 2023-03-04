export LD_LIBRARY_PATH=/usr/local/lib
# g++ -std=c++11 bgslibrary_images_sequence.cpp -I/usr/local/include/bgslibrary -lbgslibrary_core `pkg-config --libs --cflags opencv4` -o bgslibrary_images_sequence
make -B bgslibrary_images_sequence
./bgslibrary_images_sequence
