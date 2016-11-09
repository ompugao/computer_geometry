.PHONY: all build clean test

all: build

run_cmake:
	mkdir -p build
	cd build;\
		cmake ..
build: run_cmake
	cd build;\
		make 

build_test: build
	cd build;\
		make test

clean:
	cd build;\
		$(MAKE) clean
	rm -r build

test: build_test
	cd build;\
		ctest --verbose
