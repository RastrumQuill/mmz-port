// sub_080742F8 at 0x080742F8 (thumb)

undefined4 sub_080742F8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_080744C4();
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    sub_08074454();
  }
  else {
    sub_08074330();
  }
  return in_lr;
}

