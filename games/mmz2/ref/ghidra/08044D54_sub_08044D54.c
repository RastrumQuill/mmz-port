// sub_08044D54 at 0x08044D54 (thumb)

undefined8 sub_08044D54(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 in_lr;
  
  param_2 = param_2 & 0xff;
  if (param_2 < 7) {
    piVar1 = (int *)(param_1 + 0xcc);
  }
  else {
    piVar1 = (int *)(param_1 + 0xd0);
  }
  if (0xd < param_2) {
    param_2 = 0xd;
  }
  return CONCAT44(in_lr,*piVar1 - (&DAT_0833a780)[param_2]);
}

