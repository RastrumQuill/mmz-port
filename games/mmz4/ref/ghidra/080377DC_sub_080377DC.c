// sub_080377DC at 0x080377DC (thumb)

undefined4 sub_080377DC(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x2400);
  sub_0803A314(param_1);
  *(undefined *)(param_1 + 0x101) = 1;
  *(undefined *)(param_1 + 0x102) = 0;
  sub_08037810(param_1);
  return in_lr;
}

