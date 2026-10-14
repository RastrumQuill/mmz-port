// sub_080015EC at 0x080015EC (thumb)

void sub_080015EC(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int extraout_r1;
  
  DAT_02001752 = sub_08000ED4(4);
  if (extraout_r1 == 0) {
    DAT_02001750 = param_3;
    return;
  }
  DAT_02001752 = 0xffff;
  DAT_02001750 = 0xffff;
  return;
}

