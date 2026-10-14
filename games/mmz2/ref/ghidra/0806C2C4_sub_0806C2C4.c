// sub_0806C2C4 at 0x0806C2C4 (thumb)

undefined8 sub_0806C2C4(int param_1,short param_2,int param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc2) = 1;
  *(undefined *)(param_1 + 0xd) = 3;
  *(undefined *)(param_1 + 0xe) = 0;
  if (*(char *)(param_1 + 0xbd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + param_3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_4;
  }
  else if ((param_3 != 0) || (param_4 != 0)) {
    *(char *)(param_1 + 0xbd) = '\0';
    *(undefined *)(param_1 + 0xe) = 2;
    uVar2 = 0;
    goto LAB_0806c330;
  }
  if ((param_2 == 0) ||
     (sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar1 != 0)) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 != 0) {
      iVar3 = 1;
    }
    *(char *)(param_1 + 0xd) = (char)iVar3;
    uVar2 = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    uVar2 = 1;
  }
LAB_0806c330:
  return CONCAT44(in_lr,uVar2);
}

