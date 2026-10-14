// sub_080E9CD4 at 0x080E9CD4 (thumb)

undefined4 sub_080E9CD4(void)

{
  undefined4 in_lr;
  
  if (DAT_02030c00 != 0) {
    DAT_0200241e = DAT_0200241e | 1;
    sub_080EA010(&DAT_02030bf0);
  }
  return in_lr;
}

