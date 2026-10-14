// sub_080E6DDC at 0x080E6DDC (thumb)

undefined4 sub_080E6DDC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x64ac);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = 0x12100;
  if (*(char *)(iVar1 + 0xce) == '\x01') {
    iVar1 = 0x3800;
  }
  else {
    iVar1 = (uint)*(byte *)(param_1 + 0x10) * 0x1400 + 0x1000;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
  *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x54) + -0x800;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080040A8(0x5b,0x300);
  }
  sub_080E6E90(param_1);
  return in_lr;
}

