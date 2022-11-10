ARGS="--build _build"
VCPKG="-DCMAKE_TOOLCHAIN_FILE=${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"

generate:
	cmake -B _build -G "Ninja" -S . ${VCPKG}

build: generate
	cmake --build _build

clean:
	cmake --build _build --target clean

run: generate build
	./_build/learnc