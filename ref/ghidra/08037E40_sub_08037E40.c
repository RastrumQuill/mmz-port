// sub_08037E40 at 0x08037E40 (thumb)

undefined4 sub_08037E40(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08038BAC();
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xf) = 5;
  }
  return in_lr;
}

