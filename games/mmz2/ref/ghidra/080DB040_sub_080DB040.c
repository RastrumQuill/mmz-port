// sub_080DB040 at 0x080DB040 (thumb)

undefined4 sub_080DB040(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4308);
  }
  else {
    sub_080127E4(param_1,0x4208);
  }
  sub_080DB080(param_1);
  return in_lr;
}

