// sub_080D292C at 0x080D292C (thumb)

undefined4 sub_080D292C(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(byte *)(param_1 + 0xd) < 3) && ((*(uint *)(param_1 + 0x8c) & 0x20000000) != 0)) &&
      (DAT_0202e138 != '\0')) && (DAT_03003908 == param_1 + 0x74)) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08349ec8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

