# C++
Simple "Hello, World!" program in C++.

# Dependencies
- **Linux/Unix**: cmake, g++ 
- **Windows**: MSVC

# Build and execute
### Linux
```sh
mkdir build && cd build
cmake ..
make
```

### MacOS
same as Linux, except instead of using 
```sh
cmake ..
```
use 

```sh
cmake -G "yourXCodeGoesHere" ..
```

### Windows
same as Linux, except instead of using
```sh
cmake ..
```
use

```sh
cmake -G "yourMSVCGoesHere" ..
```

### Manual run
inside build dir
```console
./src/hello_world
```
