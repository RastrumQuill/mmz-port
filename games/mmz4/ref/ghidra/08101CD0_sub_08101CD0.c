// sub_08101CD0 at 0x08101CD0 (thumb)

undefined4 sub_08101CD0(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(byte *)(param_1 + 0xd) < 3) && ((*(uint *)(param_1 + 0x8c) & 0x20000000) != 0)) &&
      (DAT_0202dbf8 != '\0')) && (DAT_03003908 == param_1 + 0x74)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_088685c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_0801CFF0(param_1);
  return in_lr;
}

