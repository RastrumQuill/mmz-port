// sub_080D57CC at 0x080D57CC (thumb)

undefined8 sub_080D57CC(int param_1,uint param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 - 1 < 0x51) {
    iVar1 = 3;
    do {
      iVar1 = iVar1 + -1;
      if (*(byte *)(param_1 + 0x20a + iVar1) == param_2) {
        iVar1 = iVar1 * 0x1000000 >> 0x18;
        goto LAB_080d57f8;
      }
    } while (iVar1 != 0);
  }
  iVar1 = -1;
LAB_080d57f8:
  return CONCAT44(in_lr,iVar1);
}

