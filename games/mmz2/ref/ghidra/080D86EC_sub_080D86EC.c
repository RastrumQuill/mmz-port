// sub_080D86EC at 0x080D86EC (thumb)

undefined4 sub_080D86EC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_080D8700();
  return in_lr;
}

