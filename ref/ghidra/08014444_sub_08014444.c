// sub_08014444 at 0x08014444 (thumb)

void sub_08014444(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = param_2;
  DAT_02022b6e = DAT_02022b6e | 1;
  DAT_02004f90 = 0;
  return;
}

