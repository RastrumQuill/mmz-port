// sub_08035B24 at 0x08035B24 (thumb)

undefined8 sub_08035B24(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((param_4 != 0) && (param_3 != 0)) {
    iVar3 = 0;
    do {
      pcVar1 = (char *)(**(int **)(&DAT_08335c00 + (param_2 + -1) * 4) + iVar3);
      if (param_3 == *pcVar1) {
        uVar2 = 1;
        goto LAB_08035b5a;
      }
      iVar3 = iVar3 + 1;
    } while (*pcVar1 != 0);
  }
  uVar2 = 0;
LAB_08035b5a:
  return CONCAT44(in_lr,uVar2);
}

