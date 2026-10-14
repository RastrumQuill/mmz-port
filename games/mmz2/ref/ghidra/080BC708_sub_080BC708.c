// sub_080BC708 at 0x080BC708 (thumb)

undefined4 sub_080BC708(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
  uVar1 = *(ushort *)(param_1 + 0x50);
  if (uVar1 < 0x21) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    *(ushort *)(param_1 + 0x50) = uVar1 - 0x20;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -0x20;
  }
  return in_lr;
}

