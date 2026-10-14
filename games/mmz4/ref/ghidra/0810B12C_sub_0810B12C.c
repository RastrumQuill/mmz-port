// sub_0810B12C at 0x0810B12C (thumb)

undefined4 sub_0810B12C(int param_1)

{
  undefined4 in_lr;
  
  if (**(char **)(param_1 + 0x2c) == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08869730 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 8);
    sub_0810B170(param_1);
  }
  return in_lr;
}

