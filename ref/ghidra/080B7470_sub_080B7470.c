// sub_080B7470 at 0x080B7470 (thumb)

undefined4 sub_080B7470(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080B7484();
  return in_lr;
}

