// sub_08033AA8 at 0x08033AA8 (thumb)

undefined8 sub_08033AA8(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (param_1 != 0) {
    iVar3 = 4;
    piVar4 = &DAT_08335c60;
    do {
      iVar2 = 0;
      do {
        pcVar1 = (char *)(*piVar4 + iVar2);
        if (param_1 == *pcVar1) goto LAB_08033ae2;
        iVar2 = iVar2 + 1;
      } while (*pcVar1 != 0);
      piVar4 = piVar4 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = -1;
LAB_08033ae2:
  return CONCAT44(in_lr,iVar3);
}

