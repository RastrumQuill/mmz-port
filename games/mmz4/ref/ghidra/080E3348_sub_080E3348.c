// sub_080E3348 at 0x080E3348 (thumb)

undefined4 sub_080E3348(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  if (*(char *)(param_1 + 0x10) == '\x03') {
    *(undefined *)(param_1 + 0x22) = 1;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_08128884(param_1,*(undefined4 *)(&DAT_0886578c + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(undefined *)(param_1 + 0x74) = 1;
  sub_080E33A8(param_1);
  return in_lr;
}

