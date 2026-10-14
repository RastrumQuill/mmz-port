// sub_080B8238 at 0x080B8238 (thumb)

undefined4 sub_080B8238(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 in_lr;
  
  sub_08012580();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x5c13);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  sVar1 = (&DAT_080ef450)[*(byte *)(param_1 + 0x11) + 0x40 & 0xff];
  *(int *)(param_1 + 0x5c) = (int)sVar1 << 1;
  sVar2 = (&DAT_080ef450)[*(byte *)(param_1 + 0x11)];
  *(int *)(param_1 + 0x60) = (int)sVar2 << 1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + sVar1 * -0x20;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + sVar2 * -0x20;
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B7FD0(param_1);
  return in_lr;
}

