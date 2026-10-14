// sub_080943F4 at 0x080943F4 (thumb)

longlong sub_080943F4(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  param_2 = iVar2 + param_2;
  *(int *)(param_1 + 0x54) = param_2;
  param_3 = iVar3 + param_3;
  *(int *)(param_1 + 0x58) = param_3;
  sVar1 = sub_08008354(param_2,param_3 + -0x1000);
  if (sVar1 != -0x8000) {
    *(int *)(param_1 + 0x54) = iVar2;
    *(int *)(param_1 + 0x58) = iVar3;
  }
  if (*(int *)(param_1 + 0x58) < DAT_0202d004 + 0x1000) {
    *(int *)(param_1 + 0x58) = DAT_0202d004 + 0x1000;
  }
  return (ulonglong)in_lr << 0x20;
}

