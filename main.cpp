#include<iostream>
#include"conventionalaxxbsvdsolver.h"

int main(int argc, char** argv) {
  
  google::InitGoogleLogging(argv[0]);

  // Pose
  Pose a, b, x;
  a << 1, 0, 0, 0,
       0, 1, 0, 0,
       0, 0, 1, 0,
       0, 0, 0, 1;

  b << 1, 0, 0, 0,
       0, 1, 0, 0,
       0, 0, 1, 0,
       0, 0, 0, 1;

  std::cout << "A = " << std::endl;
  std::cout << a << std::endl;

  std::cout << "B = " << std::endl;
  std::cout << b << std::endl;

  // Poses
  Poses vec_a, vec_b;
  vec_a.push_back(a);
  vec_a.push_back(a);
  vec_b.push_back(b);
  vec_b.push_back(b);

  // Solver
  ConventionalAXXBSVDSolver solver(vec_a, vec_b);
  x = solver.SolveX();

  // Show result
  std::cout << "X = " << std::endl;
  std::cout << x << std::endl;

  return 0;
}