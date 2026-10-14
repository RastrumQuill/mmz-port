// sub_080A0D4C at 0x080A0D4C (thumb)

undefined4 sub_080A0D4C(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02022b60 == 0xd) && ((DAT_02022adc & 0x10) == 0)) {
    *(uint *)(param_1 + 0x68) = DAT_02022adc & 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  }
  else {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b58d4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  return in_lr;
}

