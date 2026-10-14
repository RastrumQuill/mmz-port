// sub_080DB2B4 at 0x080DB2B4 (thumb)

undefined4 sub_080DB2B4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4300);
  }
  else {
    sub_080127E4(param_1,0x4200);
  }
  sub_080DB2F0(param_1);
  return in_lr;
}

