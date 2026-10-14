// sub_08117770 at 0x08117770 (thumb)

undefined4 sub_08117770(int param_1)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xe04) = '\0';
  sub_08128884(param_1,*(undefined4 *)(&DAT_08885dac + (uint)*(byte *)(param_1 + 0xdf8) * 4));
  sub_080025D8(0x12);
  if ((*(char *)(param_1 + 0xe04) == '\0') && ((DAT_02000764 & 8) != 0)) {
    *(undefined *)(param_1 + 1) = 3;
    *(undefined *)(param_1 + 2) = 3;
  }
  return in_lr;
}

