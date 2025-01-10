import pytest  # noqa: F401

from game_of_life import add, subtract


def test_example():
    assert 1 == 1


def test_add():
    assert add(1, 2) == 3


def test_sub():
    assert subtract(3, 1) == 2
