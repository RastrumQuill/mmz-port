// sub_08007020 at 0x08007020 (thumb)

undefined8 sub_08007020(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (DAT_02000c80 == 4) {
    param_1 = sub_08128954(param_1 + -0xf000,0x3c000);
    param_1 = param_1 + 0xf000;
  }
  param_2 = param_2 >> 0xc;
  if ((((uint)(param_1 >> 0xc) < 0x771) && (-1 < param_2)) && (param_2 < 0x4f6)) {
    uVar1 = (uint)*(ushort *)
                   ((uint)(&DAT_02001290)[param_2 * (uint)DAT_02001290 + (param_1 >> 0xc) + 2] * 2 +
                   DAT_02000c68);
  }
  else {
    uVar1 = 0xa01;
  }
  return CONCAT44(in_lr,uVar1);
}

