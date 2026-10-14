// sub_080AACE0 at 0x080AACE0 (thumb)

undefined4 sub_080AACE0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb8) = 1;
  *(undefined *)(param_1 + 0xb9) = 1;
  *(undefined2 *)(param_1 + 0xa4) = 8;
  *(undefined *)(param_1 + 0xd) = 4;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,0x80aad15);
  return in_lr;
}

