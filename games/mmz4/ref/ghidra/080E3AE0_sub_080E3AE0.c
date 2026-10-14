// sub_080E3AE0 at 0x080E3AE0 (thumb)

undefined4 sub_080E3AE0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if ((*(byte *)(iVar1 + 3) & 1) != 0) {
    sub_080D0894(3,param_1 + 0x54);
  }
  if ((*(byte *)(iVar1 + 3) & 2) != 0) {
    sub_080D0894(2,param_1 + 0x54);
  }
  if ((*(byte *)(iVar1 + 3) & 4) != 0) {
    sub_080D0894(1,param_1 + 0x54);
    if (DAT_0202cabc < *(int *)(param_1 + 0x58)) {
      sub_08002B10(0x31);
    }
    else {
      sub_08002B10(0x2a);
    }
  }
  if ((*(byte *)(iVar1 + 3) & 8) != 0) {
    sub_080D0894(1,param_1 + 0x54);
    if (DAT_0202cabc < *(int *)(param_1 + 0x58)) {
      sub_08002B10(0x31);
    }
    else {
      sub_08002B10(0x35);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0x10);
  return in_lr;
}

