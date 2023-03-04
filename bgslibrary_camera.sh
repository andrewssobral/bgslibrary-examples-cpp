export LD_LIBRARY_PATH=/usr/local/lib
# g++ -std=c++11 bgslibrary_camera.cpp -I/usr/local/include/bgslibrary -lbgslibrary_core `pkg-config --libs --cflags opencv4` -o bgslibrary_camera
make -B bgslibrary_camera
./bgslibrary_camera
