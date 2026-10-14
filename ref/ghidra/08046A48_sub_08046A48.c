// sub_08046A48 at 0x08046A48 (thumb)

undefined4 sub_08046A48(int param_1)

{
  undefined4 in_lr;
  
  sub_080297C0();
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xc);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x11) = 3;
  }
  sub_080297C0(param_1);
  return in_lr;
}

