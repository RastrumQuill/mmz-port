// sub_08025ABC at 0x08025ABC (thumb)

undefined4 sub_08025ABC(undefined4 param_1,undefined4 param_2,short param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0800539C(param_1,1,param_2,0xdc,(int)param_3);
  uVar1 = 0;
  DAT_02022e90 = param_1;
  do {
    (&DAT_0200203c)[uVar1] = 0xffff;
    (&DAT_02002038)[uVar1] = 0xffff;
    (&DAT_02002034)[uVar1] = 0xffff;
    (&DAT_02002030)[uVar1] = 0xffff;
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 2);
  return in_lr;
}

