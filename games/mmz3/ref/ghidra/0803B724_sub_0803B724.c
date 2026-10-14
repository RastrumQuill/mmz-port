// sub_0803B724 at 0x0803B724 (thumb)

undefined4 sub_0803B724(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    if (DAT_02030180 != -1) {
      DAT_02030180 = DAT_02030180 + 1;
    }
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0x11) == '\0') {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xc0) = 1;
    }
  }
  return in_lr;
}

