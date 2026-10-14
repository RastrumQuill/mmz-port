// sub_080146BC at 0x080146BC (thumb)

undefined8 sub_080146BC(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((param_1 < 0x69000) && ((param_2 - 0x1e001U < 0x9fff || (param_2 - 0x32001U < 0x13fff)))) {
    uVar1 = (uint)(&DAT_02001290)
                  [(uint)DAT_02001290 * (param_2 + 0x64000 >> 0xc) + (param_1 >> 0xc) + 2];
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

