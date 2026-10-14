// sub_080C2028 at 0x080C2028 (thumb)

undefined4 sub_080C2028(void)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((DAT_02022884 != 0) && (DAT_02022884 = DAT_02022884 - 1, (DAT_02022884 & 3) == 3)) {
    sVar2 = sub_0801D038(&DAT_0202b5a0,4);
    if (sVar2 == 0) {
      DAT_02022884 = 0;
    }
    else {
      sub_08001EAC(0x94);
    }
  }
  sVar2 = DAT_0202b62c;
  uVar4 = (uint)DAT_02022b64;
  if ((DAT_02022b64 & 0x10) == 0) {
    if ((DAT_02022888 != 0) && (uVar3 = sub_0801C5CC(&DAT_0202b5a0), (short)(uVar3 & 0xff) <= sVar2)
       ) {
      DAT_02022894 = DAT_02022894 + DAT_02022888;
      DAT_02022888 = uVar4 & 0x10;
    }
    if ((DAT_02022894 != 0) && (DAT_02022894 = DAT_02022894 - 1, (DAT_02022894 & 3) == 3)) {
      cVar1 = sub_0801CF90(&DAT_0202b5a0);
      if (cVar1 == '\0') {
        DAT_02022894 = 0;
      }
    }
    if ((DAT_02022888 != 0) && (DAT_02022888 = DAT_02022888 - 1, (DAT_02022888 & 3) == 3)) {
      cVar1 = sub_0801CF90(&DAT_0202b5a0);
      if (cVar1 == '\0') {
        DAT_02022888 = 0;
      }
    }
  }
  else {
    DAT_02022888 = 0;
  }
  return in_lr;
}

