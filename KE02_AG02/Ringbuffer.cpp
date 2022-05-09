#include "Ringbuffer.h"

/*
* Function Definition
*/
MyDataStructures::Ringbuffer::Ringbuffer()
{
   for (int32_t i32I = 0; i32I < RINGBUFFER_MAXELEMENTS; i32I++)
   {
      as32Elements_[i32I] = 0;
   }
   u32ReadPos_ = 0U;
   u32WritePos_ = 0U;
   u32NumberElements_ = 0U;
}

int32_t MyDataStructures::Ringbuffer::s32ReadElement(int32_t& rs32Element)
{
   int32_t i32Return = RINGBUFFER_OKAY;

   if (u32NumberElements_ != 0U)
   {
      rs32Element = as32Elements_[u32ReadPos_];

      u32ReadPos_++;
      if (u32ReadPos_ > (RINGBUFFER_MAXELEMENTS - 1))
      {
         u32ReadPos_ = 0;
      }

      u32NumberElements_--;
   }

   if (u32NumberElements_ == 0U)
   {
      i32Return = RINGBUFFER_EMPTY;
   }
   return i32Return;
}

int32_t MyDataStructures::Ringbuffer::s32WriteElement(const int32_t& rs32Element)
{
   int32_t i32Return = RINGBUFFER_OKAY;
   as32Elements_[u32WritePos_] = rs32Element;

   u32WritePos_++;
   if (u32WritePos_ > (RINGBUFFER_MAXELEMENTS - 1))
   {
      u32WritePos_ = 0;
   }

   u32NumberElements_++;
   if (u32NumberElements_ > RINGBUFFER_MAXELEMENTS)
   {
      u32NumberElements_ = RINGBUFFER_MAXELEMENTS;
   }

   if (u32NumberElements_ == 0)
   {
      i32Return = RINGBUFFER_EMPTY;
   }
   if (u32NumberElements_ == RINGBUFFER_MAXELEMENTS)
   {
      i32Return = RINGBUFFER_FULL;
   }
   return i32Return;
}

void MyDataStructures::Ringbuffer::vPrintRingBuffer(void)
{
   std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;
   std::cout << "Reading Position: " << u32ReadPos_ << std::endl;
   std::cout << "Writing Position: " << u32WritePos_ << std::endl;
   std::cout << "Number of Elements: " << u32NumberElements_ << std::endl;
   std::cout << "Ringbuffer:\n";
   for (int32_t i32I = 0; i32I < RINGBUFFER_MAXELEMENTS; i32I++)
   {
      std::cout << as32Elements_[i32I] << "\t";
   }
   std::cout << std::endl;
   std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;
}