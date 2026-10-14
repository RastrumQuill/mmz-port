// sub_08003338 at 0x08003338 (thumb)

undefined4 sub_08003338(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (-1 < (int)(param_1 * 0x10000)) {
    iVar1 = sub_080032AC(param_1 & 0xffff);
    if (iVar1 != 0) {
      sub_080EDC08(param_1 & 0xffff);
    }
  }
  return in_lr;
}

