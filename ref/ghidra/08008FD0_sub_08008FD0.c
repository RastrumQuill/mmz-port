// sub_08008FD0 at 0x08008FD0 (thumb)

undefined4 sub_08008FD0(undefined param_1,int *param_2,short *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)DAT_0200520e;
  if (uVar1 + 1 < 0x20) {
    DAT_0200520e = (ushort)(uVar1 + 1);
    (&DAT_02005210)[uVar1] = param_1;
    (&DAT_02005230)[uVar1 * 2] = *param_2 + (int)*param_3;
    (&DAT_02005234)[uVar1 * 2] = param_2[1] + (int)param_3[1];
    (&DAT_02005330)[uVar1] = (ushort)param_3[2] >> 1;
    (&DAT_02005370)[uVar1] = (ushort)param_3[3] >> 1;
    (&DAT_020053b0)[uVar1] = param_4;
  }
  return in_lr;
}

