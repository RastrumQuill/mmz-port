// sub_08042ED4 at 0x08042ED4 (thumb)

undefined4 sub_08042ED4(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa300);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((0x37 < bVar1) && (*(char *)(param_1 + 0xc0) == '\x03')) {
    sub_08044A4C(param_1);
  }
  return in_lr;
}

