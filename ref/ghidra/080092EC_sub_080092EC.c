// sub_080092EC at 0x080092EC (thumb)

uint sub_080092EC(int param_1,uint param_2)

{
  int iVar1;
  
  if (0x3ff < param_1) {
    if (0x7ff < param_1) {
      return ~param_2;
    }
    iVar1 = (param_2 - 0x1000) + (param_1 + -0x400) * 4;
    if (0 < iVar1) {
      return -iVar1;
    }
  }
  return 0;
}

