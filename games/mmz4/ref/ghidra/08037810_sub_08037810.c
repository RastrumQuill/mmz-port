// sub_08037810 at 0x08037810 (thumb)

undefined4 sub_08037810(int param_1)

{
  undefined4 in_lr;
  
  sub_0803A3BC(param_1,0x2400);
  sub_0803A3FC(param_1,0x2400);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_0801CFC8(param_1,0x500,4,1);
    *(undefined *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}

