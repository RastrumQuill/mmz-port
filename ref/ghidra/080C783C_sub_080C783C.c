// sub_080C783C at 0x080C783C (thumb)

undefined4 sub_080C783C(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_10;
  
  *param_1 = 0;
  uVar2 = DAT_040000c4;
  if ((uVar2 & 0x2000000) != 0) {
    DAT_040000c4 = 0x84400004;
  }
  DAT_040000c4._2_2_ = 0x400;
  DAT_04000084 = 0x8f;
  DAT_04000082 = 0xb0e;
  bVar1 = DAT_04000089;
  DAT_04000089 = bVar1 & 0x3f | 0x40;
  DAT_040000bc = param_1 + 0xd4;
  DAT_040000c0 = 0x40000a0;
  local_10 = 0;
  DAT_03007ff0 = param_1;
  FUN_080c88f0(&local_10,param_1,&DAT_05000260);
  *(undefined *)((int)param_1 + 6) = 8;
  *(undefined *)((int)param_1 + 7) = 0xf;
  param_1[0xe] = 0x80c7109;
  param_1[10] = 0x80c88e5;
  param_1[0xb] = 0x80c88e5;
  param_1[0xc] = 0x80c88e5;
  param_1[0xf] = 0x80c88e5;
  sub_080C6C2C(&DAT_0202f720);
  param_1[0xd] = &DAT_0202f720;
  sub_080C7908(0x40000);
  *param_1 = 0x68736d53;
  return in_lr;
}

