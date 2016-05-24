//2016 Alessandro Fabbri, Stefano Sinigardi, BSD

#define _USE_MATH_DEFINES  // for math constants

#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 500
#endif


#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS  // MSVC warnings shut upper
#define _SCL_SECURE_NO_WARNINGS  // MSVC warnings shut upper
#endif

// STL C++ include
#include <iostream>              
#include <vector>
#include <cmath>

// Fltk wrapper include
#include "grafica_lib.hpp"

using namespace std;

int main(int argc, char **argv) {

  double xmin = 0;
  double xmax = 2 * M_PI;
  int Nstep = 1000;
  double dx = (xmax-xmin)/(Nstep-1);
  std::vector<double> x, y1, y2;

  for (int i = 0; i < Nstep; i++) {
    double xi = xmin + i*dx;
    x.push_back(xi);
    y1.push_back(sin(xi));
    y2.push_back(cos(xi));
  }

  vvx.push_back(x); 
  vvy.push_back(y1);
  vvx.push_back(x);
  vvy.push_back(y2);

  frame_xmin = -0.2;
  frame_xmax = 2*M_PI+0.2;
  frame_ymin = -1.2;
  frame_ymax = 1.2;

  CreateMyWindow();
  Fl::add_idle(idle_cb, 0);
  Fl::run();

  return 0;
}