// sub_08060864 at 0x08060864 (thumb)

undefined8 sub_08060864(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  param_2 = *(int *)(param_1 + 0x58) + param_2;
  iVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58));
  if (param_2 < iVar1) {
    *(int *)(param_1 + 0x58) = param_2;
  }
  else {
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  return CONCAT44(in_lr,(uint)(param_2 >= iVar1));
}

