# Game of Life - Python version

## Initialization

The venv should be already created when the devcontainer (Codespace) starts.

If you have problems and have to recreate the venv, do the following:
```bash
cd starting_points/python
rm -rf .venv
uv sync
```

## Running tests

Tests defined in `game_of_life_test.py` can be run via terminal or through VSCode.

### From IDE

Use the "Testing" pane. There you will find all the tests.

Sometime it happens that when opening the Codespace for the first time
the tree of tests are not shown in the Testing panel.
Try opening the test file or right-click on the test file and click "Run Tests".

Beside launching and debugging tests, you can also "Run with Coverage".
This will show how much your tests are covering the sources.

### From Terminal

```bash
cd starting_points/python
uv run pytest
```

