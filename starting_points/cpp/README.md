# Game of Life - C++ version

## Initialization

Tests defined in `src/game_of_life_test.cpp` can be run via terminal or through VSCode.

## CMakeTools workflow

This workflow can be executed from VSCode directly, without the use of the terminal.

### Building

From CMake panel, select the Configure and Build preset - either Debug or Release.  
This will trigger a CMake configuration step.  
Then you can use the build button in the tab "Project Outline" below.

Once this is configured, you can use the buttons on VSCode status bar to build, launch or debug.

### Testing

The VSCode testing panel will autodiscover and show the tests defined in the code.
If they are not up-to-date, click the Refresh Tests button on top of the panel (circle arrow).

From there, you can both launch and debug the test. If you are debugging, remember to place
a breakpoint, otherwise the execution won't ever stop.

Launching tests from the Testing panel will also rebuild the test executable in case something 
has changed. This means no need to manually execute the build step.

## Terminal workflow

This workflow uses CMake directly.

You can also replace `debug` for `release` if you want to.

### Building

#### Configuration step

This step is only needed once. Then only the build step is necessary.

```bash
cd starting_points/cpp
cmake --preset debug
```

#### Build step

```bash
cd starting_points/cpp
cmake --build --preset debug
```

### Execute tests

Executing Google Test directly:
```bash
cd starting_points/cpp
./out/build/debug/src/game_of_life_test
```

Or, if you want to use CMake's CTest:
```bash
cd starting_points/cpp/out/build/debug
ctest
```