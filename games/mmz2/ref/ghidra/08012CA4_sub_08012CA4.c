// sub_08012CA4 at 0x08012CA4 (thumb)

undefined4 sub_08012CA4(int param_1,uint param_2)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x20;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)((param_2 & 0xff) << 4);
  *(char *)(param_1 + 0x23) = (char)param_2;
  return in_lr;
}

