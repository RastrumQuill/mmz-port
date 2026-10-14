// sub_08048950 at 0x08048950 (thumb)

undefined4 sub_08048950(undefined4 param_1,undefined4 param_2,short param_3)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_0800539C(param_1,3,param_2,200,(int)param_3);
  uVar1 = 0;
  DAT_02022e98 = param_1;
  do {
    (&DAT_02022ea0)[uVar1] = (ushort)(&DAT_084b8006)[uVar1 * 10] >> 6;
    (&DAT_02022f30)[uVar1] = (&DAT_084b8013)[uVar1 * 0x14];
    uVar1 = uVar1 + 1 & 0xffff;
  } while (uVar1 < 0x42);
  return in_lr;
}

