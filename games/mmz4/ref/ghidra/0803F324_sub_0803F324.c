// sub_0803F324 at 0x0803F324 (thumb)

undefined4 sub_0803F324(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) == 0)) {
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xbb) = 1;
  }
  return in_lr;
}

