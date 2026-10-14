// sub_08008D8C at 0x08008D8C (thumb)

undefined8 sub_08008D8C(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_lr;
  
  uVar2 = (int)param_1 >> 0xc;
  uVar12 = (int)param_2 >> 0xc;
  if ((0x770 < uVar2) || (0x4f5 < uVar12)) {
LAB_08008ddc:
    uVar3 = 0x41;
    goto LAB_08008f0c;
  }
  uVar11 = (uint)(byte)(&DAT_082915ec)[uVar2];
  uVar10 = (uint)(byte)(&DAT_08290dec)[uVar12];
  uVar9 = (uint)(byte)(&DAT_082921ec)[uVar11 + uVar10 * 0x80];
  uVar7 = uVar10;
  if (0xef < uVar9) {
    uVar7 = uVar10 - 1;
    uVar9 = (uint)(byte)(&DAT_082921ec)[uVar11 + uVar7 * 0x80];
    if ((uVar10 == 0) || (0xef < uVar9)) goto LAB_08008ddc;
    uVar12 = uVar10 * 10 - 1;
  }
  uVar9 = uVar9 & 0xf;
  iVar4 = uVar9 * 0x10;
  iVar5 = *(int *)((DAT_02005208 >> (uVar9 << 1) & 3) * 4 + (&DAT_08293bec)[uVar9]);
  if ((DAT_0200520c & 0x7f) == uVar9) {
    puVar8 = &DAT_0200543c +
             (uVar12 + *(int *)(iVar5 + 0x70) * -10) * (uint)DAT_0200543c +
             uVar2 + *(int *)(iVar5 + 0x6c) * -0xf + 2;
  }
  else {
    puVar8 = (ushort *)
             (((uVar12 + uVar7 * -10) * 0xf +
              (uint)(*(byte **)(&DAT_0200514c + iVar4))
                    [(uVar7 - *(int *)(iVar5 + 0x70)) * (uint)**(byte **)(&DAT_0200514c + iVar4) +
                     (uVar11 - *(int *)(iVar5 + 0x6c)) + 4] * 0x96 + uVar2 + uVar11 * -0xf) * 2 +
             *(int *)(&DAT_02005148 + iVar4));
  }
  bVar1 = *(byte *)((uint)*puVar8 + *(int *)(&DAT_02005140 + iVar4));
  iVar4 = sub_080C8A9C(param_1 & 0xfff,param_2 & 0xfff,
                       *(undefined4 *)(&DAT_08290cec + (bVar1 & 0xf) * 4));
  if (iVar4 == 0) {
LAB_08008ef2:
    uVar2 = sub_08009468(param_1,param_2);
    puVar6 = DAT_02002020;
    if ((uVar2 & 0x10) == 0) {
      uVar3 = 0;
      goto LAB_08008f0c;
    }
  }
  else if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 0x20) == 0) goto LAB_08008ef2;
    puVar6 = (undefined4 *)(iVar5 + 0x84);
  }
  else {
    puVar6 = (undefined4 *)(iVar5 + 0x80);
  }
  uVar3 = *puVar6;
LAB_08008f0c:
  return CONCAT44(in_lr,uVar3);
}

