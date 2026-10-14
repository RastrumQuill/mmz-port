// sub_080595E0 at 0x080595E0 (thumb)

undefined4 sub_080595E0(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x10)) {
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 2;
    *(undefined *)(param_1 + 0xd5) = 1;
    *(undefined *)(param_1 + 0xd) = 0x17;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

