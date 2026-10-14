// sub_080DC6A8 at 0x080DC6A8 (thumb)

undefined4 sub_080DC6A8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_080DC6D0(param_1);
  return in_lr;
}

