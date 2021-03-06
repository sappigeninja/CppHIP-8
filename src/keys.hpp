#pragma once

#include "utils.hpp"

// Moves the key in the byte to the LSB, then check only for that key
#define IS_PRESSED(keys, key)						\
  ((keys >> (key - 1)) & 1)

#define IS_NOT_PRESSED(keys, key)						\
  !((keys >> (key - 1)) & 1)

namespace chip8
{    
  enum Key : u16
	{
	  Num0 = 1,
	  Num1 = 2,
	  Num2 = 4,
	  Num3 = 8,
	  Num4 = 0x10,
	  Num5 = 0x20,
	  Num6 = 0x40,
	  Num7 = 0x80,
	  Num8 = 0x100,
	  Num9 = 0x200,
	  A = 0x400,
	  B = 0x800,
	  C = 0x1000,
	  D = 0x2000,
	  E = 0x4000,
	  F = 0x8000
	};

  u16 get_keys();
}
