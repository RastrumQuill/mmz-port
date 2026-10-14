// sub_080E8C88 at 0x080E8C88 (thumb)

undefined8 sub_080E8C88(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 2;
  pcVar1 = (char *)(*(int *)(param_1 + 0x10) + 0x20c);
  while (*pcVar1 == '\0') {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) goto LAB_080e8ccc;
    pcVar1 = (char *)(*(int *)(param_1 + 0x10) + 0x20a + iVar3);
  }
  if (iVar3 < 0) {
LAB_080e8ccc:
    *(undefined *)(param_1 + 1) = 0;
    sub_080032EC(4);
    uVar2 = 0;
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 5) = 0;
    sub_080DA938(param_1,3);
    sub_080032EC(1);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

