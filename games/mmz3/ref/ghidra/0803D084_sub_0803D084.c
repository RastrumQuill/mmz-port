// sub_0803D084 at 0x0803D084 (thumb)

undefined4 sub_0803D084(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    if (DAT_02030182 != -1) {
      DAT_02030182 = DAT_02030182 + 1;
    }
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
  }
  return in_lr;
}

