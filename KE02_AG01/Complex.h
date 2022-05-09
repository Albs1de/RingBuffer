#pragma once
#include <iostream>

typedef double f64_t;
typedef float f32_t;

/*
* Function Declaration
*/
namespace MyMath
{
   class Complex
   {
   private:
      f64_t f64Real_;
      f64_t f64Img_;
      const f64_t cf64Pi_ = 3.14159265359;
   public:
      Complex(f64_t f64Real, f64_t f64Img);
      f64_t f64Getf64Real(void);
      void vSetf64Real(f64_t f64Realnew);
      f64_t f64Getf64Img(void);
      void vSetf64Img(f64_t f64Imgnew);
      f64_t f64GetAbs(void);
      f64_t f64GetArg(void);
      void vPrintComplexNumber(void);
   };
}