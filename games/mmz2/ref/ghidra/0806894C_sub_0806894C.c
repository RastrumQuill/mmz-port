// sub_0806894C at 0x0806894C (thumb)

undefined8 sub_0806894C(int param_1,short param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    *(char *)(param_1 + 0xb8) = '\x01';
  }
  param_3 = *(int *)(param_1 + 0x54) + param_3;
  *(int *)(param_1 + 0x54) = param_3;
  param_4 = *(int *)(param_1 + 0x58) + param_4;
  *(int *)(param_1 + 0x58) = param_4;
  if (param_2 == 0) {
    sVar1 = sub_08008CFC(param_3,param_4 + *(char *)(param_1 + 0xb7) * 0x100 + 0x800);
    if (sVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar2 + *(char *)(param_1 + 0xb7) * -0x100;
    }
    uVar3 = 0;
    *(undefined *)(param_1 + 0xb8) = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

