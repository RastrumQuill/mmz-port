// sub_080B3E94 at 0x080B3E94 (thumb)

undefined4 sub_080B3E94(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar1 = *(int *)(param_1 + 0x60) + 0x18;
  *(int *)(param_1 + 0x60) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B3B5C(param_1);
  }
  return in_lr;
}

