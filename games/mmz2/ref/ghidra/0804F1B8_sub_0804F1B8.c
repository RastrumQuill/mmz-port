// sub_0804F1B8 at 0x0804F1B8 (thumb)

undefined4 sub_0804F1B8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

