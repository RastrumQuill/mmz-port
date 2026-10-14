// sub_080D6580 at 0x080D6580 (thumb)

undefined8 sub_080D6580(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (param_1 != 0) {
    iVar3 = 0;
    do {
      pcVar1 = &DAT_0834aff8 + iVar3;
      if (*(char *)(param_1 + 9) == *pcVar1) {
        uVar2 = 1;
        goto LAB_080d65a4;
      }
      iVar3 = iVar3 + 1;
    } while (*pcVar1 != '\0');
  }
  uVar2 = 0;
LAB_080d65a4:
  return CONCAT44(in_lr,uVar2);
}

