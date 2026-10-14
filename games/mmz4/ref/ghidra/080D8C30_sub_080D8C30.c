// sub_080D8C30 at 0x080D8C30 (thumb)

undefined4 sub_080D8C30(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(undefined *)(param_1 + 0x13) = 0;
  uVar1 = FUN_081288bc(*(int *)(param_1 + 0x5c) * -2,3);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined *)(param_1 + 0x13) = 1;
  }
  if (*(byte *)(param_1 + 0x7c) == 1) {
    *(undefined *)(param_1 + 0x13) = 1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
  }
  sub_0801CF00(param_1,(uint)*(byte *)(param_1 + 0x7c) * 0x20000 + 0x20100000 >> 0x10);
  return in_lr;
}

