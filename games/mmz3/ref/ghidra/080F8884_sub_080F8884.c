// sub_080F8884 at 0x080F8884 (thumb)

undefined4 sub_080F8884(uint param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(DAT_0203df90 + ((param_1 << 0x18) >> 0x1a));
  *pbVar1 = (byte)(1 << (param_1 & 3)) | *pbVar1;
  (&DAT_0203df94)[DAT_0203df9e] = (char)param_1;
  DAT_0203df9e = DAT_0203df9e + 1;
  return in_lr;
}

