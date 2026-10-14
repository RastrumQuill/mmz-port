// sub_08035B60 at 0x08035B60 (thumb)

undefined8 sub_08035B60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar1 = sub_08035BD8(param_3);
  uVar5 = (uint)*(char *)(param_1 + 0x71);
  if (*(char *)(param_1 + 0x72) < '\x02') {
    uVar5 = uVar5 + 1;
  }
  iVar6 = 1;
  if ((int)*(char *)(iVar1 + 5) + 1U <= uVar5) {
    iVar6 = 2;
  }
  if ((uint)(int)*(char *)(iVar1 + 6) <= uVar5) {
    iVar6 = iVar6 + 1;
  }
  piVar2 = *(int **)(&DAT_08335c00 + (param_3 + -1) * 4);
  do {
    piVar2 = piVar2 + 1;
    iVar1 = 0;
    do {
      pcVar3 = (char *)(*piVar2 + iVar1);
      if (param_2 == *pcVar3) {
        uVar4 = 1;
        goto LAB_08035bd2;
      }
      iVar1 = iVar1 + 1;
    } while (*pcVar3 != 0);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar4 = 0;
LAB_08035bd2:
  return CONCAT44(in_lr,uVar4);
}

