// sub_08108678 at 0x08108678 (thumb)

undefined4 sub_08108678(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0810888C(*(undefined *)(param_1 + 0x10));
  iVar1 = sub_080D53B8(0,*(undefined *)(param_1 + 0x10));
  if (iVar1 != 0) {
    sub_08002B10(0x24);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08868f54)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

