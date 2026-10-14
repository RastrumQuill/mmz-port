// sub_08053EA8 at 0x08053EA8 (thumb)

undefined4 sub_08053EA8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 2;
    sub_0801CF00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08054FBC(param_1);
  if ((DAT_0202e922 & 1) == 0) {
    sub_08054FFC(param_1);
  }
  return in_lr;
}

