// sub_080DB1F0 at 0x080DB1F0 (thumb)

undefined4 sub_080DB1F0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4305);
  }
  else {
    sub_080127E4(param_1,0x4205);
  }
  sub_080DB230(param_1);
  return in_lr;
}

