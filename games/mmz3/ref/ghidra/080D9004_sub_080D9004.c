// sub_080D9004 at 0x080D9004 (thumb)

undefined4 sub_080D9004(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(byte *)(param_1 + 0xd) < 3) && ((*(uint *)(param_1 + 0x8c) & 0x20000000) != 0)) &&
      (DAT_0202f5c8 != '\0')) && (DAT_03003908 == param_1 + 0x74)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836d980 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

