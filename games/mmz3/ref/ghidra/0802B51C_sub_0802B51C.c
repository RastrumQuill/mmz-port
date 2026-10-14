// sub_0802B51C at 0x0802B51C (thumb)

undefined4 sub_0802B51C(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if ((((DAT_02002650 & 0x7f) == 7) && (sVar1 = sub_08010340(), sVar1 != 0)) ||
     (*(char *)(param_1 + 0x234) != '\0')) {
    sub_08027118(param_1,&DAT_0835b034);
  }
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835ac90 + (uint)*(byte *)(param_1 + 0xf) * 4));
  return in_lr;
}

