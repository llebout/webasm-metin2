@echo off

clang++ ^
	--target=wasm32 ^
    --sysroot=wasi-sysroot ^
    -nodefaultlibs ^
	-O3 ^
	-o test.o ^
	-c ^
	test.cpp
	
wasm-ld ^
	--no-entry ^
	--export-all ^
	--lto-O3 ^
	--allow-undefined ^
	--import-memory ^
	test.o ^
	-o test.wasm