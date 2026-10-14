// sub_0805F068 at 0x0805F068 (thumb)

undefined4 sub_0805F068(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) != '\x03') && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    *(undefined2 *)(param_1 + 0xe) = 3;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361c04 + (uint)*(byte *)(param_1 + 0xe) * 4));
  iVar1 = *(byte *)(param_1 + 0x13) - 1;
  *(char *)(param_1 + 0x13) = (char)iVar1;
  if (iVar1 == 0) {
    sub_080B322C(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x13) = 3;
  }
  return in_lr;
}

