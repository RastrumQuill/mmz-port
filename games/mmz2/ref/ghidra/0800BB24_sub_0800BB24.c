// sub_0800BB24 at 0x0800BB24 (thumb)

undefined8 sub_0800BB24(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (((param_1 < 0xf0000) && (0x27fff < param_2)) && (param_2 < 0x3c000)) {
    uVar1 = (uint)(&DAT_020017e0)
                  [(uint)DAT_020017e0 * (param_2 + -0x28000 >> 0xc) + ((int)param_1 >> 0xc) + 2];
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

