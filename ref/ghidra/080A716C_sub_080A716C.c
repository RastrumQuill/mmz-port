// sub_080A716C at 0x080A716C (thumb)

undefined4 sub_080A716C(int param_1)

{
  undefined4 in_lr;
  
  sub_08001EE8((int)*(short *)(param_1 + 0xc4));
  *(short *)(param_1 + 0xc4) = -1;
  DAT_02004f80 = DAT_02004f80 & 0xbfff;
  DAT_02004f8e = DAT_02004f8e | 0xfe;
  sub_0809C6A4(param_1);
  return in_lr;
}

