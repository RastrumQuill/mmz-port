// sub_08088E68 at 0x08088E68 (thumb)

undefined4 sub_08088E68(int *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (DAT_0202cabc < param_1[1]) {
    uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar1 & 0x7fffffff;
    iVar2 = sub_08128A9C(uVar1 * 2 >> 0x11,(param_4 & 0xff) - (param_3 & 0xff));
    for (iVar2 = iVar2 + (param_3 & 0xff); 0 < iVar2; iVar2 = iVar2 + -1) {
      iVar6 = *param_1;
      iVar5 = *param_2;
      if (iVar5 != 0) {
        uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar1 & 0x7fffffff;
        iVar3 = sub_08128A9C(uVar1 * 2 >> 0x11,iVar5 << 1);
        iVar6 = iVar6 + (iVar3 - iVar5);
      }
      iVar3 = param_1[1];
      iVar5 = param_2[1];
      if (iVar5 != 0) {
        uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar1 & 0x7fffffff;
        iVar4 = sub_08128A9C(uVar1 * 2 >> 0x11,iVar5 << 1);
        iVar3 = iVar3 + (iVar4 - iVar5);
      }
      sub_080D0C00(iVar6,iVar3,0);
    }
  }
  return in_lr;
}

