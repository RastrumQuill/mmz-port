// sub_0803B104 at 0x0803B104 (thumb)

undefined8 sub_0803B104(int param_1,undefined4 *param_2)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x11) != '\0';
  if (bVar1) {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    param_2[1] = *(undefined4 *)(param_1 + 0x58);
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

