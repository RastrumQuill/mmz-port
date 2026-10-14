// sub_080C43B4 at 0x080C43B4 (thumb)

undefined4 sub_080C43B4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte **ppbVar15;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 4) == '\0') {
    sub_08001904(0x74,0);
  }
  else {
    sub_08001904(0x75,0);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = sub_0801B374();
  iVar6 = *(int *)(param_1 + 0x14);
  bVar1 = *(byte *)(iVar3 + 0x218);
  uVar13 = 3;
  pbVar14 = &UNK_082cc28a;
  ppbVar15 = (byte **)&UNK_082cc278;
  do {
    pbVar14 = pbVar14 + -2;
    ppbVar15 = ppbVar15 + -1;
    uVar13 = uVar13 - 1;
    puVar9 = (ushort *)
             (iVar6 + ((uint)*pbVar14 + (uint)(byte)(&UNK_082cc285)[uVar13 * 2] * 0x20) * 2);
    iVar5 = 3;
    if (uVar13 == bVar1) {
      iVar5 = 2;
    }
    uVar11 = 0;
    pbVar7 = *ppbVar15;
    do {
      *puVar9 = (ushort)*pbVar7 + (ushort)pbVar7[1] * 0x20 & 0x3ff | (ushort)(iVar5 << 0xc);
      puVar9 = puVar9 + 1;
      pbVar7 = pbVar7 + 2;
      uVar11 = uVar11 + 1;
    } while (uVar11 < 6);
  } while (uVar13 != 0);
  uVar13 = (uint)*(byte *)(iVar3 + 0x219);
  uVar11 = 3;
  pbVar14 = &UNK_082cc290;
  ppbVar15 = (byte **)&UNK_082cc284;
  do {
    pbVar14 = pbVar14 + -2;
    ppbVar15 = ppbVar15 + -1;
    uVar11 = uVar11 - 1;
    puVar9 = (ushort *)
             (iVar6 + ((uint)*pbVar14 + (uint)(byte)(&UNK_082cc28b)[uVar11 * 2] * 0x20) * 2);
    iVar3 = 3;
    if (uVar11 == uVar13) {
      iVar3 = 2;
    }
    uVar12 = 0;
    iVar5 = uVar13 * 4;
    pbVar7 = *ppbVar15;
    do {
      *puVar9 = (ushort)*pbVar7 + (ushort)pbVar7[1] * 0x20 & 0x3ff | (ushort)(iVar3 << 0xc);
      puVar9 = puVar9 + 1;
      pbVar7 = pbVar7 + 2;
      uVar12 = uVar12 + 1;
    } while (uVar12 < 6);
  } while (uVar11 != 0);
  uVar2 = sub_080C4604(4,uVar4);
  sub_080C46D0(iVar6 + 0x3ca,uVar2,2);
  puVar10 = (undefined2 *)(iVar6 + 0x41c);
  puVar8 = *(undefined2 **)(&DAT_082cc2e0 + iVar5);
  iVar3 = 0xd;
  do {
    *puVar10 = *puVar8;
    puVar10 = puVar10 + 1;
    puVar8 = puVar8 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  sub_080C8A9C(param_1,uVar4,*(undefined4 *)(&DAT_082cc300 + iVar5));
  return in_lr;
}

