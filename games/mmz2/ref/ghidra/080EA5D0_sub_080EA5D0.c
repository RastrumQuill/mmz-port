// sub_080EA5D0 at 0x080EA5D0 (thumb)

undefined4 sub_080EA5D0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  undefined2 *puVar7;
  byte *pbVar8;
  int iVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 in_lr;
  byte *local_24;
  
  if (*(char *)(param_1 + 4) == '\0') {
    if (*(char *)(param_1 + 6) != '\0') {
      if ((DAT_0202ebb4 & 2) == 0) {
        sub_08002EF0(0x22);
        sub_08002D68(0x22,0);
        sub_08002EF0(0x22);
        sub_08002D68(0x21,0);
      }
      else {
        sub_08002EF0(0x4f);
        sub_08002D68(0x4f,0);
        sub_08002EF0(0x4f);
        sub_08002D68(0x50,0);
      }
    }
    if ((DAT_0202ebb4 & 2) == 0) {
      sub_08002EA0(0x21);
    }
    else {
      sub_08002EA0(0x50);
    }
  }
  else {
    if (*(char *)(param_1 + 6) != *(char *)(param_1 + 4)) {
      if ((DAT_0202ebb4 & 2) == 0) {
        sub_08002EF0(0x21);
        sub_08002D68(0x21,0);
        sub_08002EF0(0x21);
        sub_08002D68(0x22,0);
      }
      else {
        sub_08002EF0(0x50);
        sub_08002D68(0x50,0);
        sub_08002EF0(0x50);
        sub_08002D68(0x4f,0);
      }
    }
    if ((DAT_0202ebb4 & 2) == 0) {
      sub_08002EA0(0x22);
    }
    else {
      sub_08002EA0(0x4f);
    }
  }
  *(undefined *)(param_1 + 6) = *(undefined *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = sub_0801EBDC();
  iVar6 = *(int *)(param_1 + 0x14);
  bVar1 = *(byte *)(iVar3 + 500);
  uVar15 = 3;
  pbVar8 = &UNK_0835e7c6;
  do {
    pbVar8 = pbVar8 + -2;
    uVar15 = uVar15 - 1;
    puVar10 = (ushort *)
              (iVar6 + ((uint)(byte)(&UNK_0835e7c1)[uVar15 * 2] * 0x20 + (uint)*pbVar8) * 2);
    if (uVar15 == bVar1) {
      iVar9 = 2;
    }
    else {
      iVar9 = 3;
      if ((DAT_0202ebb4 & 2) != 0) {
        iVar9 = 10;
      }
    }
    uVar13 = 0;
    iVar12 = 0;
    do {
      puVar5 = &UNK_0835e79c;
      if ((DAT_0202ebb4 & 2) != 0) {
        puVar5 = &UNK_0835e790;
      }
      *puVar10 = (ushort)((byte *)(iVar12 + *(int *)(puVar5 + uVar15 * 4)))[1] * 0x20 +
                 (ushort)*(byte *)(iVar12 + *(int *)(puVar5 + uVar15 * 4)) & 0x3ff |
                 (ushort)(iVar9 << 0xc);
      puVar10 = puVar10 + 1;
      iVar12 = iVar12 + 2;
      uVar13 = uVar13 + 1;
    } while (uVar13 < 6);
  } while (uVar15 != 0);
  uVar15 = (uint)*(byte *)(iVar3 + 0x1f5);
  uVar13 = 3;
  local_24 = &DAT_0835e7cc;
  do {
    local_24 = local_24 + -2;
    uVar13 = uVar13 - 1;
    puVar10 = (ushort *)
              (iVar6 + ((uint)(byte)(&UNK_0835e7c7)[uVar13 * 2] * 0x20 + (uint)*local_24) * 2);
    if (uVar13 == uVar15) {
      iVar3 = 2;
    }
    else {
      iVar3 = 3;
      if ((DAT_0202ebb4 & 2) != 0) {
        iVar3 = 10;
      }
    }
    uVar14 = 0;
    iVar9 = uVar15 * 4;
    iVar12 = 0;
    do {
      puVar5 = &UNK_0835e7b4;
      if ((DAT_0202ebb4 & 2) != 0) {
        puVar5 = &UNK_0835e7a8;
      }
      *puVar10 = (ushort)((byte *)(iVar12 + *(int *)(puVar5 + uVar13 * 4)))[1] * 0x20 +
                 (ushort)*(byte *)(iVar12 + *(int *)(puVar5 + uVar13 * 4)) & 0x3ff |
                 (ushort)(iVar3 << 0xc);
      puVar10 = puVar10 + 1;
      iVar12 = iVar12 + 2;
      uVar14 = uVar14 + 1;
    } while (uVar14 < 6);
  } while (uVar13 != 0);
  uVar2 = sub_080EA9C8(4,uVar4);
  sub_080EAAB8(iVar6 + 0x3ca,uVar2,2);
  puVar11 = (undefined2 *)(iVar6 + 0x41c);
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar5 = &DAT_0835e874;
  }
  else {
    puVar5 = &DAT_0835e868;
  }
  puVar7 = *(undefined2 **)(puVar5 + iVar9);
  iVar3 = 0xd;
  do {
    *puVar11 = *puVar7;
    puVar11 = puVar11 + 1;
    puVar7 = puVar7 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  sub_080EF11C(param_1,uVar4,*(undefined4 *)(&DAT_0835e894 + iVar9));
  return in_lr;
}

