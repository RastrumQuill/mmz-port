// sub_0801B05C at 0x0801B05C (thumb)

undefined8
sub_0801B05C(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = true;
  while( true ) {
    if (((&DAT_02005210)[param_6] & 0x80) == 0) {
      bVar1 = false;
    }
    piVar2 = (int *)(&DAT_020053b0)[param_6];
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
      iVar3 = 0;
    }
    else {
      iVar4 = *piVar2;
      iVar3 = piVar2[1];
    }
    if ((param_5 <=
         (int)(((&DAT_02005234)[param_6 * 2] - (uint)(ushort)(&DAT_02005370)[param_6]) - iVar3)) ||
       (param_5 <= (int)((&DAT_02005234)[param_6 * 2] - (uint)(ushort)(&DAT_02005370)[param_6])))
    break;
    if ((!bVar1) || (param_6 = sub_08008F34(param_6,param_1,param_2), param_6 < 0)) {
      iVar3 = 0;
LAB_0801b11e:
      return CONCAT44(in_lr,iVar3);
    }
  }
  iVar3 = (((&DAT_02005230)[param_6 * 2] - iVar4) - param_1) +
          param_3 * (uint)(ushort)(&DAT_02005330)[param_6];
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  else {
    iVar3 = iVar3 + -1;
  }
  if (param_4 < iVar3) {
    iVar3 = -iVar3;
  }
  goto LAB_0801b11e;
}

