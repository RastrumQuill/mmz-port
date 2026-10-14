// sub_080557E0 at 0x080557E0 (thumb)

undefined4 sub_080557E0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

