// sub_08035A64 at 0x08035A64 (thumb)

undefined4 sub_08035A64(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08034578();
  return in_lr;
}

