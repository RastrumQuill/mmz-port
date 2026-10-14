// sub_08021CD0 at 0x08021CD0 (thumb)

undefined8 sub_08021CD0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar5 = param_2[1];
  iVar8 = (*(int *)(&DAT_020011e8 + param_3 * 0x18) + 1) -
          (uint)(ushort)(&DAT_020011da)[param_3 * 0xc];
  if (iVar5 < iVar8) {
    iVar9 = ((&DAT_020011e0)[param_3 * 6] + 1) - (uint)(ushort)(&DAT_020011da)[param_3 * 0xc];
    iVar1 = iVar9 - iVar8;
    if (param_1[1] - iVar5 != iVar1) {
      iVar1 = (param_1[1] - iVar5) - iVar1;
      iVar2 = *param_1;
      iVar6 = *param_2;
      iVar3 = sub_080EF150((iVar8 - iVar5) * (iVar2 - iVar6),iVar1);
      iVar7 = (&DAT_020011e4)[param_3 * 6];
      iVar5 = sub_080EF150((iVar8 - iVar5) * ((&DAT_020011dc)[param_3 * 6] - iVar7),iVar1);
      if ((iVar2 - ((iVar2 - iVar6) - iVar3)) -
          ((iVar5 + iVar7) - (uint)(ushort)(&DAT_020011d8)[param_3 * 0xc]) <
          (uint)(ushort)(&DAT_020011d8)[param_3 * 0xc] << 1) {
        uVar4 = sub_08021FA8(iVar2,iVar9 + -1,param_3);
        uVar4 = uVar4 & 0xff;
        goto LAB_08021d86;
      }
    }
  }
  uVar4 = 0;
LAB_08021d86:
  return CONCAT44(in_lr,uVar4);
}

