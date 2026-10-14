// sub_08036E40 at 0x08036E40 (thumb)

undefined4 sub_08036E40(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x100) = 1;
  sub_08036E54();
  return in_lr;
}

