// sub_080345AC at 0x080345AC (thumb)

undefined4 sub_080345AC(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x1f01);
  sub_0803A314(param_1);
  *(undefined *)(param_1 + 0x101) = 1;
  *(undefined *)(param_1 + 0x102) = 0;
  sub_080345E4(param_1);
  return in_lr;
}

