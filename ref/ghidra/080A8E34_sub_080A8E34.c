// sub_080A8E34 at 0x080A8E34 (thumb)

undefined4 sub_080A8E34(int param_1)

{
  undefined4 in_lr;
  
  sub_0809C980();
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

