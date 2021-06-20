# llvm-pass-skeleton

A completely useless LLVM pass.
It's for LLVM 3.8.

Build:

    $ cd llvm-pass-skeleton
    $ mkdir build
    $ cd build
    $ cmake ..
    $ LLVM_DIR=~/software/llvm-project/build/bin/llvm cmake ..
    $ make
    $ cd ..

Run:

    $ clang -Xclang -load -Xclang ../build/skeleton/libSkeletonPass.* something.c
