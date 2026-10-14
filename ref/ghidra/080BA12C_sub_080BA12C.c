// sub_080BA12C at 0x080BA12C (thumb)

undefined4 sub_080BA12C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080033F0(param_1 + 0x6c,0);
  sub_080BA14C(param_1);
  return in_lr;
}

