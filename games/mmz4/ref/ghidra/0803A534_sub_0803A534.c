// sub_0803A534 at 0x0803A534 (thumb)

undefined8 sub_0803A534(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    iVar1 = 0;
    if (*(byte *)(param_1 + 0xf3) < 3) goto LAB_0803a55c;
  }
  else {
    iVar1 = 0;
    if (*(char *)(param_1 + 0xf3) != '\x03') goto LAB_0803a55c;
  }
  iVar1 = 1;
LAB_0803a55c:
  if (*(char *)(param_1 + 199) == '\x03') {
    iVar1 = iVar1 + 3;
  }
  return CONCAT44(in_lr,iVar1);
}

