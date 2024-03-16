# BGSLibrary Examples

This repository showcases examples of using the BGSLibrary, a comprehensive library for background subtraction in videos and image sequences. These examples are intended to help users understand how to integrate and utilize the BGSLibrary with OpenCV for various background subtraction tasks.

![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg) ![Platform: Windows, Linux, OS X](https://img.shields.io/badge/Platform-Windows%2C%20Linux%2C%20OS%20X-blue.svg) ![OpenCV](https://img.shields.io/badge/OpenCV-2.4.x%2C%203.x%2C%204.x-blue.svg) ![Algorithms](https://img.shields.io/badge/Algorithms-43-red.svg)

[![BGS Library Demo](https://raw.githubusercontent.com/andrewssobral/bgslibrary/master/docs/images/bgs_giphy2.gif)](https://youtu.be/_UbERwuQ0OU)

## Requirements

To use the examples in this repository, you must first build and install the BGSLibrary from source. Follow the installation instructions for your platform:

- [Windows installation](https://github.com/andrewssobral/bgslibrary/wiki/Installation-instructions---Windows)
- [Ubuntu / OS X installation](https://github.com/andrewssobral/bgslibrary/wiki/Installation-instructions-Ubuntu-or-OSX)

Quick start commands:

```bash
git clone --recursive https://github.com/andrewssobral/bgslibrary.git
cd bgslibrary/build
cmake ..
make -j $(nproc)
make install
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
```

By default, the BGSLibrary installs to `/usr/local/bin/` for executables, `/usr/local/lib/` for libraries, and `/usr/local/include/` for include files.

## Build and Run Examples

Clone the examples repository and navigate to it:

```bash
git clone https://github.com/andrewssobral/bgslibrary-examples-cpp.git
cd bgslibrary-examples-cpp
```

To build and run an example, such as listing all algorithms:

```bash
make bgslibrary_list_algorithms
./bgslibrary_list_algorithms
```

## Uninstall

To uninstall the BGSLibrary, you can use the following commands:

```bash
cd bgslibrary/build
cat install_manifest.txt | xargs echo rm | sh
rm -rf /usr/local/include/bgslibrary
rm -rf /usr/local/lib/cmake/BGSLibrary
```

## Configuration

This project uses configuration files stored in the `config` directory. By default, all files in this directory are ignored except for `.gitignore` and `README.txt`, which provides details about the purpose of the directory.

## Examples

Included examples demonstrate how to use the BGSLibrary for processing video from a camera, processing a sequence of images, and listing all available algorithms. Each example includes both a source file (`.cpp`) and a build script (`.sh`).

For any questions or issues, please refer to the [BGSLibrary documentation](https://github.com/andrewssobral/bgslibrary/wiki) or submit an issue on GitHub.

## License

This project is licensed under the MIT License. See the [LICENSE](http://www.gnu.org/licenses/gpl-3.0) file for details.
