# CMakeSharedLib

## A. Build shared lib and install it.

- From "PrimeLibrary/build" directory as base directory: 

### 1. Make the generator and build from the build directory.
```
cmake ..
```
### 2. Make
```
make
```
### 3. Make the library available system wide. This will install and place in /usr/lib
```
sudo make install
```
## B. Consume shared lib by a client.

- From "PrimeClient/build" directory as base directory: 

### 1. Make the generator and build from the build directory.
```
cmake ..
```
### 2. Make
```
make
```
### 3. Run executable
```
./main
```

## References 
- [A minimal example using cmake to create a c++ shared library](https://surfertas.github.io/cmake/cpp/projecteuler/2019/05/01/cmake.html)