// sub_08011D5C at 0x08011D5C (thumb)

undefined4 sub_08011D5C(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_0202cac0 & 0xf) == 3) {
    *(undefined2 *)(param_1 + 0x78) = 0;
    sub_08002B5C(0x7a);
    DAT_02000a40 = 0;
    DAT_02000a50 = DAT_02000a50 & 0xbfff;
  }
  return in_lr;
}

