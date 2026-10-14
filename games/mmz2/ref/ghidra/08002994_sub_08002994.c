// sub_08002994 at 0x08002994 (thumb)

undefined4 sub_08002994(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined2 local_c [2];
  
  local_30 = 0x1f001f;
  local_2c = 0x3e003e0;
  local_28 = 0x7c007c00;
  if (DAT_03002ec0 == DAT_03002ec1) {
    if (DAT_03002ec0 == 0x20) {
      DAT_040000d4 = 0x3002ac0;
      DAT_040000d8 = 0x5000000;
      DAT_040000dc = 0x84000100;
      uVar1 = DAT_040000dc;
    }
    else if (DAT_03002ec0 < 0x20) {
      sub_08002B30(&DAT_03002ac0,&DAT_05000000,DAT_03002ec0,&local_30);
    }
    else {
      local_24 = 0x40 - DAT_03002ec0;
      local_20 = DAT_03002ec0 - 0x21 | (DAT_03002ec0 - 0x21) * 0x10000;
      sub_08002B74(&DAT_03002ac0,&DAT_05000000,&local_24,&local_30);
    }
  }
  else {
    if (DAT_03002ec0 < 0x21) {
      local_24 = (uint)DAT_03002ec0;
      local_18 = 0;
    }
    else {
      local_24 = 0x40 - DAT_03002ec0;
      local_18 = DAT_03002ec0 - 0x21 | (DAT_03002ec0 - 0x21) * 0x10000;
    }
    local_20 = (uint)DAT_03002ec1;
    if (local_20 < 0x21) {
      local_14 = 0;
    }
    else {
      local_20 = 0x40 - DAT_03002ec1;
      local_14 = DAT_03002ec1 - 0x21 | (DAT_03002ec1 - 0x21) * 0x10000;
    }
    local_1c = (uint)DAT_03002ec2;
    if (local_1c < 0x21) {
      local_10 = 0;
    }
    else {
      local_1c = 0x40 - DAT_03002ec2;
      local_10 = DAT_03002ec2 - 0x21 | (DAT_03002ec2 - 0x21) * 0x10000;
    }
    sub_08002BC4(&DAT_03002ac0,&DAT_05000000,&local_24,&local_30);
  }
  if (DAT_03002ec6 != 0) {
    local_c[0] = 0xffff;
    sub_080EEF6C(local_c,&DAT_05000000 + DAT_03002ec4,DAT_03002ec6 >> 1 | 0x1000000);
    DAT_03002ec6 = 0;
  }
  return in_lr;
}

