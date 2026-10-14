// sub_08011F00 at 0x08011F00 (thumb)

undefined4 sub_08011F00(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x34) < 0x6d0) {
    if ((DAT_0202ebb5 & 4) != 0) {
      return in_lr;
    }
    DAT_0202d00c = 0x71c00;
  }
  else {
    DAT_0202d00c = 0;
  }
  DAT_0202d014 = 0x3c0000;
  return in_lr;
}

