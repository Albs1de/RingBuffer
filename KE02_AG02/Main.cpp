#include <iostream>
#include "Ringbuffer.h"

int main()
{
   MyDataStructures::Ringbuffer Ringbuffer1;
   int32_t i32Return = 0;
   int32_t i32Output = 0;
   int32_t i32Input = 42;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32ReadElement(i32Output);
   std::cout << "Read Element: " << i32Return << " " << i32Output << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32ReadElement(i32Output);
   std::cout << "Read Element: " << i32Return << " " << i32Output << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32WriteElement(i32Input);
   std::cout << "Write Element: " << i32Return << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32ReadElement(i32Output);
   std::cout << "Read Element: " << i32Return << " " << i32Output << std::endl;

   Ringbuffer1.vPrintRingBuffer();

   i32Return = Ringbuffer1.s32ReadElement(i32Output);
   std::cout << "Read Element: " << i32Return << " " << i32Output << std::endl;

   Ringbuffer1.vPrintRingBuffer();
}