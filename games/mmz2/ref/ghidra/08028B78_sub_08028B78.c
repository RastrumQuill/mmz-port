// sub_08028B78 at 0x08028B78 (thumb)

undefined4 sub_08028B78(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(byte *)(param_1 + 0x193) - 1;
  *(byte *)(param_1 + 0x193) = (byte)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xf) = 3;
    DAT_0202ec42 = DAT_0202ec42 | 2;
  }
  return in_lr;
}

