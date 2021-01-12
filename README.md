# SolveAXXB

A C++ library to solve equation AX=XB, which is known as been widely used in hand-eye calibration for robotics.

## Revision
1. Integrated [Google/glog](https://github.com/google/glog) as a subdirectory
2. Created **main.cpp** for testing
3. Adjusted **CMakeLists.txt** for integration of **glog** and creation of **solver_test**
4. Added **.gitignore** to ignore folder **build/**

## How to run it
1. Clone the repo
   ```bash
   git clone https://github.com/a-loner/SolveAXXB.git
   ```
2. Enter the folder
   ```bash
   cd SolveAXXB
   ```
3. Create folder **build**
   ```bash
   mkdir build
   ```
4. Enter build folder
   ```bash
   cd build
   ```
5. **(optional)**Install dependency
   ```bash
   sudo apt install libeigen3-dev
   ```
6. Run **cmake**
   ```bash
   cmake ..
   ```
7. Run **make**
   ```bash
   make
   ```
8. Run the app
   ```bash
   ./solver_test
   ```
 
