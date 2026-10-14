// sub_08036930 at 0x08036930 (thumb)

undefined4 sub_08036930(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x2201);
  sub_0803A314(param_1);
  *(undefined *)(param_1 + 0x101) = 1;
  *(undefined *)(param_1 + 0x102) = 0;
  sub_08036968(param_1);
  return in_lr;
}

