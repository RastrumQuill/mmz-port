// sub_08037724 at 0x08037724 (thumb)

undefined4 sub_08037724(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08038BAC();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 4;
  }
  return in_lr;
}

