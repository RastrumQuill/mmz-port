// sub_0803B058 at 0x0803B058 (thumb)

undefined8 sub_0803B058(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = -0xb00;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = 0xb00;
  }
  *param_2 = iVar1 + iVar2;
  param_2[1] = *(int *)(param_1 + 0x58) + 0x400;
  return CONCAT44(in_lr,1);
}

