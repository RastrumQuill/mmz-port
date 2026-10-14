// sub_0801702C at 0x0801702C (thumb)

undefined4 sub_0801702C(void)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((DAT_02001284 >> 8 == 0xb) && ((DAT_02001284 & 0xff) == 0xd)) {
    if (DAT_0202dad9 < 0x13) {
      iVar1 = 1;
      if (DAT_0202dad9 < 8) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 3;
      if (DAT_0202dad9 < 0x1b) {
        iVar1 = 2;
      }
    }
    sub_08001EA4(&DAT_08fa4db0 + iVar1 * 0x14,0x4000);
    sub_08002208(&DAT_08fa4dbc + iVar1 * 0x14,0);
    if (DAT_0202dada < 0x3e) {
      sub_08001EA4(&DAT_08fa4e00 + (uint)(byte)(&DAT_088346d0)[DAT_0202dada >> 1] * 0x14,0x4000);
      sub_08002208(&DAT_08fa4e0c + (uint)(byte)(&DAT_088346d0)[DAT_0202dada >> 1] * 0x14,0);
    }
    else {
      sub_08001EA4(&DAT_08fa4e00,0x4000);
      sub_08002208(&DAT_08fa4e0c,0);
    }
  }
  return in_lr;
}

