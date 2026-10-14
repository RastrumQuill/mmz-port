// sub_0801B18C at 0x0801B18C (thumb)

undefined8
sub_0801B18C(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = (&DAT_02005230)[param_6 * 2];
  iVar5 = (&DAT_02005234)[param_6 * 2];
  uVar1 = (&DAT_02005370)[param_6];
  if ((int *)(&DAT_020053b0)[param_6] != (int *)0x0) {
    iVar3 = iVar3 - *(int *)(&DAT_020053b0)[param_6];
  }
  iVar3 = (iVar3 - param_1) + (uint)(ushort)(&DAT_02005330)[param_6] * param_3;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  else {
    iVar3 = iVar3 + -1;
  }
  if (param_4 < iVar3) {
    iVar3 = -iVar3;
  }
  else {
    cVar2 = sub_080066AC(param_1,iVar5 + (uint)uVar1);
    if (cVar2 == '\0') {
      param_1 = iVar3 * param_3 + param_1;
      uVar4 = sub_08009CD4(param_1,iVar5 + (uint)uVar1);
      cVar2 = sub_080066AC(param_1,uVar4);
      if (cVar2 == '\0') goto LAB_0801b234;
    }
    iVar3 = 0;
  }
LAB_0801b234:
  return CONCAT44(in_lr,iVar3);
}

