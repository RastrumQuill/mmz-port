// sub_080D8844 at 0x080D8844 (thumb)

undefined4 sub_080D8844(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080D8858();
  return in_lr;
}

