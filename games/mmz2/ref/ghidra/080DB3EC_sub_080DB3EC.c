// sub_080DB3EC at 0x080DB3EC (thumb)

undefined4 sub_080DB3EC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x430a);
  }
  else {
    sub_080127E4(param_1,0x420a);
  }
  sub_080DB42C(param_1);
  return in_lr;
}

