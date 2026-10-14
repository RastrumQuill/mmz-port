// sub_080B6CF8 at 0x080B6CF8 (thumb)

undefined4 sub_080B6CF8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar2 + 0x54) + *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar2 + 0x58) + *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x60);
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x20;
  *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 0x20;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x40;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x40;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 3) < 2) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (0x180 < *(ushort *)(param_1 + 0x50)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B699C(param_1);
  }
  return in_lr;
}

