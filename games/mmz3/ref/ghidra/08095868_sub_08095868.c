// sub_08095868 at 0x08095868 (thumb)

undefined8 sub_08095868(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = sub_0800A104(*(int *)(param_1 + 0x54) + 0xa00,*(undefined4 *)(param_1 + 0x58));
  uVar2 = (uint)(iVar1 - *(int *)(param_1 + 0x58) < 0x440);
  iVar1 = sub_0800A104(*(int *)(param_1 + 0x54) + -0xa00);
  if (iVar1 - *(int *)(param_1 + 0x58) < 0x440) {
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

