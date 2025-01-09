import pytest  # noqa: F401

from game_of_life import add


def test_example():
    assert 1 == 1


def test_add():
    assert add(1, 2) == 3
