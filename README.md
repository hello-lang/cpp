# cpp
Simple hello world program

# dependencies
cmake, g++ (Linux/Unix), MSVC (Windows)

# building
### build and run in Linux environment
```console
mkdir build && cd build
cmake ..
make
```

### build and run in macos
same as Linux, except instead of using 
```console
cmake ..
```
use 

```console
cmake -G "yourXCodeGoesHere" ..
```

### build and run in windows
same as Linux, except instead of using
```console
cmake ..
```
use

```console
cmake -G "yourMSVCGoesHere" ..
```

### manual run
inside build dir
```console
./src/hello_world
```
