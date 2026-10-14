// sub_080A5F78 at 0x080A5F78 (thumb)

undefined4 sub_080A5F78(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x13) == '\0') {
      sub_08005784(param_1 + 0x74,&DAT_0885ef58);
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x32;
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885f018 + (uint)*(byte *)(param_1 + 0x13) * 2));
    cVar1 = sub_080A6368(param_1);
    if (cVar1 == '\x02') {
      *(undefined *)(param_1 + 0x12) = 0x1e;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    sub_080A648C(param_1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = sub_080A6350(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    if ((*(char *)(param_1 + 0x10) == '\0') && (iVar2 + -0x1000 < DAT_0202cabc)) {
      iVar2 = *(int *)(param_1 + 0x60) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar2 >> 8;
    }
    piVar3 = (int *)(param_1 + 0xc0);
    if (*piVar3 < 0x140) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *piVar3 = *piVar3 + 0x20;
    }
  }
  else {
    if (*(char *)(param_1 + 0x13) == '\x02') {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0x13) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 3;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

