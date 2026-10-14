// sub_080E1A08 at 0x080E1A08 (thumb)

undefined4 sub_080E1A08(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8717);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x25) = *(undefined *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
    uVar1 = 0x10;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) * 0xc;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
    uVar1 = 0x12;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080E1934(param_1);
  return in_lr;
}

