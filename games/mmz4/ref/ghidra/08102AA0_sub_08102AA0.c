// sub_08102AA0 at 0x08102AA0 (thumb)

void sub_08102AA0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(short *)(param_1 + 0xbc) == 0x15d2) && ((DAT_0202edac[2] & 1) == 0)) {
    iVar1 = 8;
  }
  if (*(short *)(param_1 + 0xbc) == 0x15ee) {
    if (((*DAT_0202edac & 0xf) >> 1 & 1) == 0) {
      iVar1 = 1;
    }
  }
  if (iVar1 != 0) {
    sub_081089D4(iVar1);
  }
  return;
}

