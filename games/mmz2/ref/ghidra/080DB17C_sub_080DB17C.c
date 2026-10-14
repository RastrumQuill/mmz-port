// sub_080DB17C at 0x080DB17C (thumb)

undefined4 sub_080DB17C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 1;
  if ((DAT_0202ebb4 & 2) == 0) {
    sub_080127E4(param_1,0x4304);
  }
  else {
    sub_080127E4(param_1,0x4204);
  }
  sub_080DB1BC(param_1);
  return in_lr;
}

