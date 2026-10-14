// sub_08049220 at 0x08049220 (thumb)

undefined4 sub_08049220(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0)) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

