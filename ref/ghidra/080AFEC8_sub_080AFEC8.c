// sub_080AFEC8 at 0x080AFEC8 (thumb)

void sub_080AFEC8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
  }
  if (iVar1 < 0x7000) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return;
}

