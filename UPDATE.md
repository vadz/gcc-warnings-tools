How to update the generated files
=================================

The instructions below assume that environment variable `GCC_DIR` contains the
path to a checkout of gcc sources.

- Dump the warnings for the new version: `make update GCC_VER=13.1.0`
- Update all files: `make`
- Update the tables online.
- Update the version in `README.md`.
- Commit/push.
