// sub_08087090 at 0x08087090 (thumb)

undefined4 sub_08087090(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  sub_08001FA8(param_1 + 0x2c,0x80871ad);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1000;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 0x9c;
  }
  else {
    uVar1 = 100;
  }
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_08087100(param_1);
  return in_lr;
}

