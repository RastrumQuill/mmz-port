// sub_0809C630 at 0x0809C630 (thumb)

undefined4 sub_0809C630(undefined4 param_1,undefined4 param_2,short param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0800539C(param_1,6,param_2,0xcc,(int)param_3);
  uVar1 = 0;
  DAT_02023118 = param_1;
  do {
    (&DAT_02023170)[uVar1] = (ushort)(&DAT_08510006)[uVar1 * 10] >> 6;
    (&DAT_02023120)[uVar1] = (&DAT_08510013)[uVar1 * 0x14];
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 0x46);
  return in_lr;
}

