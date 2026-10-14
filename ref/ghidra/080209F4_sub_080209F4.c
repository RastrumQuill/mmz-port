// sub_080209F4 at 0x080209F4 (thumb)

void sub_080209F4(int param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 300) - 1;
  *(byte *)(param_1 + 300) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xf) = 3;
    DAT_02022b6e = DAT_02022b6e | 2;
  }
  return;
}

