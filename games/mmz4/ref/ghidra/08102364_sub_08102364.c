// sub_08102364 at 0x08102364 (thumb)

void sub_08102364(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(short *)(param_1 + 0xbc) == 0x1524) {
    if ((*(byte *)(DAT_0202edac + 1) & 1) == 0) {
      iVar1 = 4;
    }
  }
  if (iVar1 != 0) {
    sub_081089D4(iVar1);
  }
  return;
}

