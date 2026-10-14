// sub_0800CD80 at 0x0800CD80 (thumb)

undefined4 sub_0800CD80(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((DAT_02002c54 >> 8 == 3) && ((DAT_02002c54 & 0xff) == 0)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0xe5,0);
      sub_080040A8(0xe6,0);
    }
    sub_080041E4(0xe5);
    sub_080041E4(0xe6);
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
    sub_08004230(0xe5);
    sub_08004230(0xe6);
  }
  if ((DAT_02002c56 >> 8 == 3) && ((DAT_02002c56 & 0xff) == 1)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0xe7,0);
      sub_080040A8(0xe8,0);
      sub_080040A8(0xe9,0);
      sub_080040A8(0xea,0);
    }
    sub_080041E4(0xe7);
    sub_080041E4(0xe8);
    sub_080041E4(0xe9);
    sub_080041E4(0xea);
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
    sub_08004230(0xe7);
    sub_08004230(0xe8);
    sub_08004230(0xe9);
    sub_08004230(0xea);
  }
  if ((DAT_02002c54 >> 8 == 3) && ((DAT_02002c54 & 0xff) == 2)) {
    bVar1 = DAT_0202f4a8 & 4;
    if ((DAT_0202f4a8 & 4) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 4;
      sub_080040A8(0xeb,0);
      DAT_0202f4a9 = bVar1;
      DAT_0202f4aa._0_1_ = bVar1;
    }
    sub_080041E4(0xeb);
    DAT_0202f4a9 = DAT_0202f4a9 + 1;
    if (DAT_0202f4a9 == 0x40) {
      DAT_0202f4a9 = 0;
    }
    DAT_0202f4aa._0_1_ = (byte)DAT_0202f4aa + 1;
    if ((byte)DAT_0202f4aa == 9) {
      DAT_0202f4aa._0_1_ = 0;
    }
  }
  else if ((DAT_0202f4a8 & 4) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 4;
    sub_08004230(0xeb);
  }
  if ((DAT_02002c54 >> 8 == 3) && ((DAT_02002c54 & 0xff) == 3)) {
    if ((DAT_0202f4a8 & 8) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 8;
      sub_080040A8(0xec,0);
      sub_080040A8(0xed,0);
      sub_080040A8(0xee,0);
      sub_080040A8(0xef,0);
    }
    sub_080041E4(0xec);
    sub_080041E4(0xed);
    sub_080041E4(0xee);
    sub_080041E4(0xef);
  }
  else if ((DAT_0202f4a8 & 8) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 8;
    sub_08004230(0xec);
    sub_08004230(0xed);
    sub_08004230(0xee);
    sub_08004230(0xef);
  }
  uVar3 = (uint)DAT_02030109 << 0x18;
  iVar2 = (~(uVar3 >> 0x19) & 1) + (~(uVar3 >> 0x1a) & 1) + (~(uVar3 >> 0x1b) & 1);
  if ((DAT_02030109 & 0x10) == 0) {
    iVar2 = iVar2 + 1;
  }
  if (DAT_0202e48c < *(int *)(&DAT_083394b4 + iVar2 * 4)) {
    DAT_0202e48c = DAT_0202e48c + 0x40;
  }
  if (((DAT_02030109 & 2) != 0) && ((&DAT_02002c60)[(uint)DAT_02002c60 * 0x34 + 0xc0] == 0x1c2)) {
    sub_08009348(0xb6,0x34,&DAT_083394c8);
    sub_08009348(0xbe,0x34,&DAT_083394d4);
  }
  if (((DAT_02030109 & 4) != 0) && ((&DAT_02002c60)[(uint)DAT_02002c60 * 0x37 + 0x139] == 0x1c2)) {
    sub_08009348(0x122,0x37,&DAT_083394c8);
    sub_08009348(0x137,0x37,&DAT_083394d4);
  }
  if (((DAT_02030109 & 8) != 0) && (*(short *)(&DAT_0200309a + (uint)DAT_02002c60 * 0x70) == 0x1c2))
  {
    sub_08009348(0x21b,0x38,&DAT_083394d4);
  }
  if (((DAT_02030109 & 0x10) != 0) && ((&DAT_02002c60)[(uint)DAT_02002c60 * 0x36 + 0x286] == 0x1c0))
  {
    sub_08009348(0x284,0x36,&DAT_083394c8);
  }
  return in_lr;
}

