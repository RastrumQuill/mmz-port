// sub_0803BFD0 at 0x0803BFD0 (thumb)

undefined4 sub_0803BFD0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    if (DAT_0203017c != -1) {
      DAT_0203017c = DAT_0203017c + 1;
    }
    if (((*(uint *)(*(int *)(param_1 + 0xc) + 0x18) & 0x200) == 0) ||
       (*(char *)(*(int *)(param_1 + 0x2c) + 0x10) == '\0')) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x13) = 1;
    }
  }
  return in_lr;
}

