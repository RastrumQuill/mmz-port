// sub_08020E20 at 0x08020E20 (thumb)

undefined4 sub_08020E20(int param_1)

{
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x115) != -0x68) && (*(char *)(param_1 + 0x115) != -0x6a)) ||
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xf) = 1;
    sub_08018BE8(param_1,6);
    sub_08020DEC(param_1);
  }
  return in_lr;
}

