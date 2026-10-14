// sub_080DF540 at 0x080DF540 (thumb)

undefined4 sub_080DF540(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xb4);
  *(int *)(param_1 + 0x68) =
       *(int *)(param_1 + 0xb8) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] * 0xc;
  *(int *)(param_1 + 0x40) = param_1 + 100;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 0x1f) == 0) {
    sub_080BF760(param_1 + 100,2);
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((((*(uint *)(param_1 + 0x8c) & 0x20000000) != 0) && (DAT_0202f5c8 != '\0')) &&
       (DAT_03003908 == param_1 + 0x74)) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        sub_080EA1B8(0x2d5);
      }
      else {
        sub_080EA1B8(0x2d4);
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if ((*(char *)(param_1 + 0xd) == '\x01') && (DAT_02030c1a == 0)) {
    DAT_0202f5c8 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}

