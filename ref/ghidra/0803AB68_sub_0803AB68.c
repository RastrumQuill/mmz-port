// sub_0803AB68 at 0x0803AB68 (thumb)

undefined4 sub_0803AB68(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0xcc);
  iVar1 = sub_080C88E8((*(int *)(param_1 + 0x4c) - *(int *)(iVar7 + 0x4c)) * 0x100 >> 0x10,
                       ((*(int *)(param_1 + 0x50) + -0x800) - *(int *)(iVar7 + 0x50)) * 0x100 >>
                       0x10);
  uVar2 = ((uint)(iVar1 << 0x10) >> 0x18) - 0x40;
  uVar3 = uVar2 & 0xff;
  *(char *)(param_1 + 0x1f) = (char)uVar2;
  iVar5 = *(int *)(param_1 + 0x4c) + (short)(&DAT_080c8e24)[uVar3] * 0x30;
  iVar10 = *(int *)(param_1 + 0x50) + (short)(&DAT_080c8e24)[uVar3 + 0x40] * -0x30;
  iVar1 = *(int *)(iVar7 + 0x4c);
  iVar7 = *(int *)(iVar7 + 0x50);
  iVar6 = *(byte *)(param_1 + 0xd8) - 1;
  iVar8 = *(int *)(param_1 + 0x24);
  if (iVar8 != 0) {
    iVar11 = 0;
    iVar9 = 0;
    do {
      if (iVar6 == 0) {
        *(int *)(iVar8 + 0x4c) = iVar5;
        *(int *)(iVar8 + 0x50) = iVar10;
      }
      else {
        iVar4 = sub_080C8AD0(iVar9,iVar6);
        *(int *)(iVar8 + 0x4c) = iVar4 + iVar5;
        iVar4 = sub_080C8AD0(iVar11,iVar6);
        *(int *)(iVar8 + 0x50) = iVar10 + iVar4;
      }
      *(undefined4 *)(iVar8 + 0x5c) = *(undefined4 *)(iVar8 + 0x4c);
      *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)(iVar8 + 0x50);
      iVar11 = iVar11 + (iVar7 - (iVar10 + -0x800));
      iVar9 = iVar9 + (iVar1 - iVar5);
      iVar8 = *(int *)(iVar8 + 0x24);
    } while (iVar8 != 0);
  }
  return in_lr;
}

