// sub_080B30AC at 0x080B30AC (thumb)

undefined4 sub_080B30AC(undefined4 param_1,undefined4 param_2,short param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0800539C(param_1,7,param_2,200,(int)param_3);
  uVar1 = 0;
  DAT_020231fc = param_1;
  do {
    (&DAT_02023200)[uVar1] = (ushort)(&DAT_084fc006)[uVar1 * 10] >> 6;
    (&DAT_02023208)[uVar1] = (&DAT_084fc013)[uVar1 * 0x14];
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 4);
  return in_lr;
}

