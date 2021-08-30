# -Xclang <arg> Pass <arg> to the clang compiler
# -Xclang -load -Xclang build/skeleton/libSkeletonPass.* load and activate the pass in clang
clang -Xclang -load -Xclang build/skeleton/libSkeletonPass.* skeleton/something.c