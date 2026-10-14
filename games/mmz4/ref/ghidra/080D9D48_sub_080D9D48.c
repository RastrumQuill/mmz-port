// sub_080D9D48 at 0x080D9D48 (thumb)

undefined4 sub_080D9D48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(undefined *)(param_1 + 0x13) = 0;
  iVar1 = (uint)*(byte *)(param_1 + 0x7c) * -0x200 + 0x100;
  *(int *)(param_1 + 0x5c) = iVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar1 = iVar1 * 0xb4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  sub_0801CF00(param_1,0x2506);
  return in_lr;
}

