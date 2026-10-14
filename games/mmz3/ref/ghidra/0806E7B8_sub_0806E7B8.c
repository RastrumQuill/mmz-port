// sub_0806E7B8 at 0x0806E7B8 (thumb)

undefined4 sub_0806E7B8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

