// sub_08034968 at 0x08034968 (thumb)

undefined4 sub_08034968(int param_1)

{
  undefined4 in_lr;
  
  sub_0803A3BC(param_1,0x1401);
  sub_0803A3FC(param_1,0x1401);
  if (*(char *)(param_1 + 0x155) == '\x02') {
    *(undefined *)(param_1 + 0x101) = 2;
    *(undefined *)(param_1 + 0x102) = 0;
    sub_080349B0(param_1);
  }
  return in_lr;
}

