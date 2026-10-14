// sub_08014720 at 0x08014720 (thumb)

undefined4 sub_08014720(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_0202cab0;
  if (0x68fff < param_1) {
    return in_lr;
  }
  if ((0x9ffe < param_2 - 0x1e001U) && (0x13ffe < param_2 - 0x32001U)) {
    return in_lr;
  }
  DAT_0202db00 = (&DAT_02001290)
                 [(uint)DAT_02001290 * (param_2 + 0x64000 >> 0xc) + (param_1 >> 0xc) + 2];
  if (DAT_0202db00 == 0xd7) {
    sub_0801480C(param_1,param_2);
    param_1 = param_1 + 0x1000;
  }
  else if (DAT_0202db00 == 0xd8) {
    sub_0801480C(param_1 + -0x1000,param_2);
  }
  else {
    if ((DAT_0202db00 & 1) != 0) {
      sub_0801480C(param_1 + -0x1000,param_2);
      sub_0801480C(param_1,param_2);
      DAT_0202cab0 = uVar1;
      DAT_0202dad9 = 1;
      return in_lr;
    }
    sub_0801480C(param_1,param_2);
    param_1 = param_1 + 0x1000;
  }
  sub_0801480C(param_1,param_2);
  DAT_0202dad9 = 1;
  DAT_0202cab0 = uVar1;
  return in_lr;
}

