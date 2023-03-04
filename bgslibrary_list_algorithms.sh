export LD_LIBRARY_PATH=/usr/local/lib
# g++ -std=c++11 bgslibrary_list_algorithms.cpp -I/usr/local/include/bgslibrary -lbgslibrary_core `pkg-config --libs --cflags opencv4` -o bgslibrary_list_algorithms
make -B bgslibrary_list_algorithms
./bgslibrary_list_algorithms
