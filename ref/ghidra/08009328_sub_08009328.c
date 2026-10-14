// sub_08009328 at 0x08009328 (thumb)

uint sub_08009328(int param_1,uint param_2)

{
  int iVar1;
  
  if (0x7ff < param_1) {
    if (0xbff < param_1) {
      return ~param_2;
    }
    iVar1 = (param_2 - 0x1000) + (param_1 + -0x800) * 4;
    if (0 < iVar1) {
      return -iVar1;
    }
  }
  return 0;
}

