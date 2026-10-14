// sub_08102278 at 0x08102278 (thumb)

undefined8 sub_08102278(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 1;
  sub_08006984(0x60);
  if ((DAT_0202e8b7 & 1) == 0) {
    if ((DAT_0202e8b6 & 0x10) == 0) {
      if (((((DAT_0202e8b6 & 1) != 0) && ((DAT_0202e8b6 & 2) != 0)) &&
          (uVar1 = 3, (DAT_0202e8b6 & 4) != 0)) && (uVar1 = 5, (DAT_0202e8b6 & 8) != 0)) {
        uVar1 = 7;
      }
    }
    else {
      uVar1 = 9;
      if ((((DAT_0202e8b6 & 0x20) != 0) && (uVar1 = 0xb, (DAT_0202e8b6 & 0x40) != 0)) &&
         (uVar1 = 0xd, (DAT_0202e8b6 & 0x80) != 0)) {
        uVar1 = 0xf;
      }
    }
  }
  else {
    uVar1 = 0x11;
    if ((((DAT_0202e8b7 & 2) != 0) && (uVar1 = 0x13, (DAT_0202e8b7 & 4) != 0)) &&
       (uVar1 = 0x15, (DAT_0202e8b7 & 8) != 0)) {
      uVar1 = 0x17;
    }
  }
  if (DAT_0202e8ca == uVar1) {
    uVar1 = uVar1 + 1;
  }
  else if ((*(short *)(&UNK_088686b2 + uVar1 * 2) == 0x1524) &&
          ((*(byte *)(DAT_0202edac + 1) & 1) != 0)) {
    uVar1 = uVar1 + 1;
  }
  else {
    DAT_0202e8ca = (byte)uVar1;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(&UNK_088686b2 + uVar1 * 2));
}

