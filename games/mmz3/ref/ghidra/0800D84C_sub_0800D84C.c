// sub_0800D84C at 0x0800D84C (thumb)

undefined4 sub_0800D84C(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02002c56 >> 8 == 4) && ((DAT_02002c56 & 0xff) == 1)) {
    if ((DAT_0202f4a8 & 1) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 1;
      sub_080040A8(0x2d,0);
    }
    sub_080041E4(0x2d);
  }
  else if ((DAT_0202f4a8 & 1) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 1;
    sub_08004230(0x2d);
  }
  if ((DAT_02002c56 >> 8 == 4) && ((DAT_02002c56 & 0xff) == 4)) {
    if ((DAT_0202f4a8 & 2) == 0) {
      DAT_0202f4a8 = DAT_0202f4a8 | 2;
      sub_080040A8(0x2e,0);
      sub_080040A8(0x2f,0);
      sub_080040A8(0x30,0);
    }
    sub_080041E4(0x2e);
    sub_080041E4(0x2f);
    sub_080041E4(0x30);
  }
  else if ((DAT_0202f4a8 & 2) != 0) {
    DAT_0202f4a8 = DAT_0202f4a8 ^ 2;
    sub_08004230(0x2e);
    sub_08004230(0x2f);
    sub_08004230(0x30);
  }
  sub_080041E4(0x2b);
  sub_080041E4(0x2c);
  if (DAT_0202f4a4 == '\0') {
    DAT_0202e484 = 0xfffffeab;
    DAT_0202e488 = 0x155;
    DAT_0202f4a9 = DAT_0202f4a9 + 1;
    if (DAT_0202f4a9 == '\x06') {
      DAT_0202f4a9 = DAT_0202f4a4;
    }
  }
  else {
    DAT_0202e484 = 0x155;
    DAT_0202e488 = 0xfffffeab;
    uVar1 = (uint)DAT_0202f4a9;
    DAT_0202f4a9 = (byte)(uVar1 - 1);
    if ((int)((uVar1 - 1) * 0x1000000) < 0) {
      DAT_0202f4a9 = '\x05';
    }
  }
  DAT_0202f4aa._0_1_ = (char)DAT_0202f4aa + '\x01';
  if ((char)DAT_0202f4aa == '-') {
    DAT_0202f4aa._0_1_ = '\0';
  }
  if ((*param_1 - 0x10d001U < 0x5afff) || ((*param_1 < 0x1e000 && (param_1[1] < 0x14000)))) {
    iVar2 = sub_080047C0(0x10b);
    if (iVar2 == 0) {
      sub_0800471C(0x10b);
    }
    sub_080047D8(0x10b);
  }
  else {
    iVar2 = sub_080047C0(0x10b);
    if (iVar2 != 0) {
      sub_08004768(0x10b);
    }
  }
  return in_lr;
}

