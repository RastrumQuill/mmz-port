// sub_080C144C at 0x080C144C (thumb)

undefined4 sub_080C144C(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080C15B8(param_1);
  }
  else {
    sub_080C1600(param_1);
  }
  return in_lr;
}

