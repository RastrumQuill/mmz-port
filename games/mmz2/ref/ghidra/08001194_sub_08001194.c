// sub_08001194 at 0x08001194 (thumb)

undefined4 sub_08001194(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = (&DAT_03002a68)[param_1 * 0x18];
  if (bVar1 != 1) {
    (&DAT_03002a68)[param_1 * 0x18] = bVar1 | 8;
  }
  return in_lr;
}

