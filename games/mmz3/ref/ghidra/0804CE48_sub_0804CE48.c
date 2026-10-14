// sub_0804CE48 at 0x0804CE48 (thumb)

undefined8 sub_0804CE48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar1 < 1) {
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202f5c0 + 0x54);
  }
  return CONCAT44(in_lr,(uint)(0x4fff < iVar1));
}

