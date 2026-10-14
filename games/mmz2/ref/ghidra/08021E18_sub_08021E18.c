// sub_08021E18 at 0x08021E18 (thumb)

undefined8 sub_08021E18(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar5 = param_2[1];
  iVar8 = *(int *)(&DAT_020011e8 + param_3 * 0x18) + (uint)(ushort)(&DAT_020011da)[param_3 * 0xc];
  if (iVar8 < iVar5) {
    iVar4 = (&DAT_020011e0)[param_3 * 6] + (uint)(ushort)(&DAT_020011da)[param_3 * 0xc];
    iVar1 = iVar4 - iVar8;
    if (param_1[1] - iVar5 != iVar1) {
      iVar1 = (param_1[1] - iVar5) - iVar1;
      iVar9 = *param_1;
      iVar6 = *param_2;
      iVar2 = sub_080EF150((iVar8 - iVar5) * (iVar9 - iVar6),iVar1);
      iVar7 = (&DAT_020011e4)[param_3 * 6];
      iVar5 = sub_080EF150((iVar8 - iVar5) * ((&DAT_020011dc)[param_3 * 6] - iVar7),iVar1);
      if ((iVar9 - ((iVar9 - iVar6) - iVar2)) -
          ((iVar5 + iVar7) - (uint)(ushort)(&DAT_020011d8)[param_3 * 0xc]) <
          (uint)(ushort)(&DAT_020011d8)[param_3 * 0xc] << 1) {
        uVar3 = sub_08021FA8(iVar9,iVar4 + 1,param_3);
        uVar3 = uVar3 & 0xff;
        goto LAB_08021eca;
      }
    }
  }
  uVar3 = 0;
LAB_08021eca:
  return CONCAT44(in_lr,uVar3);
}

