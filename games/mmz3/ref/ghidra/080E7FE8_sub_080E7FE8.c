// sub_080E7FE8 at 0x080E7FE8 (thumb)

undefined4 sub_080E7FE8(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined2 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ushort *puVar9;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 4);
  if ((*(char *)(param_1 + 0x10) == -0x5a) && ((DAT_0200243c & 0x10) != 0)) {
    *(undefined2 *)(param_1 + 0x78) = 0xbd00;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x600;
  }
  puVar9 = (ushort *)(param_1 + 0x78);
  pbVar6 = (byte *)(param_1 + 0x7d);
  if ((*(char *)(param_1 + 0x10) == -0x59) && ((DAT_02002439 & 2) != 0)) {
    *puVar9 = 0xbb03;
    *pbVar6 = 2;
  }
  if (*puVar9 == 0xb00a) {
    if (DAT_0200247b == '\x01') {
      uVar1 = 0xb10a;
    }
    else {
      if (DAT_0200247b != '\x02') goto LAB_080e808c;
      uVar1 = 0xb20a;
    }
    *puVar9 = uVar1;
  }
LAB_080e808c:
  if (*puVar9 == 0xaa04) {
    if (DAT_0200247a == '\x01') {
      uVar1 = 0xab04;
    }
    else {
      if (DAT_0200247a != '\x02') goto LAB_080e80bc;
      uVar1 = 0xac04;
    }
    *puVar9 = uVar1;
  }
LAB_080e80bc:
  if ((byte)(*(char *)(param_1 + 0x10) - 0x14U) < 0x4a) {
    *(undefined2 *)(param_1 + 0x7a) = DAT_0202fd2e;
    *(char *)(param_1 + 0x7e) = (char)DAT_0202f72e;
    DAT_0202fb2e = 0x280;
    DAT_0202f92e = 6;
    uVar1 = (*puVar9 >> 8) - 0x8f;
    *puVar9 = uVar1;
    *puVar9 = uVar1 - (ushort)((uint)(*(int *)((uint)*(byte *)(param_1 + 0x10) + DAT_0203063c +
                                              -0x14) << 0x1b) >> 0x1e);
    sub_08003AB0(&UNK_08635f24 + (uint)*puVar9 * 0x14,
                 (0x280 - (uint)(*(ushort *)(&DAT_08635f2a + (uint)*puVar9 * 0x14) >> 6)) * 0x20 +
                 0x10000);
    sub_08003E14(&UNK_08635f30 + (uint)*puVar9 * 0x14,
                 (6 - (uint)(byte)(&DAT_08635f37)[(uint)*puVar9 * 0x14]) * 0x20 + 0x200);
    *puVar9 = 0x8f00;
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined2 *)(param_1 + 0x7a) = (&DAT_0202fa10)[*puVar9 >> 8];
    *(char *)(param_1 + 0x7e) = (char)(&DAT_0202f810)[*puVar9 >> 8];
    if (*(char *)(param_1 + 0x7f) == '\0') {
      uVar1 = *puVar9;
      (&DAT_0202fa10)[uVar1 >> 8] = 0x280;
      (&DAT_0202f810)[uVar1 >> 8] = 6;
      uVar8 = (uint)(*puVar9 >> 8);
      sub_0800393C(&DAT_085d78f8 + uVar8 * 5,
                   ((uint)(ushort)(&DAT_0202fa10)[uVar8] -
                   (uint)((ushort)(&DAT_085d78fe)[uVar8 * 10] >> 6)) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d7904 + uVar8 * 0x14,
                   ((uint)(ushort)(&DAT_0202f810)[uVar8] - (uint)(byte)(&DAT_085d790b)[uVar8 * 0x14]
                   ) * 0x20 + 0x200);
    }
    else {
      uVar1 = *puVar9;
      (&DAT_0202fa10)[uVar1 >> 8] = 0x300;
      (&DAT_0202f810)[uVar1 >> 8] = 7;
      uVar8 = (uint)(*puVar9 >> 8);
      sub_0800393C(&DAT_085d78f8 + uVar8 * 5,
                   ((uint)(ushort)(&DAT_0202fa10)[uVar8] -
                   (uint)((ushort)(&DAT_085d78fe)[uVar8 * 10] >> 6)) * 0x20 + 0x10000);
      sub_08003E14(&DAT_085d7904 + uVar8 * 0x14,
                   ((uint)(ushort)(&DAT_0202f810)[uVar8] - (uint)(byte)(&DAT_085d790b)[uVar8 * 0x14]
                   ) * 0x20 + 0x200);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(&DAT_0202fc10 + (uint)(*puVar9 >> 8) * 2);
    *(char *)(param_1 + 0x7e) = (char)*(undefined2 *)(&DAT_0202f610 + (uint)(*puVar9 >> 8) * 2);
    iVar3 = (uint)(*puVar9 >> 8) * 2;
    *(undefined2 *)(&DAT_0202fc10 + iVar3) = 0x280;
    *(undefined2 *)(&DAT_0202f610 + iVar3) = 6;
  }
  if (*(byte *)(param_1 + 0x10) < 0x14) {
    sub_080175BC(param_1);
    if (*(byte *)(param_1 + 0x10) < 6) {
      uVar5 = 0x1e0;
    }
    else {
      uVar5 = 0x1e8;
    }
    *(undefined2 *)(param_1 + 0x50) = uVar5;
    *(undefined2 *)(param_1 + 0x52) = uVar5;
  }
  else {
    sub_0801749C(param_1);
  }
  if (*(char *)(param_1 + 0x11) != '\0') {
    sub_080176EC(param_1);
  }
  sub_08017700(param_1,*puVar9);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017BCC(param_1,*pbVar6 + 6);
  *(undefined *)(param_1 + 0x4c) = 0;
  pbVar7 = (byte *)(param_1 + 0x4a);
  *pbVar7 = *pbVar7 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4d) = 0;
  *pbVar7 = *pbVar7 & 0xdf;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
  *(undefined *)(param_1 + 0x7c) = 0;
  pcVar4 = (char *)(param_1 + 0x80);
  *pcVar4 = '\0';
  if ((*(char *)(param_1 + 0x7f) == '\0') && (*(char *)(param_1 + 0x10) == 'w')) {
    sub_080E7F6C(uVar2,0x77,0,0x6401,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                 ,0);
  }
  if (*(char *)(param_1 + 0x10) == 't') {
    *pcVar4 = '\x14';
  }
  if (*(char *)(param_1 + 0x10) == 's') {
    *pcVar4 = '\x0f';
  }
  if (*pcVar4 != '\0') {
    sub_080040A8(*pcVar4,(*pbVar6 + 6) * 0x20 | 0x200);
  }
  sub_080E83CC(param_1);
  return in_lr;
}

