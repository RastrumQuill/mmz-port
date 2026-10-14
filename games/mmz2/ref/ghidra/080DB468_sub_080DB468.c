// sub_080DB468 at 0x080DB468 (thumb)

undefined4 sub_080DB468(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x430b);
  }
  else {
    sub_080127E4(param_1,0x420b);
  }
  sub_080DB4A8(param_1);
  return in_lr;
}

