// sub_08001F4C at 0x08001F4C (thumb)

undefined4 sub_08001F4C(void)

{
  ushort uVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  uVar2 = DAT_02000ca4;
  uVar1 = DAT_04000128;
  if ((uVar1 & 0x40) == 0) {
    DAT_02000ca5 = 1;
    uVar1 = DAT_04000128;
    DAT_02000ca4 = (undefined)((uVar1 & 0x30) >> 4);
    if (DAT_02000ca2 != 0) {
      sub_08001B40(DAT_02000ca2,&DAT_02000ca0,uVar2);
      sub_08001E18();
    }
  }
  return in_lr;
}

