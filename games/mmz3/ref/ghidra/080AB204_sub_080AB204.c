// sub_080AB204 at 0x080AB204 (thumb)

undefined4 sub_080AB204(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x28);
  DAT_020023c0 = DAT_020023c0 | 0x2400;
  sub_080048A0(param_1 + 0x34,0x80abc65);
  *(int *)(param_1 + 0x3c) = param_1;
  bVar1 = *(byte *)(param_1 + 10);
  bVar7 = bVar1 & 0xf7;
  *(byte *)(param_1 + 10) = bVar7 | 3;
  bVar2 = *(byte *)(iVar8 + 10) >> 4;
  uVar6 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar7 = bVar1 & 0xe7 | 3;
  }
  else {
    bVar7 = bVar7 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar7;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  DAT_02002400 = 0x3f44;
  DAT_02002402 = 0x1008;
  DAT_02002410 = DAT_02002410 | 0x4000;
  DAT_0200241d = 0xff;
  DAT_0200241e = DAT_0200241e & 0xfb;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1e00;
    uVar5 = 3;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1e00;
    uVar5 = 0xfffffffd;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1e00;
  *(undefined *)(param_1 + 0x12) = 0xb4;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0xffff;
  uVar4 = sub_0800471C(0x44);
  *(undefined2 *)(param_1 + 0xc0) = uVar4;
  uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar6 & 0x7fffffff;
  uVar3 = sub_080FE4D8(uVar6 * 2 >> 0x11,3);
  *(undefined *)(param_1 + 0xc2) = uVar3;
  sub_080AA820(param_1,1);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_080AA91C(param_1);
  return in_lr;
}

