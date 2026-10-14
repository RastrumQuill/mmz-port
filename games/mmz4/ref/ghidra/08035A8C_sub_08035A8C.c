// sub_08035A8C at 0x08035A8C (thumb)

undefined4 sub_08035A8C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08034904();
  return in_lr;
}

