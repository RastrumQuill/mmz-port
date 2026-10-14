// sub_08102718 at 0x08102718 (thumb)

void sub_08102718(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(short *)(param_1 + 0xbc) == 0x155c) {
    if ((*(byte *)(DAT_0202edac + 5) & 1) == 0) {
      iVar1 = 0x14;
    }
  }
  if (iVar1 != 0) {
    sub_081089D4(iVar1);
  }
  return;
}

