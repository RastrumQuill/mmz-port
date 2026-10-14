// sub_080589C8 at 0x080589C8 (thumb)

undefined4 sub_080589C8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xd5) = 0;
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

