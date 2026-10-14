// sub_08044EA4 at 0x08044EA4 (thumb)

undefined8 sub_08044EA4(int param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xffff;
  if (*(int *)(param_1 + 0x60) == 0) {
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + param_2 + 0x100)
    ;
    if (sVar2 != 0) {
      uVar3 = 1;
      goto LAB_08044f1a;
    }
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + param_2 + 0x800)
    ;
    if (sVar2 != 0) {
      iVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(uint *)(param_1 + 0x58) = iVar4 - param_2;
      uVar3 = 1;
      goto LAB_08044f1a;
    }
  }
  cVar1 = sub_08044F20(param_1,param_2);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
    uVar3 = 1;
  }
LAB_08044f1a:
  return CONCAT44(in_lr,uVar3);
}

