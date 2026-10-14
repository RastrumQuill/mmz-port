// sub_08037874 at 0x08037874 (thumb)

undefined4 sub_08037874(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = sub_08038BFC();
  if (cVar1 != '\0') {
    sub_08001EAC(0x42);
    *(undefined *)(param_1 + 0xf) = 4;
    sub_08038A5C(param_1,0xe);
  }
  return in_lr;
}

