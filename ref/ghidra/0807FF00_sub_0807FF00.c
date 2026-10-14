// sub_0807FF00 at 0x0807FF00 (thumb)

undefined4 sub_0807FF00(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  sub_08076674();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = 0x80 < *(byte *)(param_1 + 0x11);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b2734,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x40;
  *(undefined2 *)(param_1 + 0x4a) = 0x40;
  *(undefined *)(param_1 + 0x1f) = 0;
  iVar3 = (short)(&DAT_080c8e24)[(*(byte *)(param_1 + 0x11) + 0xc0 & 0xff) + 0x40] * 0x2c0;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar3 >> 8;
  iVar3 = (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x11) + 0xc0 & 0xff] * 0x2c0;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar3 >> 8;
  uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0807FEBC(param_1);
  return in_lr;
}

