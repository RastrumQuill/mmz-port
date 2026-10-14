// sub_080EA38C at 0x080EA38C (thumb)

undefined4 sub_080EA38C(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 9) == '\x02') && (*(char *)(param_1 + 0xb8) != -0x35)) {
    *(char *)(param_1 + 0xb8) = -0x35;
    sub_0801CF00(param_1,*(byte *)(param_1 + 0x70) | 0xcb00);
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

