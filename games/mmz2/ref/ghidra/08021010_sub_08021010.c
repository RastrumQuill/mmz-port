// sub_08021010 at 0x08021010 (thumb)

undefined8
sub_08021010(int *param_1,int *param_2,int param_3,int param_4,int *param_5,int *param_6,int param_7
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar6 = param_2[1] - (uint)*(ushort *)(param_4 + 6);
  iVar10 = *(int *)(&DAT_020011e8 + param_7 * 0x18) + (uint)(ushort)(&DAT_020011da)[param_7 * 0xc];
  if (iVar10 < iVar6) {
    iVar1 = (&DAT_020011e0)[param_7 * 6] + (uint)(ushort)(&DAT_020011da)[param_7 * 0xc];
    iVar2 = (param_1[1] - (uint)*(ushort *)(param_3 + 6)) - iVar6;
    iVar4 = iVar1 - iVar10;
    if (iVar2 != iVar4) {
      iVar2 = iVar2 - iVar4;
      iVar7 = *param_1;
      iVar4 = *param_2;
      iVar3 = sub_080EF150((iVar10 - iVar6) * (iVar7 - iVar4),iVar2);
      iVar11 = *param_5;
      iVar8 = (&DAT_020011dc)[param_7 * 6];
      iVar9 = (&DAT_020011e4)[param_7 * 6];
      iVar6 = sub_080EF150((iVar10 - iVar6) * (iVar8 - iVar9),iVar2);
      uVar5 = (uint)(ushort)(&DAT_020011d8)[param_7 * 0xc];
      iVar10 = *param_6;
      if ((iVar11 - ((iVar7 - iVar4) - iVar3)) - ((iVar6 + iVar9) - (uVar5 + iVar10)) <
          (uVar5 + iVar10) * 2) {
        iVar6 = iVar8 + -1 + uVar5;
        iVar2 = iVar8 - uVar5;
        if ((int)(iVar8 - uVar5) < iVar11 - iVar10) {
          iVar2 = iVar11 - iVar10;
        }
        if (iVar11 + iVar10 < iVar6) {
          iVar6 = iVar11 + iVar10;
        }
        iVar1 = iVar1 + 1;
        uVar5 = sub_080212DC(iVar2,iVar6,iVar1,iVar1,param_7);
        uVar5 = uVar5 & 0xff;
        goto LAB_080210fa;
      }
    }
  }
  uVar5 = 0;
LAB_080210fa:
  return CONCAT44(in_lr,uVar5);
}

