// sub_0802204C at 0x0802204C (thumb)

undefined4 sub_0802204C(int param_1)

{
  undefined4 in_lr;
  
  DAT_020301a4 = *(ushort *)(param_1 + 0x148);
  if (DAT_020301a4 == 0) {
    DAT_020301a4 = DAT_02002130 & 0x7fff;
    DAT_020301a6 = DAT_02002148 & 0x7fff;
  }
  else {
    DAT_020301a6 = DAT_020301a4;
    if (DAT_020301a4 == 0xffff) {
      DAT_020301a4 = 0;
      DAT_020301a6 = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        sub_08025BC4(*(int *)(param_1 + 0x10));
      }
    }
  }
  return in_lr;
}

