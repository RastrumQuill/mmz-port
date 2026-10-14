// sub_08035A9C at 0x08035A9C (thumb)

undefined8 sub_08035A9C(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (param_1 != 0) {
    iVar3 = 4;
    piVar4 = &DAT_08335c34;
    do {
      iVar2 = 0;
      do {
        pcVar1 = (char *)(*piVar4 + iVar2);
        if (param_1 == *pcVar1) goto LAB_08035ad4;
        iVar2 = iVar2 + 1;
      } while (*pcVar1 != 0);
      piVar4 = piVar4 + -1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
LAB_08035ad4:
  return CONCAT44(in_lr,iVar3);
}

