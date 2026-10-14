// sub_0806082C at 0x0806082C (thumb)

undefined8 sub_0806082C(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  param_2 = *(int *)(param_1 + 0x54) + param_2;
  iVar2 = *(int *)(param_1 + 0xd4);
  if (*(uint *)(param_1 + 0xdc) < (uint)(param_2 - iVar2)) {
    if (param_2 < iVar2) {
      *(int *)(param_1 + 0x54) = iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xd8);
    }
    uVar1 = 1;
  }
  else {
    *(int *)(param_1 + 0x54) = param_2;
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

