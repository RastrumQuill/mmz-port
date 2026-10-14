// sub_080C3560 at 0x080C3560 (thumb)

undefined8 sub_080C3560(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 2;
  pcVar1 = (char *)(*(int *)(param_1 + 0x10) + 0x182);
  while (*pcVar1 == '\0') {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) goto LAB_080c35a0;
    pcVar1 = (char *)(*(int *)(param_1 + 0x10) + 0x180 + iVar3);
  }
  if (iVar3 < 0) {
LAB_080c35a0:
    *(undefined *)(param_1 + 1) = 0;
    sub_08001EAC(0xc1);
    uVar2 = 0;
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 5) = 0;
    sub_080B98D0(param_1,3);
    sub_08001EAC(0x29);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

