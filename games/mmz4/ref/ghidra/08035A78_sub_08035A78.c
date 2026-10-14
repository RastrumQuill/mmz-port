// sub_08035A78 at 0x08035A78 (thumb)

undefined4 sub_08035A78(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08034628();
  return in_lr;
}

