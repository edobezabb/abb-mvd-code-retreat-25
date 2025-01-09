# Game of Life - C++ version

## Initialization

Tests defined in `src/game_of_life_test.cpp` can be run via terminal or through VSCode.

## Terminal workflow

This workflow uses CMake directly.

### Build

#### First time

```bash
cd starting_points/cpp
mkdir build
cmake -S . -B build
```

#### Subsequent times

```bash
cd starting_points/cpp
cmake --build build
```

### Execute tests

Executing Google Test directly:
```bash
cd starting_points/cpp
./build/src/game_of_life_test
```

Or, if you want to use CMake's CTest:
```bash
cd starting_points/cpp/build/src
ctest
```