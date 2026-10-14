// sub_08021A80 at 0x08021A80 (thumb)

undefined4 sub_08021A80(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018BE8(param_1,0x17);
  sub_08027188(param_1,10,0);
  return in_lr;
}

