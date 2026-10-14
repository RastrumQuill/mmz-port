// sub_080A8214 at 0x080A8214 (thumb)

undefined4 sub_080A8214(int param_1)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 4);
  sub_08017528(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0x5d01);
  sub_080177F4(param_1);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x1000;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffd2c;
    psVar2 = &DAT_080fe70c;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x1000;
    *(undefined4 *)(param_1 + 0x5c) = 0x2d4;
    psVar2 = &DAT_080fe68c;
  }
  *(int *)(param_1 + 0x60) = (int)*psVar2 << 2;
  *(undefined *)(param_1 + 0x24) = 0xe0;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1200;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08368770,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080A7ED4(param_1);
  return in_lr;
}

