# SolveAXXB

A C++ library to solve equation AX=XB, which is known as been widely used in hand-eye calibration for robotics.

## Revision
1. Integrated [google/glog](https://github.com/google/glog) as a subdirectory
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
   sudo apt install libeigen3-dev libgoogle-glog-dev
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
## Notes
1. Poses **vec_a** and **vec_b** should have the same length
2. The length of **vec_a** should be no less than **2**

## Known issues
1. **SolveAXXB** relies on **glog** installed on your system, whereas the **solver_test** relies on the **glog** included in the repo. Should reduce the reliance for one of the **glog**
 
