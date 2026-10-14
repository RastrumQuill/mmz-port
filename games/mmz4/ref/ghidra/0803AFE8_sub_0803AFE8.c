// sub_0803AFE8 at 0x0803AFE8 (thumb)

undefined8 sub_0803AFE8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x58) + -0xd00;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x58);
  }
  param_2[1] = iVar1;
  return CONCAT44(in_lr,1);
}

