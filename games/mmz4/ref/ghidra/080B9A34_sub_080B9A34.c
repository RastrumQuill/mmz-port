// sub_080B9A34 at 0x080B9A34 (thumb)

undefined8 sub_080B9A34(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x13);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x13) = cVar1 + -1;
  }
  return CONCAT44(in_lr,(uint)(cVar1 == '\0'));
}

