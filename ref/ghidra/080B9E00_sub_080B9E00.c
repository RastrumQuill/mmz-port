// sub_080B9E00 at 0x080B9E00 (thumb)

undefined4 sub_080B9E00(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C3BB4(*(undefined4 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080B9E24(param_1);
  }
  return in_lr;
}

