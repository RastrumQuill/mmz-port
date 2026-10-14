// sub_08013A30 at 0x08013A30 (thumb)

undefined4 sub_08013A30(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = (*(int *)(param_1 + 0x38) - (DAT_0202e48c >> 8)) + 5;
  if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  if (iVar2 < -0xff) {
    iVar2 = -0xff;
  }
  if (iVar2 < 0) {
    DAT_0200241a = -(short)iVar2 & 0xff;
  }
  else {
    DAT_0200241a = 0;
  }
  uVar1 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
  *(short *)(&DAT_020023cc + uVar1) = (short)*(undefined4 *)(param_1 + 0x34);
  *(short *)((int)&DAT_020023cc + uVar1 * 4 + 2) = (short)iVar2;
  return in_lr;
}

