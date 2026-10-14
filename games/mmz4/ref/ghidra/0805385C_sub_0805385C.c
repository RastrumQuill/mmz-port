// sub_0805385C at 0x0805385C (thumb)

undefined4 sub_0805385C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0xb600);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((DAT_0202e922 & 1) == 0) {
    sub_080539F4(param_1);
  }
  return in_lr;
}

