// sub_080C2108 at 0x080C2108 (thumb)

undefined4 sub_080C2108(int param_1)

{
  undefined4 in_lr;
  
  if (((((DAT_02022b6e & 1) == 0) && (DAT_02022cc0 == 0)) && (*(char *)(param_1 + 2) == '\0')) &&
     (((char)DAT_02023664 != '\x01' && (DAT_02023644 != 0)))) {
    sub_080014E8(&DAT_082f10c8,(DAT_02004f34 & 0xc) << 0xc);
    sub_0800179C(&DAT_082f10d4,0);
    sub_080BC464();
  }
  return in_lr;
}

