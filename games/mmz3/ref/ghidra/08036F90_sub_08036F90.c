// sub_08036F90 at 0x08036F90 (thumb)

void sub_08036F90(uint param_1,undefined2 param_2)

{
  *(undefined2 *)((int)&DAT_020002c0 + (((param_1 & 0xfffe) << 0x10) >> 0xf)) = param_2;
  return;
}

