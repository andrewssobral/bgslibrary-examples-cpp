# BGSLibrary Examples

 [![License: GPL v3](https://img.shields.io/badge/License-MIT-blue.svg)](http://www.gnu.org/licenses/gpl-3.0) [![Platform: Windows, Linux, OS X](https://img.shields.io/badge/Platform-Windows%2C%20Linux%2C%20OS%20X-blue.svg)](https://github.com/andrewssobral/bgslibrary/wiki/Build-status) [![OpenCV](https://img.shields.io/badge/OpenCV-2.4.x%2C%203.x%2C%204.x-blue.svg)](https://github.com/andrewssobral/bgslibrary/wiki/Build-status) [![Algorithms](https://img.shields.io/badge/Algorithms-43-red.svg)](https://github.com/andrewssobral/bgslibrary/wiki/List-of-available-algorithms)

<p align="center">
<a href="https://youtu.be/_UbERwuQ0OU" target="_blank">
<img src="https://raw.githubusercontent.com/andrewssobral/bgslibrary/master/docs/images/bgs_giphy2.gif" border="0" />
</a>
</p>

## Requirements

* Build and install BGSLibrary from source

* * [Windows installation](https://github.com/andrewssobral/bgslibrary/wiki/Installation-instructions---Windows)

* * [Ubuntu / OS X installation](https://github.com/andrewssobral/bgslibrary/wiki/Installation-instructions-Ubuntu-or-OSX)

```bash
git clone --recursive https://github.com/andrewssobral/bgslibrary.git
cd bgslibrary/build
cmake ..
make -j $(nproc)
make install
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
```

The BGSlibrary is typically installed in the following directories by default:

* `/usr/local/bin/` for the executable files (e.g. `/usr/local/bin/bgslibrary`)
* `/usr/local/lib/` for the library files (e.g. `/usr/local/lib/libbgslibrary_core.so` on linux or `*.dylib` on mac)
* `/usr/local/include/` for the include files (e.g. `/usr/local/include/bgslibrary`)

### Build and run examples

```bash
git clone https://github.com/andrewssobral/bgslibrary-examples-cpp.git
cd bgslibrary-examples-cpp
```

* bgslibrary_list_algorithms.cpp

```bash
make bgslibrary_list_algorithms
./bgslibrary_list_algorithms
```

### Uninstall

To uninstall the BGSlibrary, follow these steps:

```bash
cd bgslibrary/build
cat install_manifest.txt | xargs echo rm | sh
rm -rf /usr/local/include/bgslibrary
rm -rf /usr/local/lib/cmake/BGSLibrary
```
