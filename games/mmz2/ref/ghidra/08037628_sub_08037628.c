// sub_08037628 at 0x08037628 (thumb)

undefined8 sub_08037628(int param_1)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined uVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  int *piVar11;
  uint uVar12;
  byte bVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 in_lr;
  
  uVar15 = 0;
  iVar8 = *(int *)(param_1 + 0x54);
  bVar3 = *(byte *)(param_1 + 10) >> 4;
  bVar9 = bVar3 & 1;
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) &&
     ((uVar15 = 1, (*(uint *)(param_1 + 0x8c) & 0x200) != 0 || (*(short *)(param_1 + 0xa4) == 0))))
  {
    uVar15 = 3;
  }
  iVar5 = sub_08037F78(param_1);
  if (iVar5 != 0) {
    uVar15 = uVar15 | 0x10;
  }
  if (((*(uint *)(param_1 + 0xc) & 0xffff00) == 0x20400) ||
     ((*(char *)(param_1 + 0x94) != '\0' && ((*(uint *)(param_1 + 0x8c) & 1) == 0))))
  goto LAB_0803788c;
  bVar10 = *(byte *)(param_1 + 0x18c) & 0x43;
  piVar11 = (int *)(param_1 + 0xb4);
  if ((*(byte *)(param_1 + 0x18c) & 0x43) != 0) goto LAB_0803788c;
  cVar4 = sub_080379F4(param_1);
  if (cVar4 == '\0') {
    sub_0801F57C(param_1 + 0x54,piVar11,(undefined4 *)(param_1 + 0xd8),
                 *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),bVar9,1,1,1,0);
  }
  else {
    sub_0801F57C(param_1 + 0x54,piVar11,(undefined4 *)(param_1 + 0xd8),
                 *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),bVar9,1,bVar10,1,
                 bVar10);
  }
  puVar14 = (undefined4 *)(param_1 + 0xd8);
  if ((*(ushort *)(param_1 + 0xec) & 6) == 4) {
    uVar15 = uVar15 | 8;
  }
  else {
    sub_0801F5B8(param_1 + 0x54,piVar11,puVar14,*puVar14,*(undefined4 *)(param_1 + 0xdc),bVar9,1,1,1
                 ,0);
    if ((*(ushort *)(param_1 + 0xee) & 6) == 4) {
      uVar15 = uVar15 | 8;
    }
    else {
      iVar8 = iVar8 - *piVar11;
      bVar10 = 0xc;
      if (*(char *)(param_1 + 0xd) == '\0') {
        bVar10 = 0x4c;
      }
      bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
      bVar10 = bVar10 & bVar1;
      if (iVar8 == 0) {
        if (bVar10 == 0) goto LAB_0803780e;
        bVar13 = bVar9;
        if ((bVar10 & 0xc) != 0) {
          bVar13 = bVar1 >> 3 & 1;
        }
        iVar8 = -1;
        if (bVar13 != 0) {
          iVar8 = 1;
        }
      }
      sub_0801F5F4(param_1 + 0x54,piVar11,puVar14,*puVar14,*(undefined4 *)(param_1 + 0xdc),bVar9,
                   iVar8,1,1,1,0);
      iVar5 = -1;
      if ((bVar3 & 1) != 0) {
        iVar5 = 1;
      }
      if (iVar8 * iVar5 < 0) {
        uVar2 = *(ushort *)(param_1 + 0xea);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0xe8);
      }
      if ((uVar2 & 6) == 4) {
        uVar15 = uVar15 | 8;
      }
    }
  }
LAB_0803780e:
  if ((((uVar15 & 8) != 0) && ((*(byte *)(param_1 + 0x202) & 2) != 0)) &&
     (uVar12 = uVar15 & 0xfffffff7, uVar6 = uVar15 & 1, uVar15 = uVar12, uVar6 == 0)) {
    uVar15 = uVar12 | 1;
    sub_080078B0(param_1 + 0x74,6);
    sub_08014360(6);
    uVar7 = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar7 = 0xff;
    }
    *(undefined *)(param_1 + 0x192) = uVar7;
    if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) {
      uVar15 = uVar12 | 3;
    }
  }
LAB_0803788c:
  uVar6 = sub_08037E64(param_1);
  *(char *)(param_1 + 0x191) = (char)(uVar15 | uVar6);
  return CONCAT44(in_lr,uVar15 | uVar6);
}

