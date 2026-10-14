// sub_080DAF04 at 0x080DAF04 (thumb)

undefined4 sub_080DAF04(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4306);
  }
  else {
    sub_080127E4(param_1,0x4206);
  }
  sub_080DAF44(param_1);
  return in_lr;
}

