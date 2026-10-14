// sub_080AF348 at 0x080AF348 (thumb)

undefined4 sub_080AF348(int param_1)

{
  undefined4 in_lr;
  
  sub_08017700(param_1,0x8605);
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080AF368(param_1);
  return in_lr;
}

