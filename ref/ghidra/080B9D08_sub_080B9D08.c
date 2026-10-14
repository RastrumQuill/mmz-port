// sub_080B9D08 at 0x080B9D08 (thumb)

undefined4 sub_080B9D08(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080C3B9C(*(undefined4 *)(param_1 + 0x20));
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080B9D2C(param_1);
  }
  return in_lr;
}

