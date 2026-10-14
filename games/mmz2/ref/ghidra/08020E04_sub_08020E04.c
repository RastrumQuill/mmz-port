// sub_08020E04 at 0x08020E04 (thumb)

undefined8
sub_08020E04(int *param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6,int param_7
            ,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar6 = param_2[1] + (uint)*(ushort *)(param_4 + 4);
  iVar9 = (*(int *)(&DAT_020011e8 + param_8 * 0x18) + 1) -
          (uint)(ushort)(&DAT_020011da)[param_8 * 0xc];
  if (iVar6 < iVar9) {
    iVar10 = ((&DAT_020011e0)[param_8 * 6] + 1) - (uint)(ushort)(&DAT_020011da)[param_8 * 0xc];
    iVar1 = (param_1[1] + (uint)*(ushort *)(param_3 + 4)) - iVar6;
    iVar5 = iVar10 - iVar9;
    if (iVar1 == iVar5) {
      if (param_7 == 0) {
LAB_08020ec8:
        iVar6 = (&DAT_020011dc)[param_8 * 6];
        iVar9 = iVar6 - (uint)(ushort)(&DAT_020011d8)[param_8 * 0xc];
        iVar6 = iVar6 + -1 + (uint)(ushort)(&DAT_020011d8)[param_8 * 0xc];
        iVar1 = *param_5 - *param_6;
        if (iVar9 < iVar1) {
          iVar9 = iVar1;
        }
        iVar1 = *param_5 + *param_6;
        if (iVar1 < iVar6) {
          iVar6 = iVar1;
        }
        iVar10 = iVar10 + -1;
        uVar2 = sub_080212DC(iVar9,iVar6,iVar10,iVar10,param_8);
        uVar2 = uVar2 & 0xff;
        goto LAB_08020f14;
      }
    }
    else {
      iVar1 = iVar1 - iVar5;
      iVar7 = *param_1;
      iVar5 = *param_2;
      iVar3 = sub_080EF150((iVar9 - iVar6) * (iVar7 - iVar5),iVar1);
      iVar4 = *param_5;
      iVar8 = (&DAT_020011e4)[param_8 * 6];
      iVar6 = sub_080EF150((iVar9 - iVar6) * ((&DAT_020011dc)[param_8 * 6] - iVar8),iVar1);
      if ((iVar4 - ((iVar7 - iVar5) - iVar3)) -
          ((iVar6 + iVar8) - ((uint)(ushort)(&DAT_020011d8)[param_8 * 0xc] + *param_6)) <
          ((uint)(ushort)(&DAT_020011d8)[param_8 * 0xc] + *param_6) * 2) goto LAB_08020ec8;
    }
  }
  uVar2 = 0;
LAB_08020f14:
  return CONCAT44(in_lr,uVar2);
}

