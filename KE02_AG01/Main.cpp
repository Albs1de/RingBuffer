#include <iostream>
#include "Complex.h"

int main()
{
   MyMath::Complex Z1(3., 4.);
   Z1.vPrintComplexNumber();

   std::cout << Z1.f64Getf64Real() << std::endl;
   std::cout << Z1.f64Getf64Img() << std::endl;

   Z1.vSetf64Real(-1.);
   Z1.vSetf64Img(-1.);
   Z1.vPrintComplexNumber();

   Z1.vSetf64Real(2.);
   Z1.vSetf64Img(-2.);
   Z1.vPrintComplexNumber();

   Z1.vSetf64Real(0.);
   Z1.vSetf64Img(-2.);
   Z1.vPrintComplexNumber();

   Z1.vSetf64Real(0.);
   Z1.vSetf64Img(0.);
   Z1.vPrintComplexNumber();
}
