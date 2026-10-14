// sub_080B3AF0 at 0x080B3AF0 (thumb)

undefined8 sub_080B3AF0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb8);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x54);
  }
  return CONCAT44(in_lr,(uint)(0x2800 < iVar1));
}

