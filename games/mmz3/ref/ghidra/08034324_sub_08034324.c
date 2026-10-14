// sub_08034324 at 0x08034324 (thumb)

undefined8 sub_08034324(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_08034818(param_1,0x2c);
  if (cVar1 == '\0') {
    if (2 < *(byte *)(param_1 + 300)) {
      uVar2 = 0;
      goto LAB_08034356;
    }
  }
  else if (3 < *(byte *)(param_1 + 300)) {
    uVar2 = 0;
    goto LAB_08034356;
  }
  uVar2 = 1;
LAB_08034356:
  return CONCAT44(in_lr,uVar2);
}

