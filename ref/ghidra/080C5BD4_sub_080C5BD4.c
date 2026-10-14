// sub_080C5BD4 at 0x080C5BD4 (thumb)

undefined8 sub_080C5BD4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (param_1 * 0x1000000 + 0x1f000000U & 0x1f000000) >> 0x18;
  if (0xf < uVar1) {
    sub_080BC174(&DAT_080d1ddc,0x1a,0xf);
  }
  return CONCAT44(in_lr,uVar1);
}

