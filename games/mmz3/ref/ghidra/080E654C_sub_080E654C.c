// sub_080E654C at 0x080E654C (thumb)

undefined4 sub_080E654C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080E65D8(param_1);
  }
  else {
    sub_080E66D8(param_1);
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  sub_080E6578(param_1);
  return in_lr;
}

