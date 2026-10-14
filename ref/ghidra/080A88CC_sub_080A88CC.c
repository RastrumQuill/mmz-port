// sub_080A88CC at 0x080A88CC (thumb)

undefined4 sub_080A88CC(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0x1f;
  }
  sub_0809C980(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
  cVar2 = *(char *)(param_1 + 0xf);
  if (cVar2 == '\x05') {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x1f;
    *(int *)(param_1 + 0x58) = -iVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0xffffff80;
    }
    else {
      uVar4 = 0x80;
    }
  }
  else {
    if (cVar2 == '\v') {
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 - 1;
      if (0x1b < bVar1) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0xe) = 1;
      return in_lr;
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x1f;
    *(int *)(param_1 + 0x58) = -iVar5;
    if (cVar2 != '\x04') goto LAB_080a897c;
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar4;
LAB_080a897c:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

