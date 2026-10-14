// sub_080BB294 at 0x080BB294 (thumb)

undefined4 sub_080BB294(int param_1)

{
  short sVar1;
  char cVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080B8C00(param_1,*(undefined *)(param_1 + 0x13));
  sVar1 = (ushort)*(byte *)(param_1 + 0x11) * 0x80 + 0x280;
  cVar2 = *(byte *)(param_1 + 0x11) + 5;
  *(short *)(param_1 + 0x42) = sVar1;
  *(short *)(param_1 + 0x1c) = sVar1;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 * '\x10';
  *(char *)(param_1 + 0x1e) = cVar2;
  sub_080033F0(param_1 + 0x6c,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080BB308(param_1);
  return in_lr;
}

