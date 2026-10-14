// sub_0801CBB0 at 0x0801CBB0 (thumb)

undefined4 sub_0801CBB0(byte *param_1,undefined param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)param_3;
  if (((int)(uint)*param_1 >> uVar2 & 1U) == 0) {
    uVar1 = sub_0801CDA4(param_1);
    *param_1 = (byte)(1 << uVar2) | *param_1;
    sub_0801C888(param_1,param_2,uVar2);
    if ((uVar1 & 0xff) < 2) {
      param_1[(uVar1 & 0xff) + 2] = param_3;
      param_1[0x14] = 0;
    }
  }
  return in_lr;
}

