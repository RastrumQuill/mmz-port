// sub_080B9FF8 at 0x080B9FF8 (thumb)

undefined4 sub_080B9FF8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C3BEC(*(undefined4 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA01C(param_1);
  }
  return in_lr;
}

