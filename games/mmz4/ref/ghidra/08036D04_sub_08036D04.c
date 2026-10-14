// sub_08036D04 at 0x08036D04 (thumb)

undefined4 sub_08036D04(int param_1)

{
  undefined4 in_lr;
  
  sub_0803A3BC(param_1,0x1903);
  sub_0803A3FC(param_1,0x1903);
  if (*(char *)(param_1 + 0x155) == '\x02') {
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_08036D4C(param_1);
  }
  return in_lr;
}

