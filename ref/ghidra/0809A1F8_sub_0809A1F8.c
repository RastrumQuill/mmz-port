// sub_0809A1F8 at 0x0809A1F8 (thumb)

undefined4 sub_0809A1F8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x03') {
    DAT_02004f80 = DAT_02004f80 & 0xbfff;
    DAT_02004f8e = DAT_02004f8e | 0xfe;
    DAT_030017a0 = 0;
  }
  sub_08088100(param_1);
  return in_lr;
}

