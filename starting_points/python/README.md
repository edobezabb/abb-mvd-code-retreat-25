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

### From Terminal

```bash
cd starting_points/python
uv run pytest
```

