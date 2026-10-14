// sub_08026EA8 at 0x08026EA8 (thumb)

undefined4 sub_08026EA8(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 in_lr;
  int local_3c;
  
  local_3c = *(int *)(param_1 + 0x54);
  bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
  if ((bVar1 & 0xc) != 0) {
    iVar8 = -1;
    if ((bVar1 >> 3 & 1) != 0) {
      iVar8 = 1;
    }
    local_3c = local_3c + iVar8 * *(int *)(param_1 + 0xc4);
  }
  iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_08032A04(param_1);
  uVar9 = *(byte *)(param_1 + 10) >> 4 & 1;
  iVar2 = sub_08035F20(param_1,&DAT_08335d18);
  piVar3 = (int *)(param_1 + 0x2c4);
  uVar14 = uVar9;
  if ((local_3c + iVar2 != *piVar3) && (uVar14 = 0, local_3c + iVar2 < *piVar3)) {
    uVar14 = 1;
  }
  *(undefined *)(param_1 + 0x4c) = (char)uVar14;
  pbVar10 = (byte *)(param_1 + 0x4a);
  *pbVar10 = *pbVar10 & 0xef | (byte)(uVar14 << 4);
  if (uVar14 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar2 = sub_08035F20(param_1,&DAT_08335d18);
  iVar4 = sub_08035F38(param_1,&DAT_08335d18);
  iVar11 = (iVar2 + local_3c) - *piVar3;
  iVar13 = (iVar4 + iVar8) - *(int *)(param_1 + 0x2c8);
  iVar4 = *(ushort *)(param_1 + 0x2c2) + 0x1800;
  iVar4 = iVar4 * iVar4 - iVar13 * iVar13;
  iVar11 = iVar11 * iVar11;
  if (iVar11 - iVar4 != 0 && iVar4 <= iVar11) {
    uVar5 = sub_080EEF7C(iVar4);
    uVar5 = uVar5 & 0xffff;
    if (uVar14 == 0) {
      uVar5 = -uVar5;
    }
    local_3c = (*piVar3 - uVar5) - iVar2;
  }
  iVar2 = local_3c - *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = local_3c;
  puVar12 = (undefined4 *)(param_1 + 0xd8);
  if (iVar2 != 0) {
    sub_0801F5F4(param_1 + 0x54,param_1 + 0xb4,puVar12,*puVar12,*(undefined4 *)(param_1 + 0xdc),
                 uVar9,iVar2,1,1,0,1);
  }
  *(int *)(param_1 + 0x58) = iVar8;
  uVar5 = sub_0801F57C(param_1 + 0x54,param_1 + 0xb4,puVar12,*puVar12,
                       *(undefined4 *)(param_1 + 0xdc),uVar9,1,1,0,1);
  uVar6 = sub_08036A70(param_1,&DAT_08335d18);
  *(char *)(param_1 + 0x2c1) = (char)uVar6;
  iVar8 = sub_08036AD0(param_1,uVar6);
  if (iVar8 < 1) {
    uVar7 = (uint)*(byte *)(param_1 + 0x17f);
  }
  else {
    uVar7 = sub_08033100(param_1,(&DAT_08335c9a)[iVar8],0);
    if (1 < iVar8 - 4U) goto LAB_080270b0;
  }
  uVar14 = uVar9;
LAB_080270b0:
  *(undefined *)(param_1 + 0x4c) = (char)uVar14;
  *pbVar10 = *pbVar10 & 0xef | (byte)(uVar14 << 4);
  if (uVar14 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar8 = sub_08033090(param_1,uVar7,0xffffffff);
  if (iVar8 != 0) {
    sub_08035F88(param_1);
  }
  iVar8 = sub_08032F24(uVar6);
  if (iVar8 == 0) {
    if ((uVar5 & 0xf) != 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      sub_0801E6AC(7);
    }
  }
  else {
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
  }
  return in_lr;
}

