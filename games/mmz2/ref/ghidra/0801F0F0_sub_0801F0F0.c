// sub_0801F0F0 at 0x0801F0F0 (thumb)

undefined8 sub_0801F0F0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = 0;
  if (DAT_0300390c != 0) {
    iVar1 = *(int *)(DAT_0300390c + 0x2c);
  }
  return CONCAT44(in_lr,(uint)((*(int *)(iVar1 + 0x54) - *(int *)(param_1 + 0x54)) + 0x800U < 0x1001
                              ));
}

