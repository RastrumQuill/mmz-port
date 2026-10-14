// sub_0802F694 at 0x0802F694 (thumb)

undefined4 sub_0802F694(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_080352A4(param_1);
    sub_08035478(param_1);
    *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  }
  return in_lr;
}

