// sub_080A9178 at 0x080A9178 (thumb)

undefined4 sub_080A9178(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_08017528(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5c02);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffd2c;
    psVar3 = &DAT_080fe70c;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
    *(undefined4 *)(param_1 + 0x5c) = 0x2d4;
    psVar3 = &DAT_080fe68c;
  }
  *(int *)(param_1 + 0x60) = (int)*psVar3 << 2;
  *(undefined *)(param_1 + 0x24) = 0xa0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1200;
  uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368960,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080A8B90(param_1);
  return in_lr;
}

