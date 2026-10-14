// sub_0801821C at 0x0801821C (thumb)

undefined4 sub_0801821C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 2;
  sub_08018BE8(param_1,0x1e);
  *(undefined *)(param_1 + 0x120) = 0;
  sub_08027188(param_1,7,0);
  return in_lr;
}

