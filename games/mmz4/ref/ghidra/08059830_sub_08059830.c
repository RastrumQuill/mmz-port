// sub_08059830 at 0x08059830 (thumb)

undefined8 sub_08059830(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  int local_38 [4];
  undefined local_28 [4];
  int local_24;
  
  piVar4 = local_38;
  local_38[0] = 0x6000;
  local_38[1] = 0x3000;
  local_38[2] = 0xffffd000;
  local_38[3] = 0xffffa000;
  sub_08128B5C(local_28,&DAT_08128f9c,4);
  iVar6 = *(int *)(DAT_0202dbf0 + 0x54);
  iVar5 = 0;
  iVar1 = (*(byte *)(DAT_0202dbf0 + 10) >> 4 & 1) * 2;
  local_24 = iVar1;
  do {
    iVar3 = iVar6 + *piVar4 * (iVar1 + -1);
    iVar2 = sub_08059BD4(param_1);
    if ((iVar3 < iVar2) || (iVar2 = sub_08059BE0(param_1), iVar2 < iVar3)) {
      local_28[iVar5] = 0;
    }
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  iVar1 = sub_08059B54(local_28,4);
  if (-1 < iVar1) {
    iVar6 = iVar6 + (local_24 + -1) * local_38[iVar1];
  }
  return CONCAT44(in_lr,iVar6);
}

