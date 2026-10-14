// sub_080B9EE4 at 0x080B9EE4 (thumb)

undefined4 sub_080B9EE4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar2 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  if (*(char *)(param_1 + 0x74) == '\0') {
    sub_08012580(param_1);
  }
  else {
    sub_0801260C(param_1);
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x74);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
  *(undefined *)(param_1 + 0x25) = 0x1c;
  sub_080127E4(param_1,0x6e04);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = -((uint)*(byte *)(param_1 + 0x11) * 0x80 + -0x40);
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
  *(undefined *)(param_1 + 0x12) = 0;
  return in_lr;
}

