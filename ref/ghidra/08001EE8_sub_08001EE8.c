// sub_08001EE8 at 0x08001EE8 (thumb)

undefined4 sub_08001EE8(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (-1 < (int)(param_1 * 0x10000)) {
    iVar1 = sub_08001E7C(param_1 & 0xffff);
    if (iVar1 != 0) {
      sub_080C758C(param_1 & 0xffff);
    }
  }
  return in_lr;
}

