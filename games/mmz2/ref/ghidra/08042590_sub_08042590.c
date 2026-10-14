// sub_08042590 at 0x08042590 (thumb)

undefined4 sub_08042590(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa300);
    sub_08006E08(param_1 + 0x74,&DAT_0833a600);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if (0x5f < bVar1) {
    sub_08044A4C(param_1);
  }
  return in_lr;
}

