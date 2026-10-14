// sub_08018A98 at 0x08018A98 (thumb)

undefined4 sub_08018A98(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02022ad4 & 1) == 0) {
    sub_08018AD0(*(undefined4 *)(param_1 + 0x20),param_1);
    if (DAT_02022b40 != -1) {
      DAT_02022b40 = DAT_02022b40 + 1;
    }
  }
  return in_lr;
}

