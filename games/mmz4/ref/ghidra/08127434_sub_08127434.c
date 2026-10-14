// sub_08127434 at 0x08127434 (thumb)

undefined4 sub_08127434(undefined4 *param_1)

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
  sub_081284E8(&local_10,param_1,&DAT_05000260);
  *(undefined *)((int)param_1 + 6) = 8;
  *(undefined *)((int)param_1 + 7) = 0xf;
  param_1[0xe] = 0x8126d01;
  param_1[10] = 0x81284dd;
  param_1[0xb] = 0x81284dd;
  param_1[0xc] = 0x81284dd;
  param_1[0xf] = 0x81284dd;
  sub_08126824(&DAT_0203d290);
  param_1[0xd] = &DAT_0203d290;
  sub_08127500(0x40000);
  *param_1 = 0x68736d53;
  return in_lr;
}

