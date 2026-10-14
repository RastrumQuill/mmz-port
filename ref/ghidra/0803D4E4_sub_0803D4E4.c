// sub_0803D4E4 at 0x0803D4E4 (thumb)

undefined4 sub_0803D4E4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x11);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 4;
  }
  sub_080297C0(param_1);
  piVar3 = (int *)(param_1 + 0xe0);
  iVar2 = sub_08015D94(*piVar3);
  if (iVar2 != 0) {
    *piVar3 = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar2 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0xce);
    *(int *)(param_1 + 0x54) = iVar2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if (*piVar3 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

