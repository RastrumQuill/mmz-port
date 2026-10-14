// sub_080AA774 at 0x080AA774 (thumb)

undefined8 sub_080AA774(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x13);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x13) = cVar1 + -1;
  }
  return CONCAT44(in_lr,(uint)(cVar1 == '\0'));
}

