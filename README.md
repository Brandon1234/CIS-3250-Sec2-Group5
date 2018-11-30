# Legacy Calculator
CIS 3250 Sec2 Group5.

## Purpose
This software is a basic - normal level calculator with several built in functions including basic calculations, conversions and matrix operations. The original legacy code was refactored according to a newly developed coding convention and changes were merged to create a clean and easy to read updated codebase

## Compiling
The code is meant to be compiled on UNIX systems and the compilation can be done by running the make command in the root directory of the repsitory. In order for compilation to work, gcc needs to be installed on the target system. In order to compile on windows, MinGW should be installed with path variables correctly set

## Changes
In order to make changes to the repository, create a new branch from main and commit changes to files in the src folder. Files have various responsibilites according to name, and the main file is "CIS3250-legacy-calculator.c"

## Testing
The Unit_Testing branch contains the final files to run the test harness. Compile the test_harness.c file and that will run all the tests.