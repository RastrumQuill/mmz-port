// sub_08037278 at 0x08037278 (thumb)

undefined4 sub_08037278(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08038BAC();
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0xe) = 3;
    sub_08038A5C(param_1,4);
  }
  return in_lr;
}

