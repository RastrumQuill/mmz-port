// sub_08059798 at 0x08059798 (thumb)

undefined8 sub_08059798(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54) + ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * 0x800;
  iVar4 = *(int *)(param_1 + 0xbc) + -0x2200;
  if ((((iVar3 - *(int *)(DAT_0202dbf0 + 0x54)) + 0x2800U < 0x5001) &&
      ((iVar4 - (*(int *)(DAT_0202dbf0 + 0x58) + -0x1000)) + 0x2800U < 0x5001)) ||
     ((piVar1 = (int *)sub_080503E4(param_1), piVar1 != (int *)0x0 &&
      (((iVar3 - *piVar1) + 0x2800U < 0x5001 && ((iVar4 - piVar1[1]) + 0x2800U < 0x5001)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

