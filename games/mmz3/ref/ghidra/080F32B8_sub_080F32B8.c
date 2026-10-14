// sub_080F32B8 at 0x080F32B8 (thumb)

undefined4 sub_080F32B8(int param_1)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xe1d) = '\0';
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838b9a8 + (uint)*(byte *)(param_1 + 0xe18) * 4));
  if ((*(char *)(param_1 + 0xe1d) == '\0') && ((DAT_02002134 & 8) != 0)) {
    *(undefined *)(param_1 + 1) = 3;
    *(undefined *)(param_1 + 2) = 3;
  }
  return in_lr;
}

