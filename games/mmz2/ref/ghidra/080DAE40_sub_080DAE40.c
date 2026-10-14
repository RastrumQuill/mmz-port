// sub_080DAE40 at 0x080DAE40 (thumb)

undefined4 sub_080DAE40(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4303);
  }
  else {
    sub_080127E4(param_1,0x4203);
  }
  sub_080DAE80(param_1);
  return in_lr;
}

