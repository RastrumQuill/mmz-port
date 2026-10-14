// sub_080FB4C0 at 0x080FB4C0 (thumb)

undefined4 sub_080FB4C0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) == '\0') {
    sub_08002624(0xac);
  }
  else {
    sub_08002624(0x36);
    *(char *)(param_1 + 0xbd) = '\0';
  }
  sub_080E8F60(param_1);
  return in_lr;
}

