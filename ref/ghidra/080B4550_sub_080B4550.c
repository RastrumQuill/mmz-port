// sub_080B4550 at 0x080B4550 (thumb)

int sub_080B4550(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0xff) - 1 < 0x4e) {
    iVar1 = 3;
    do {
      iVar1 = iVar1 + -1;
      if ((uint)*(byte *)(param_1 + 0x180 + iVar1) == (param_2 & 0xff)) {
        return iVar1 * 0x1000000 >> 0x18;
      }
    } while (iVar1 != 0);
  }
  return -1;
}

