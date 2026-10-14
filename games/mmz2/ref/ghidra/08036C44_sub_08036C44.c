// sub_08036C44 at 0x08036C44 (thumb)

undefined8 sub_08036C44(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  do {
    pcVar1 = &DAT_08334794 + iVar3;
    if (param_1 == *pcVar1) {
      uVar2 = 1;
      goto LAB_08036c6a;
    }
    iVar3 = iVar3 + 1;
  } while (0 < *pcVar1);
  uVar2 = 0;
LAB_08036c6a:
  return CONCAT44(in_lr,uVar2);
}

