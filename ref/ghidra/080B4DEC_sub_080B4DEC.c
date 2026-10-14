// sub_080B4DEC at 0x080B4DEC (thumb)

undefined4 sub_080B4DEC(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((param_1 * 0x1000000 + param_2 * -0x1000000 == 0) && ((DAT_02004ca8 & 0x20) != 0)) &&
     ((DAT_02004ca8 & 0xd0) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

