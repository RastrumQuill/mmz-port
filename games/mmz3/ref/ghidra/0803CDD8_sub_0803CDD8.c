// sub_0803CDD8 at 0x0803CDD8 (thumb)

undefined4 sub_0803CDD8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    if (DAT_0203017e != -1) {
      DAT_0203017e = DAT_0203017e + 1;
    }
    *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
  }
  return in_lr;
}

