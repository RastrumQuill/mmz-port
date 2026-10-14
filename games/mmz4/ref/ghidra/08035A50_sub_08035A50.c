// sub_08035A50 at 0x08035A50 (thumb)

undefined4 sub_08035A50(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08034398();
  return in_lr;
}

