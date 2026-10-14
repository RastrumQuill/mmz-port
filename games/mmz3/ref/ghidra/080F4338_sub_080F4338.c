// sub_080F4338 at 0x080F4338 (thumb)

undefined4 sub_080F4338(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xdd0) = 1;
  if (*(char *)(param_1 + 0xdcf) != -1) {
    sub_08004230();
  }
  if (*(char *)(param_1 + 0xddd) != '\0') {
    sub_08004230();
  }
  sub_08004230(4);
  return in_lr;
}

