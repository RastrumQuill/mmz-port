// sub_08084A28 at 0x08084A28 (thumb)

undefined4 sub_08084A28(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  sub_08076600();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,2);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined *)(param_1 + 0x1f) = 0xa0;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -0x1000;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffd2c;
    psVar3 = &DAT_080c8ee4;
  }
  else {
    *(undefined *)(param_1 + 0x1f) = 0x60;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x1000;
    *(undefined4 *)(param_1 + 0x54) = 0x2d4;
    psVar3 = &DAT_080c8e64;
  }
  *(int *)(param_1 + 0x58) = (int)*psVar3 << 2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1200;
  uVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2dfc,param_1 + 0x4c,0x1000);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08084330(param_1);
  return in_lr;
}

