// sub_08025B3C at 0x08025B3C (thumb)

undefined8 sub_08025B3C(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = (uint)*(byte *)(param_1 + 0x11d) - (param_2 & 0xff);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(byte *)(param_1 + 0x11d) = (byte)iVar1;
  return CONCAT44(in_lr,(uint)*(byte *)(param_1 + 0x11d));
}

