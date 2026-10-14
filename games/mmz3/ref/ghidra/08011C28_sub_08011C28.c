// sub_08011C28 at 0x08011C28 (thumb)

undefined4 sub_08011C28(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_08011c64:
    if (DAT_0202f4a4 == '\x03') {
      sub_080093E8(0x11,1,0x3c);
      sub_080093E8(0x12,1,0x3d);
      sub_080093E8(0x11,2,0x4c);
      sub_080093E8(0x12,2,0x4d);
      cVar2 = '\x04';
      goto LAB_08011d18;
    }
    if (DAT_0202f4a4 == '\0') {
      return in_lr;
    }
    DAT_0202f4ac._0_1_ = '\x01';
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08011cbe:
    if ((char)DAT_0202f4ac != '\0') {
      return in_lr;
    }
    sub_080093E8(0x11,1,0x3c);
    sub_080093E8(0x12,1,0x3d);
    sub_080093E8(0x11,2,0x4c);
    sub_080093E8(0x12,2,0x4d);
    DAT_0202f4ac._0_1_ = '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] =
           (&DAT_020023c4)[(uint)(*(int *)(param_1 + 0x5c) << 0x10) >> 0x14] & 0xfffc | 3;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_08011c64;
    }
    if (bVar1 == 2) goto LAB_08011cbe;
    if (bVar1 != 3) {
      return in_lr;
    }
    if (DAT_0202f4a4 != '\x02') {
      return in_lr;
    }
    DAT_0202f4ac._1_1_ = 1;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08011d18:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

