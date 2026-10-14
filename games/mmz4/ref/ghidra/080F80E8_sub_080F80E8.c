// sub_080F80E8 at 0x080F80E8 (thumb)

undefined4 sub_080F80E8(int *param_1,byte *param_2)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_080F811C();
  if (cVar1 != '\r') {
    *param_2 = *param_2 ^ 1;
  }
  *param_1 = *param_1 + -0x100 + (char)*param_2 * 0x200;
  return in_lr;
}

