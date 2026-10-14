// sub_08025B14 at 0x08025B14 (thumb)

undefined8 sub_08025B14(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x11d) + (param_2 & 0xff);
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  *(byte *)(param_1 + 0x11d) = (byte)uVar1;
  return CONCAT44(in_lr,(uint)*(byte *)(param_1 + 0x11d));
}

