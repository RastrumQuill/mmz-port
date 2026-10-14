// sub_080360BC at 0x080360BC (thumb)

undefined8 sub_080360BC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 < 1) {
    *(int *)(param_1 + 0x5c) = iVar1 + 4;
    if (iVar1 + 4 < 1) goto LAB_080360da;
  }
  else {
    *(int *)(param_1 + 0x5c) = iVar1 + -4;
    if (-1 < iVar1 + -4) {
LAB_080360da:
      uVar2 = 0;
      goto LAB_080360dc;
    }
  }
  uVar2 = 1;
LAB_080360dc:
  return CONCAT44(in_lr,uVar2);
}

