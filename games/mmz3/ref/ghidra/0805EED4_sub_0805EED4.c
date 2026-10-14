// sub_0805EED4 at 0x0805EED4 (thumb)

undefined4 sub_0805EED4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     (uVar1 = (uint)DAT_020301a8, (DAT_020301a8 & 8) != 0)) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08361bdc + (uint)*(byte *)(param_1 + 0x10) * 4));
    sub_080607AC(param_1);
  }
  else {
    if (*(uint *)(param_1 + 0xd0) != 0) {
      *(uint *)(param_1 + 0xd0) = uVar1 & 8;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(char *)(param_1 + 0xd) = (char)(uVar1 & 8);
    sub_08060618(param_1);
  }
  return in_lr;
}

