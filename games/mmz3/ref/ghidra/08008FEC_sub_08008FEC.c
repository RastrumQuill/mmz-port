// sub_08008FEC at 0x08008FEC (thumb)

undefined8 sub_08008FEC(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  param_2 = param_2 >> 0xc;
  if ((((uint)(param_1 >> 0xc) < 0x771) && (-1 < param_2)) && (param_2 < 0x4f6)) {
    uVar1 = (uint)*(ushort *)
                   ((uint)(&DAT_02002c60)[param_2 * (uint)DAT_02002c60 + (param_1 >> 0xc) + 2] * 2 +
                   DAT_02002638);
  }
  else {
    uVar1 = 0xa01;
  }
  return CONCAT44(in_lr,uVar1);
}

