// sub_0805B778 at 0x0805B778 (thumb)

undefined8 sub_0805B778(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_08008360(*(int *)(param_1 + 0x4c) + 0xa00,*(undefined4 *)(param_1 + 0x50));
  uVar2 = (uint)(iVar1 - *(int *)(param_1 + 0x50) < 0x440);
  iVar1 = sub_08008360(*(int *)(param_1 + 0x4c) + -0xa00);
  if (iVar1 - *(int *)(param_1 + 0x50) < 0x440) {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

