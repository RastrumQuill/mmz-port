// sub_081028BC at 0x081028BC (thumb)

void sub_081028BC(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(short *)(param_1 + 0xbc) == 0x1594) {
    if ((*(byte *)(DAT_0202edac + 6) & 1) == 0) {
      iVar1 = 0x18;
    }
  }
  if (iVar1 != 0) {
    sub_081089D4(iVar1);
  }
  return;
}

