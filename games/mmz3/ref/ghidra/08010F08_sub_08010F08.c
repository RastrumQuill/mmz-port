// sub_08010F08 at 0x08010F08 (thumb)

undefined8 sub_08010F08(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 < 0x1a4000) || (0x13fff < param_2 - 0xa000U)) {
    uVar1 = 0;
  }
  else {
    uVar1 = -(uint)((&DAT_02002c60)[(param_2 >> 0xc) * (uint)DAT_02002c60 + (param_1 >> 0xc) + 2] ^
                   (&DAT_02002c60)
                   [(uint)DAT_02002c60 * (param_2 + 0x28000 >> 0xc) + (param_1 >> 0xc) + 2]) >> 0x1f
    ;
  }
  return CONCAT44(in_lr,uVar1);
}

