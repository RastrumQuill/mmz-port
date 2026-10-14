// sub_08096258 at 0x08096258 (thumb)

undefined8 sub_08096258(int param_1,short param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  param_3 = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x54) = param_3;
  param_4 = *(int *)(param_1 + 0x58) + param_4;
  *(int *)(param_1 + 0x58) = param_4;
  if ((param_2 == 0) || (sVar1 = sub_08008CFC(param_3,param_4), sVar1 != 0)) {
    iVar2 = *(int *)(param_1 + 0xc0);
    if (iVar2 != 0) {
      iVar2 = 1;
    }
    *(char *)(param_1 + 0xd) = (char)iVar2;
    uVar3 = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

