# BGSLibrary Examples

<p align="center">
<a href="https://youtu.be/_UbERwuQ0OU" target="_blank">
<img src="https://raw.githubusercontent.com/andrewssobral/bgslibrary/master/docs/images/bgs_giphy2.gif" border="0" />
</a>
</p>

### Requirements
* Build and install BGSLibrary from source

* * [Windows installation](https://github.com/andrewssobral/bgslibrary/wiki/Installation-instructions---Windows)

* * [Ubuntu / OS X installation](https://github.com/andrewssobral/bgslibrary/wiki/Installation-instructions-Ubuntu-or-OSX)

```bash
$ git clone --recursive https://github.com/andrewssobral/bgslibrary.git
$ cd bgslibrary/build
$ cmake ..
$ make -j $(nproc)
$ make install
$ export LD_LIBRARY_PATH=/usr/local/lib
```
The BGSlibrary is typically installed in the following directories by default: 

`/usr/local/lib/` for the library files and `/usr/local/include/bgslibrary` for the include files.


### Build and run examples

```bash
$ git clone https://github.com/andrewssobral/bgslibrary-examples.git
$ cd bgslibrary-examples
```

* bgslibrary_list_algorithms.cpp
```
make bgslibrary_list_algorithms
./bgslibrary_list_algorithms
```

### Uninstall
To uninstall the BGSlibrary, follow these steps:
```
$ cd bgslibrary/build
$ cat install_manifest.txt | xargs echo rm | sh
$ rm -rf /usr/local/include/bgslibrary
$ rm -rf /usr/local/lib/cmake/BGSLibrary
```
