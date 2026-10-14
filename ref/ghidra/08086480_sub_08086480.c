// sub_08086480 at 0x08086480 (thumb)

undefined4 sub_08086480(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  iVar11 = *(int *)(param_1 + 0x20);
  iVar12 = param_1 + 0x6c;
  sub_08003458(iVar12);
  pbVar4 = (byte *)(param_1 + 0x70);
  pcVar8 = (char *)(param_1 + 0x71);
  puVar10 = (undefined *)(param_1 + 0x46);
  *puVar10 = *(undefined *)(*pcVar8 * 4 + *(int *)((uint)*pbVar4 * 4 + *(int *)(param_1 + 0x6c)));
  puVar5 = (uint *)(param_1 + 0x90);
  if ((*(ushort *)puVar5 & 0x100) != 0) {
    *(undefined *)(param_1 + 0xd) = 3;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    iVar9 = *(int *)(param_1 + 0x50);
    iVar7 = iVar9 + 0x380;
    *(int *)(param_1 + 0x50) = iVar7;
    if ((iVar7 <= *(int *)(iVar11 + 0xbc) + 0x12000) ||
       (cVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),iVar9 + 0xb80), cVar3 == '\0'))
    goto LAB_080866e4;
    uVar6 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar6;
    sub_080033F0(iVar12,2);
    sub_08003458(iVar12);
    *puVar10 = *(undefined *)(*pcVar8 * 4 + *(int *)((uint)*pbVar4 * 4 + *(int *)(param_1 + 0x6c)));
    *puVar5 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    goto LAB_080865ec;
  }
  if (1 < bVar1) {
    if (bVar1 == 2) {
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
      }
      goto LAB_080866e4;
    }
    if (bVar1 != 3) goto LAB_080866e4;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x380;
    uVar2 = *(ushort *)puVar5;
    if ((uVar2 & 0x100) == 0) {
      sub_080033F0(iVar12,2);
      sub_08003458(iVar12);
      *puVar10 = *(undefined *)
                  (*pcVar8 * 4 + *(int *)((uint)*pbVar4 * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xd) = 2;
      *puVar5 = uVar2 & 0x100;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      goto LAB_080866e4;
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    iVar12 = *(int *)(param_1 + 0x4c);
    *(int *)(iVar7 + 0x4c) = iVar12;
    *(int *)(iVar7 + 0x50) = *(int *)(param_1 + 0x50) + 0x1800;
    if (*(int *)(iVar11 + 0xb8) + 0xf000 < iVar12) {
      cVar3 = sub_080065AC(iVar12 + -0x800);
      if (cVar3 != '\0') {
        iVar12 = *(int *)(iVar7 + 0x4c);
        iVar9 = -0x800;
LAB_08086686:
        uVar6 = sub_08008360(iVar12 + iVar9,*(undefined4 *)(iVar7 + 0x50));
        *(undefined4 *)(iVar7 + 0x50) = uVar6;
      }
    }
    else {
      cVar3 = sub_080065AC(iVar12 + 0x800);
      if (cVar3 != '\0') {
        iVar12 = *(int *)(iVar7 + 0x4c);
        iVar9 = 0x800;
        goto LAB_08086686;
      }
    }
    *(int *)(param_1 + 0x50) = *(int *)(iVar7 + 0x50) + -0x1800;
    goto LAB_080866e4;
  }
  if ((bVar1 != 0) ||
     (iVar12 = *(int *)(param_1 + 0x50) + -0x800, *(int *)(param_1 + 0x50) = iVar12,
     *(int *)(iVar11 + 0xbc) <= iVar12)) goto LAB_080866e4;
  iVar7 = *(int *)(DAT_0202286c + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar7;
  iVar12 = *(int *)(iVar11 + 0x4c);
  if (iVar12 < iVar7) {
    if (iVar7 < iVar12 + 0x7000) {
      iVar12 = iVar12 + 0x6000;
      if (iVar7 <= iVar12) goto LAB_080865ec;
    }
    else {
      iVar9 = 0x8000;
LAB_08086562:
      iVar12 = iVar12 + iVar9;
      if (iVar12 <= iVar7) goto LAB_080865ec;
    }
LAB_08086568:
    *(int *)(param_1 + 0x4c) = iVar12;
  }
  else {
    if (iVar12 + -0x7000 <= iVar7) {
      iVar9 = -0x6000;
      goto LAB_08086562;
    }
    iVar12 = iVar12 + -0x8000;
    if (iVar12 < iVar7) goto LAB_08086568;
  }
LAB_080865ec:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080866e4:
  if (*(int *)(iVar11 + 0xbc) + 0x1f400 < *(int *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  return in_lr;
}

