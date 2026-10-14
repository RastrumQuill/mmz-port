// sub_080AAFD0 at 0x080AAFD0 (thumb)

undefined4 sub_080AAFD0(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  DAT_020023c0 = DAT_020023c0 | 0x2400;
  sub_080048A0(param_1 + 0x34,0x80abc65);
  *(int *)(param_1 + 0x3c) = param_1;
  bVar1 = *(byte *)(param_1 + 10);
  bVar6 = bVar1 & 0xf7;
  *(byte *)(param_1 + 10) = bVar6 | 3;
  bVar2 = *(byte *)(iVar7 + 10) >> 4;
  uVar5 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar6 = bVar1 & 0xe7 | 3;
  }
  else {
    bVar6 = bVar6 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar6;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  DAT_02002400 = 0x3f44;
  DAT_02002402 = 0x1008;
  DAT_02002410 = DAT_02002410 | 0x4000;
  DAT_0200241d = 0xff;
  DAT_0200241e = DAT_0200241e & 0xfb;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1e00;
    uVar4 = 2;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1e00;
    uVar4 = 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x2600;
  *(undefined *)(param_1 + 0x12) = 0xb4;
  *(undefined *)(param_1 + 0x13) = 0;
  uVar3 = sub_0800471C(0x44);
  *(undefined2 *)(param_1 + 0xc0) = uVar3;
  sub_080AA820(param_1,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_080AA91C(param_1);
  return in_lr;
}

