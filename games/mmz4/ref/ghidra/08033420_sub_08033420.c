// sub_08033420 at 0x08033420 (thumb)

undefined4 sub_08033420(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x100) = 1;
  sub_08033434();
  return in_lr;
}

