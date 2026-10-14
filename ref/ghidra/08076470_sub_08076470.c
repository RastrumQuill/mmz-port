// sub_08076470 at 0x08076470 (thumb)

undefined4 sub_08076470(undefined4 param_1,undefined4 param_2,short param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0800539C(param_1,4,param_2,200,(int)param_3);
  uVar1 = 0;
  DAT_02022f74 = param_1;
  do {
    (&DAT_02022f80)[uVar1] = (ushort)(&DAT_084e0006)[uVar1 * 10] >> 6;
    (&DAT_02022fe0)[uVar1] = (&DAT_084e0013)[uVar1 * 0x14];
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 0x2a);
  return in_lr;
}

