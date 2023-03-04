CXX = g++
CFLAGS = -Wall -std=c++11 -I/usr/local/include `pkg-config --cflags opencv4`
LIBS = -lbgslibrary_core `pkg-config --libs opencv4`

% : %.cpp
		$(CXX) $(CFLAGS) -o $@ $< $(LIBS)
