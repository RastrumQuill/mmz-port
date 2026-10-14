// sub_080AFF74 at 0x080AFF74 (thumb)

undefined4 sub_080AFF74(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = sub_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((uVar1 & 0x8000) == 0) {
    sub_08002B10(0x35);
  }
  else {
    sub_08002B10(0x31);
  }
  return in_lr;
}

