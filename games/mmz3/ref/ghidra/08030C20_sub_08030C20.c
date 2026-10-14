// sub_08030C20 at 0x08030C20 (thumb)

undefined4 sub_08030C20(int param_1)

{
  undefined4 in_lr;
  
  sub_080177CC(param_1,0x500,4,1);
  *(undefined *)(param_1 + 0xec) = 0;
  return in_lr;
}

