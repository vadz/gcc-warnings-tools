Collecting Information about GCC Warnings
=========================================

Overview
--------

The purpose of this tool is to provide information about GCC warnings not
enabled by default, nor by using some other warning option, such as `-Wall`,
`-Wextra` or `-Wpedantic`. The goal is to show which warnings could be useful
to explicitly enable in the C++ projects already using all the usual "maximum"
warning options.

You can see the results of running the script for gcc versions up to 12.1
online:

1. Here are the [warnings not enabled](https://hackmd.io/@VZ/gcc-warnings) by
   another warning option.
1. And here is the table with [all gcc warnings](https://hackmd.io/@VZ/all-gcc-warnings).


Requirements
------------

- [Raku](https://www.raku.org/) v6.d.
- Git clone of [gcc repository](https://gcc.gnu.org/git/gcc.git) is required.
  The directory containing it is called `$GCC_DIR` in the instructions below.
- The scripts here work in Unix-like environment. They might work under Cygwin
  or MSYS2, but were only tested under Linux.


Operation
---------

Run `./show-gcc-warnings --csv=warnings.csv $GCC_DIR` to generate the CSV file
containing all warnings not enabled by default or by one of the common warning
options and the minimum version in which they appeared (note that 4.6.0 means
that the warning was already present in gcc 4.6.0, not necessarily that it was
introduced in this version). With `--all` option, all warnings are included and
the extra "Enabled by" column is added to show the condition enabling the
warning.

If [JSON::Fast](https://modules.raku.org/dist/JSON::Fast:cpan:TIMOTIMO) Raku
module is available, specify `--json` option to obtain output in JSON format.

Alternatively, use `--cpp` option to generate C++ fragment, which can be
included in the source of a program that needs to do something (e.g. turn on)
all the warnings.

Finally, `--markdown` option can be used to generate a Markdown table with the
options.

If `--dump-all-to` option is given, output files named `x.y.z` for all gcc
releases since 4.6.0 containing all (not enabled by default) warnings
available in the given compiler version will be created under the specified
output directory `$OUT_DIR`. The existing files in this directory will _not_
be overwritten. Further specifying `--only-version=x.y.z[,x2.y2.z2...]` will
restrict the output to the specified version(s) only. These files can be used
on their own, and can also be reused by specifing `--read-from` option with the
same directory later when running in the default mode.

The helper `dump-gcc-warnings` script can be used to produce more detailed
output, including the warnings enabled by default, if `--all` option is
specified, for a particular gcc version, by passing it `common.opt` and
`c-family/c.opt` files from gcc source tree as command line parameters.

Note that, for convenience, output of the scripts for all gcc versions up to
the latest tested one (currently 11.1) are provided directly in this
repository, see `warnings.{cpp,csv,json}` files and `gcc` and `gcc-all`
directories, containing per-directory warnings lists.
