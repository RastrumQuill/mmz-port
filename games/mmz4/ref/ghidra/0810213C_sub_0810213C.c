// sub_0810213C at 0x0810213C (thumb)

undefined8 sub_0810213C(void)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 1;
  sub_08006984(0x5c);
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
  if (DAT_0202e8c9 == uVar1) {
    uVar1 = uVar1 + 1;
  }
  else {
    DAT_0202e8c9 = (byte)uVar1;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)(&UNK_08868680 + uVar1 * 2));
}

