// sub_08011768 at 0x08011768 (thumb)

undefined8 sub_08011768(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((param_1 - 0x69000U < 0xf000) && (0x3bfff < param_2)) && (param_2 < 0x46000)) {
    uVar1 = (uint)(&DAT_020017e0)
                  [(uint)DAT_020017e0 * (param_2 >> 0xc) + (param_1 + 0x2d000 >> 0xc) + 2];
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

