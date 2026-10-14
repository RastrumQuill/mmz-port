// sub_0810B780 at 0x0810B780 (thumb)

undefined4 sub_0810B780(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xdd1) == '\x02') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 8);
    sub_0810B6D8(param_1);
  }
  else {
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

