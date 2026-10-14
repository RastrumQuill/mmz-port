// sub_08054874 at 0x08054874 (thumb)

undefined4 sub_08054874(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x2c07);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08054FBC(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

