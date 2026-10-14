// sub_0807F734 at 0x0807F734 (thumb)

undefined4 sub_0807F734(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  uVar2 = sub_080C8CB0(uVar2 * 2 >> 0x11,0x24);
  sub_08076590(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,4);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b26d8,param_1 + 0x4c,0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(iVar4 + 0x4c) + -0x1500;
    uVar2 = 0x168 - (uVar2 & 0xff);
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(iVar4 + 0x4c) + 0x1500;
    uVar2 = (uVar2 & 0xff) + 0x114;
  }
  iVar3 = (short)(&DAT_080c8e24)[(uVar2 & 0xff) + 0x40] * 0x380;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar3 >> 8;
  iVar3 = (short)(&DAT_080c8e24)[uVar2 & 0xff] * 0x380;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar3 >> 8;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0807F704(param_1);
  return in_lr;
}

