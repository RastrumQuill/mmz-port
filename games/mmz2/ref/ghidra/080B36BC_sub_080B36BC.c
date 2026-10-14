// sub_080B36BC at 0x080B36BC (thumb)

undefined4 sub_080B36BC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  *(uint *)(param_1 + 0x74) =
       *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x5c) * (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x7c) =
       *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 100) * (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x78) =
       *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x60) * (uint)*(byte *)(param_1 + 0x12);
  *(int *)(param_1 + 0x80) =
       *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x68) * (uint)*(byte *)(param_1 + 0x12);
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

