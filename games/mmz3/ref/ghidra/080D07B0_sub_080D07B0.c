// sub_080D07B0 at 0x080D07B0 (thumb)

undefined4 sub_080D07B0(undefined4 param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02030104 & 1) == 0) {
    if ((DAT_02030104 & 2) == 0) {
      sub_080258F0(param_1,0);
    }
    else {
      sub_080258F0(param_1,7);
    }
  }
  else {
    sub_080258F0(param_1,6);
  }
  sub_080D070C(param_1);
  return in_lr;
}

