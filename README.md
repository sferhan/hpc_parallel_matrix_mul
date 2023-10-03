# hpc_parallel_matrix_mul
Implementation of parallel matrix multiplication algorithm and its comparison with basic, vectorized and CBLAS implementation

```
mkdir build && cd build
cmake -DCMAKE_CXX_FLAGS=-I/Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/System/Library/Frameworks/Accelerate.framework/Versions/A/Frameworks/vecLib.framework/Versions/A/Headers -DCMAKE_CXX_COMPILER=/usr/local/opt/llvm/bin/clang++ -DCMAKE_C_COMPILER=/usr/local/opt/llvm/bin/clang ..
make
```