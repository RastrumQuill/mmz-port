// sub_0802F1B4 at 0x0802F1B4 (thumb)

undefined4 sub_0802F1B4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0884f904)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = sub_0802B7C0(param_1);
  sub_0801CF00(param_1,uVar3);
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar4 = sub_0800864C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0884fe60,param_1 + 0x54,0x10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x802ffd9;
  sub_08038B44(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xfc) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xfd) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0x100) = 0;
  *(undefined *)(param_1 + 0x104) = 0;
  *(undefined *)(param_1 + 0x101) = 0;
  *(undefined *)(param_1 + 0x105) = 0;
  *(undefined *)(param_1 + 0x102) = 0;
  *(undefined *)(param_1 + 0x106) = 0;
  *(undefined *)(param_1 + 0x103) = 0;
  *(undefined *)(param_1 + 0x107) = 0;
  *(undefined2 *)(param_1 + 0x10e) = 0xffff;
  if ((*(byte *)(param_1 + 199) < 4) && (DAT_0202e910 == 0x11)) {
    if (2 < *(byte *)(param_1 + 0xc0)) {
      *(undefined *)(param_1 + 0xc0) = 2;
    }
    if (2 < *(byte *)(param_1 + 0xc1)) {
      *(undefined *)(param_1 + 0xc1) = 2;
    }
    *(undefined *)(param_1 + 0xc3) = 0;
    *(undefined *)(param_1 + 0xe6) = 0;
  }
  puVar5 = (undefined *)(param_1 + 0xfa);
  *puVar5 = 2;
  if (*(byte *)(param_1 + 0xc0) < 3) {
    *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xc0);
  }
  else {
    *(undefined *)(param_1 + 0xf8) = 2;
    *puVar5 = *(undefined *)(param_1 + 0xc0);
  }
  if (*(byte *)(param_1 + 0xc1) < 3) {
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xc1);
  }
  else {
    *(undefined *)(param_1 + 0xf9) = 2;
    *puVar5 = *(undefined *)(param_1 + 0xc1);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  pbVar8 = (byte *)(param_1 + 0x142);
  *pbVar8 = *pbVar8 & 0xef;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined *)(param_1 + 0x143) = 0;
  *pbVar8 = *pbVar8 & 0xf1;
  *(undefined *)(param_1 + 0x13e) = 0;
  *pbVar8 = *pbVar8 & 0xbf;
  *(undefined2 *)(param_1 + 0x140) = 0;
  sub_08039F90(param_1);
  uVar7 = 0;
  pbVar8 = (byte *)(param_1 + 0xe8);
  puVar6 = (undefined2 *)(param_1 + 0x198);
  do {
    *puVar6 = 0xffff;
    puVar6 = puVar6 + 1;
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  *(undefined *)(param_1 + 0x1b9) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined *)(param_1 + 0x1cc) = 0;
  *(undefined *)(param_1 + 0x1cd) = 0;
  *(undefined *)(param_1 + 0x173) = 0;
  *(undefined *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x27e) = 0;
  *(undefined *)(param_1 + 0x279) = 0;
  *(undefined *)(param_1 + 0x176) = 0;
  if (*pbVar8 != 0) {
    bVar1 = sub_0802B604(param_1);
    if (*pbVar8 <= bVar1) goto LAB_0802f404;
  }
  bVar1 = sub_0802B604(param_1);
  *pbVar8 = bVar1;
LAB_0802f404:
  *(ushort *)(param_1 + 0xa4) = (ushort)*pbVar8;
  uVar4 = sub_080D1164(param_1,0,0);
  sub_080D1164(param_1,uVar4,1);
  if ((DAT_02000c80 == 9) || (DAT_02000c80 == 0x10)) {
    sub_080DE83C(param_1);
  }
  sub_08108CD8(param_1);
  if (*(byte *)(param_1 + 199) < 4) {
    sub_08006984(99);
  }
  uVar2 = sub_08038928(param_1);
  sub_0802B524(param_1,uVar2);
  sub_0802AD84(*(undefined *)(param_1 + 0xc2));
  sub_0802F498(param_1);
  return in_lr;
}

