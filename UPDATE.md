How to update the generated files
=================================

The instructions below assume that `GCC_DIR` contains a checkout of gcc
sources.

- Dump the warnings for the new version (may add e.g. `--only-version=12.1` to
  speed it up after the first time, by default all versions will be generated):
  1. All warnings: `./show-gcc-warnings --dump-all-to=gcc-all --all $GCC_DIR`.
  1. Warnings not enabled by default: `./show-gcc-warnings --dump-all-to=gcc $GCC_DIR`.
- Update `warnings.*` files:
  1. `./show-gcc-warnings --read-from=gcc $GCC_DIR >| warnings.csv`
  1. `./show-gcc-warnings --read-from=gcc --cpp $GCC_DIR >| warnings.cpp`
  1. `./show-gcc-warnings --read-from=gcc --json $GCC_DIR >| warnings.json`
- Update the tables online.
- Update the version in `README.md`.
- Commit/push.
