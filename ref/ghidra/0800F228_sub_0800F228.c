// sub_0800F228 at 0x0800F228 (thumb)

undefined4 sub_0800F228(ushort param_1,int param_2)

{
  undefined4 in_lr;
  
  param_1 = param_1 & 0xff;
  DAT_02022ad0 = param_1;
  FUN_080c88ec(param_2,&DAT_02022ad4,0x10);
  FUN_080c88f0(param_2 + 0x40,&DAT_02022b14,&DAT_04000003);
  DAT_02022ad4 = DAT_02022ad4 & 0xfb;
  DAT_02022add = DAT_02022add & 0xef;
  if (3 < param_1) {
    DAT_02022ad4 = DAT_02022ad4 | 8;
  }
  if ((param_1 - 1 & 0xff) < 0xc) {
    DAT_02022ad4 = DAT_02022ad4 & 0xef;
  }
  else {
    DAT_02022ad4 = DAT_02022ad4 | 0x10;
  }
  DAT_02022ad6 = DAT_02022ad6 & 0xef;
  if (param_1 == 9) {
    DAT_02022ae1 = DAT_02022ae1 | 2;
  }
  if (param_1 == 10) {
    if ((DAT_02022ae1 & 0x80) != 0) {
      DAT_02022aeb = DAT_02022aeb | 1;
      DAT_02022ae1 = DAT_02022ae1 & 0x7f;
    }
  }
  else if ((DAT_02022aeb & 1) != 0) {
    DAT_02022ae1 = DAT_02022ae1 | 0x80;
  }
  if ((DAT_02022adc & 2) == 0) {
    DAT_02022ae1 = DAT_02022ae1 & 0xfb;
  }
  else {
    DAT_02022ae1 = DAT_02022ae1 | 4;
  }
  DAT_02022adc = DAT_02022adc & 0xfe;
  if (param_1 != 0) {
    DAT_02022af8 = 0;
    DAT_02022af7 = 0;
    DAT_02022af6 = 0;
    DAT_02022af5 = 0;
    DAT_02022af4 = 0;
    DAT_02022af3 = 0;
  }
  if (param_1 == 9) {
    DAT_02022ae2 = DAT_02022ae2 | 4;
  }
  if (param_1 == 10) {
    DAT_02022ae2 = DAT_02022ae2 | 7;
    DAT_02022ae4 = DAT_02022ae4 | 0x18;
  }
  if ((param_1 == 0xb) && ((DAT_02022ae1 & 0x80) == 0)) {
    DAT_02022ae2 = DAT_02022ae2 & 0xfb;
  }
  DAT_02022adf = DAT_02022adf & 0x7f;
  DAT_02022ae0 = DAT_02022ae0 & 0xe0;
  return in_lr;
}

