// sub_0802CF54 at 0x0802CF54 (thumb)

undefined4 sub_0802CF54(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined4 in_lr;
  
  pbVar9 = (byte *)(param_1 + 0x177);
  bVar1 = *pbVar9;
  puVar10 = (undefined *)(param_1 + 0x178);
  uVar2 = *puVar10;
  puVar7 = (undefined *)(param_1 + 0x179);
  uVar3 = *puVar7;
  uVar4 = (ushort)bVar1;
  if (bVar1 == 0) {
    cVar5 = sub_08036FD0(param_1);
    if (cVar5 != '\0') {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = uVar4;
      puVar8 = (undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x17a) = *puVar8;
      *puVar8 = 0;
      *(byte *)(param_1 + 0x17b) = *pbVar9;
      *pbVar9 = 0;
      *(undefined *)(param_1 + 0x17c) = *puVar10;
      *puVar10 = 0;
      *(undefined *)(param_1 + 0x17d) = *puVar7;
      *puVar7 = 0;
      *(undefined *)(param_1 + 0x17a) = *puVar8;
      *puVar8 = 3;
      *(byte *)(param_1 + 0x17b) = *pbVar9;
      *pbVar9 = 2;
      *(undefined *)(param_1 + 0x17c) = *puVar10;
      *puVar10 = 0;
      *(undefined *)(param_1 + 0x17d) = *puVar7;
      *puVar7 = 0;
      sub_0802B59C(param_1);
      return in_lr;
    }
    if ((*(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195)) & 0xc) == 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = uVar4;
      puVar8 = (undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x17a) = *puVar8;
      *puVar8 = 0;
      *(byte *)(param_1 + 0x17b) = *pbVar9;
      *pbVar9 = 0;
      *(undefined *)(param_1 + 0x17c) = *puVar10;
      *puVar10 = 0;
      *(undefined *)(param_1 + 0x17d) = *puVar7;
      *puVar7 = 0;
      *(undefined *)(param_1 + 0x17a) = *puVar8;
      *puVar8 = 3;
      *(byte *)(param_1 + 0x17b) = *pbVar9;
      *pbVar9 = 1;
      *(undefined *)(param_1 + 0x17c) = *puVar10;
      *puVar10 = 0;
      *(undefined *)(param_1 + 0x17d) = *puVar7;
      *puVar7 = 0;
LAB_0802d276:
      sub_0802B420(param_1);
      return in_lr;
    }
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    puVar8 = (undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x17a) = *puVar8;
    *puVar8 = 0;
    *(byte *)(param_1 + 0x17b) = *pbVar9;
    *pbVar9 = 0;
    *(undefined *)(param_1 + 0x17c) = *puVar10;
    *puVar10 = 0;
    *(undefined *)(param_1 + 0x17d) = *puVar7;
    *puVar7 = 0;
    *(undefined *)(param_1 + 0x17a) = *puVar8;
    *puVar8 = 3;
    *(byte *)(param_1 + 0x17b) = *pbVar9;
    *pbVar9 = 1;
    *(undefined *)(param_1 + 0x17c) = *puVar10;
    *puVar10 = 0;
    *(undefined *)(param_1 + 0x17d) = *puVar7;
    *puVar7 = 0;
  }
  else {
    if (bVar1 != 1) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0;
      puVar8 = (undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x17a) = *puVar8;
      *puVar8 = 0;
      *(byte *)(param_1 + 0x17b) = *pbVar9;
      *pbVar9 = 0;
      *(undefined *)(param_1 + 0x17c) = *puVar10;
      *puVar10 = 0;
      *(undefined *)(param_1 + 0x17d) = *puVar7;
      *puVar7 = 0;
      *(undefined *)(param_1 + 0x17a) = *puVar8;
      *puVar8 = 3;
      *(byte *)(param_1 + 0x17b) = *pbVar9;
      *pbVar9 = 2;
      *(undefined *)(param_1 + 0x17c) = *puVar10;
      *puVar10 = uVar2;
      *(undefined *)(param_1 + 0x17d) = *puVar7;
      *puVar7 = uVar3;
      sub_0802B59C(param_1);
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
    uVar6 = bVar1 & 0xc;
    if ((bVar1 & 0xc) == 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(char *)(param_1 + 0xd) = (char)uVar6;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = uVar6;
      puVar8 = (undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x17a) = *puVar8;
      *puVar8 = 0;
      *(byte *)(param_1 + 0x17b) = *pbVar9;
      *pbVar9 = 0;
      *(undefined *)(param_1 + 0x17c) = *puVar10;
      *puVar10 = 0;
      *(undefined *)(param_1 + 0x17d) = *puVar7;
      *puVar7 = 0;
      *(undefined *)(param_1 + 0x17a) = *puVar8;
      *puVar8 = 3;
      *(byte *)(param_1 + 0x17b) = *pbVar9;
      *pbVar9 = 1;
      *(undefined *)(param_1 + 0x17c) = *puVar10;
      *puVar10 = uVar2;
      *(undefined *)(param_1 + 0x17d) = *puVar7;
      *puVar7 = uVar3;
      goto LAB_0802d276;
    }
    *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = uVar4;
    puVar8 = (undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x17a) = *puVar8;
    *puVar8 = 0;
    *(byte *)(param_1 + 0x17b) = *pbVar9;
    *pbVar9 = 0;
    *(undefined *)(param_1 + 0x17c) = *puVar10;
    *puVar10 = 0;
    *(undefined *)(param_1 + 0x17d) = *puVar7;
    *puVar7 = 0;
    *(undefined *)(param_1 + 0x17a) = *puVar8;
    *puVar8 = 3;
    *(byte *)(param_1 + 0x17b) = *pbVar9;
    *pbVar9 = 1;
    *(undefined *)(param_1 + 0x17c) = *puVar10;
    *puVar10 = uVar2;
    *(undefined *)(param_1 + 0x17d) = *puVar7;
    *puVar7 = uVar3;
  }
  sub_0802BEF4(param_1);
  return in_lr;
}

