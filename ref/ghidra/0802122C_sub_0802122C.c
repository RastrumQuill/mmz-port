// sub_0802122C at 0x0802122C (thumb)

undefined4 sub_0802122C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined *)(param_1 + 0xf) = 2;
    sub_08018BE8(param_1,0x9f);
    DAT_02022864 = 1;
  }
  return in_lr;
}

