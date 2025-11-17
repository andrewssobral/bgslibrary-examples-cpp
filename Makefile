CXX = g++

PREFIX ?= $(CONDA_PREFIX)

ifeq ($(PREFIX),)
    PREFIX = /usr/local
endif

CFLAGS  = -Wall -std=c++11 -I$(PREFIX)/include `pkg-config --cflags opencv4`
LDFLAGS = -Wl,-rpath,$(PREFIX)/lib
LIBS    = -L$(PREFIX)/lib -lbgslibrary_core `pkg-config --libs opencv4`

% : %.cpp
	$(CXX) $(CFLAGS) -o $@ $< $(LDFLAGS) $(LIBS)
