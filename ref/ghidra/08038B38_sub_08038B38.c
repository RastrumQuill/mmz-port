// sub_08038B38 at 0x08038B38 (thumb)

undefined8 sub_08038B38(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  param_2 = *(int *)(param_1 + 0x50) + param_2;
  iVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50));
  if (param_2 < iVar1) {
    *(int *)(param_1 + 0x50) = param_2;
  }
  else {
    uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  return CONCAT44(in_lr,(uint)(param_2 >= iVar1));
}

