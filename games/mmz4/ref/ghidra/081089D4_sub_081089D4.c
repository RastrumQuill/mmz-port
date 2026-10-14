// sub_081089D4 at 0x081089D4 (thumb)

undefined4 sub_081089D4(uint param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  sub_0810DEE0(0x100,0x5a);
  sub_08002B10(6);
  pbVar1 = (byte *)(DAT_0202edac + ((param_1 << 0x18) >> 0x1a));
  *pbVar1 = (byte)(1 << (param_1 & 3)) | *pbVar1;
  return in_lr;
}

