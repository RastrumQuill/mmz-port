// sub_080B3644 at 0x080B3644 (thumb)

undefined4 sub_080B3644(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x68);
  uVar1 = *(byte *)(param_1 + 0x12) & 1;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x74 + uVar1 * 4);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x74 + (uVar1 + 2) * 4);
  uVar1 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)uVar1;
  if ((uVar1 & 0xff) == 0xff) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B32D8(param_1);
  }
  return in_lr;
}

