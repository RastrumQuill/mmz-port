// sub_0809A234 at 0x0809A234 (thumb)

undefined4 sub_0809A234(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  DAT_02022e8a = 4;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809A120();
  return in_lr;
}

