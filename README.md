# Valgrind Exercise

## Standard install via command-line
```bash
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
# Command to check Valgrind and save output text file
  valgrind --leak-check=yes ./build/app/shell-app > valgrind_output_no_errors.txt 2>&1
```

# Extra Credit

When the executable is linked statically, Valgrind might still detect some of those bugs, but in addition, it also reported approximately 302 additional errors. This is because static linking creates self-contained executables that typically do not rely on external libraries or dependencies, which can impact Valgrind's ability to effectively detect potential errors.
