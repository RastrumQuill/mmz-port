// sub_08008354 at 0x08008354 (thumb)

undefined8 sub_08008354(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  param_2 = param_2 >> 0xc;
  if ((((uint)(param_1 >> 0xc) < 0x771) && (-1 < param_2)) && (param_2 < 0x4f6)) {
    uVar1 = (uint)*(ushort *)
                   ((uint)(&DAT_020017e0)[param_2 * (uint)DAT_020017e0 + (param_1 >> 0xc) + 2] * 2 +
                   DAT_020011b8);
  }
  else {
    uVar1 = 0xe01;
  }
  return CONCAT44(in_lr,uVar1);
}

