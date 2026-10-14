// sub_0801A380 at 0x0801A380 (thumb)

undefined4 sub_0801A380(char param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_02030318;
  if (param_1 == '\0') {
    sub_0801A79C(&DAT_02030288);
  }
  if (DAT_020302a0 != '\0') {
    sub_08008DCC(uVar1);
  }
  sub_08021E28(&DAT_020301b0);
  sub_0801A7B8(&DAT_02030288);
  return in_lr;
}

