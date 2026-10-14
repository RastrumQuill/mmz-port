// sub_080D7F60 at 0x080D7F60 (thumb)

undefined4 sub_080D7F60(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xb6) = 0x2d;
  sub_080D7F78();
  return in_lr;
}

