#include "Complex.h"
#define _USE_MATH_DEFINES
#include <cmath>

/*
* Function Definition
*/
MyMath::Complex::Complex(f64_t f64Real, f64_t f64Img)
{
   f64Real_ = f64Real;
   f64Img_ = f64Img;
}

f64_t MyMath::Complex::f64Getf64Real(void)
{
   return f64Real_;
}

void MyMath::Complex::vSetf64Real(f64_t f64Realnew)
{
   f64Real_ = f64Realnew;
}

f64_t MyMath::Complex::f64Getf64Img(void)
{
   return f64Img_;
}

void MyMath::Complex::vSetf64Img(f64_t f64Imgnew)
{
   f64Img_ = f64Imgnew;
}

f64_t MyMath::Complex::f64GetAbs(void)
{
   return sqrt((f64Real_ * f64Real_) + (f64Img_ * f64Img_));
}

f64_t MyMath::Complex::f64GetArg(void)
{
   return atan2(f64Img_, f64Real_) * (180 / cf64Pi_);
}

void MyMath::Complex::vPrintComplexNumber(void)
{
   std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;
   std::cout << "Cartesian Coordinates: " << f64Real_ << " + j(" << f64Img_ << ")" << std::endl;
   std::cout << "Polar Coordinates: " << f64GetAbs() << " * exp(j("<< f64GetArg() << "))" << std::endl;
   std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;
}