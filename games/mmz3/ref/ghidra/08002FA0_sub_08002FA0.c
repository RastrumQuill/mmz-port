// sub_08002FA0 at 0x08002FA0 (thumb)

undefined4 sub_08002FA0(void)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (DAT_02001790 != '\0') {
    uVar1 = DAT_0400010e;
    DAT_0400010e = uVar1 & 0xff7f;
    DAT_0400010c = 0xff7c;
  }
  return in_lr;
}

