// sub_08002B5C at 0x08002B5C (thumb)

undefined4 sub_08002B5C(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (-1 < (int)(param_1 * 0x10000)) {
    iVar1 = sub_08002AD0(param_1 & 0xffff);
    if (iVar1 != 0) {
      sub_08127184(param_1 & 0xffff);
    }
  }
  return in_lr;
}

