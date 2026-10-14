// sub_080D2C60 at 0x080D2C60 (thumb)

undefined4 sub_080D2C60(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202e130;
  sub_080128D4(param_1);
  if (((*(short *)(param_1 + 0xba) == 0x241) && (DAT_0202f66e == 9)) &&
     ((*(byte *)(iVar1 + 0x232) & 2) == 0)) {
    sub_080DEF5C(0x182,0x5a);
    sub_080D61EC(iVar1,0x51);
  }
  if ((*(short *)(param_1 + 0xba) == 0x2a2) && ((*(byte *)(iVar1 + 0x22a) & 0x40) == 0)) {
    sub_080DEF5C(0x147,0x5a);
    sub_080D61EC(iVar1,0x16);
  }
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

