// sub_080732F4 at 0x080732F4 (thumb)

undefined4 sub_080732F4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0xb8) == 'X') &&
      (sub_08006E08(param_1 + 0x74,&DAT_0833f1e4 + (uint)*(byte *)(param_1 + 0xb5) * 0x30),
      *(char *)(param_1 + 0xd) == '\x03')) &&
     (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) - 0x1b01 < 2)) {
    sub_080127E4(param_1,0x1b00);
  }
  sub_08012ACC(param_1);
  cVar1 = *(char *)(param_1 + 0xb8) + -1;
  *(char *)(param_1 + 0xb8) = cVar1;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833f0c4 + (uint)*(byte *)(param_1 + 0xb5) * 0x30);
  }
  return in_lr;
}

