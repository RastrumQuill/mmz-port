// sub_080ECD3C at 0x080ECD3C (thumb)

undefined8 sub_080ECD3C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (param_1 * 0x1000000 + 0x1f000000U & 0x1f000000) >> 0x18;
  if (0xf < uVar1) {
    sub_080DE6C8(&DAT_080ffaa0,0x1a,0xf);
  }
  return CONCAT44(in_lr,uVar1);
}

