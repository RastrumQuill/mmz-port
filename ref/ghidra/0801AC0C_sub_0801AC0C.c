// sub_0801AC0C at 0x0801AC0C (thumb)

undefined8
sub_0801AC0C(int *param_1,undefined4 param_2,undefined2 *param_3,int param_4,int param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar5 = 0;
  iVar2 = *param_1;
  uVar6 = (uint)(ushort)param_3[2];
  iVar4 = param_1[1] + uVar6 + param_5;
  iVar3 = sub_08009C3C(iVar2,iVar4);
  if (iVar3 < 0) {
    uVar6 = sub_08009B9C(iVar2,iVar4);
    if (((uVar6 & 0x70) != 0x10) && ((uVar6 & 0x70) != 0x20)) goto LAB_0801acd8;
    iVar5 = sub_08008D8C(iVar2,iVar4);
    *param_1 = iVar2 + iVar5;
  }
  else {
    iVar3 = param_4 * 2 + -1;
    cVar1 = sub_0801ACE8(param_1,param_2,iVar4,iVar3,uVar6,*param_3,param_5,param_6);
    if ((cVar1 == '\0') &&
       (cVar1 = sub_0801ACE8(param_1,param_2,iVar4,-iVar3,uVar6,param_3[1],param_5,param_6),
       cVar1 == '\0')) {
      iVar5 = 0;
      goto LAB_0801acd8;
    }
    iVar5 = *param_1 - iVar2;
    if (iVar5 == 0) goto LAB_0801acd8;
  }
  sub_0801AA7C(param_1,param_2,param_3,param_4,param_5,1,1);
LAB_0801acd8:
  return CONCAT44(in_lr,iVar5);
}

