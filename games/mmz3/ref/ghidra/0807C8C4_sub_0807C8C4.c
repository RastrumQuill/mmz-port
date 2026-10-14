// sub_0807C8C4 at 0x0807C8C4 (thumb)

undefined4 sub_0807C8C4(int param_1)

{
  undefined4 in_lr;
  
  if (((*(uint *)(*(int *)(param_1 + 0x2c) + 0x8c) & 0x200) != 0) && ((DAT_030032e1 & 2) != 0)) {
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0xc0) = 0;
  }
  return in_lr;
}

