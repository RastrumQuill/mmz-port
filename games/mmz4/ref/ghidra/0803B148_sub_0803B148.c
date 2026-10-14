// sub_0803B148 at 0x0803B148 (thumb)

undefined8 sub_0803B148(int param_1,undefined4 *param_2)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x10) != '\x01';
  if (bVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    param_2[1] = *(int *)(param_1 + 0x58) + -0xc00;
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

