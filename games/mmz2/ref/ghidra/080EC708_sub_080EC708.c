// sub_080EC708 at 0x080EC708 (thumb)

undefined4 sub_080EC708(int param_1)

{
  undefined4 in_lr;
  
  sub_080EC664();
  if (*(char *)(param_1 + 0xdea) < '\0') {
    *(undefined *)(param_1 + 0xddc) = 0;
    *(undefined2 *)(param_1 + 4) = 4;
  }
  return in_lr;
}

