// sub_0800E71C at 0x0800E71C (thumb)

undefined4 sub_0800E71C(void)

{
  undefined4 in_lr;
  
  DAT_02000a50 = DAT_02000a50 & 0xbfff;
  DAT_0202ea6c = DAT_0202ea6c | 0x4000;
  DAT_0202ea6e = 0x8000;
  return in_lr;
}

