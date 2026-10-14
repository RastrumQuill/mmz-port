// sub_080AF90C at 0x080AF90C (thumb)

undefined4 sub_080AF90C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xb7) | 0xa600);
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xd) = 0;
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = 0x3c;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar3 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    iVar4 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = -iVar3;
    }
    if (0x4c < iVar2) {
      *(int *)(param_1 + 0x5c) = iVar3 + *(int *)(param_1 + 100);
    }
    if (iVar4 < 0x80) {
      *(int *)(param_1 + 0x60) = iVar4 + *(int *)(param_1 + 0x68);
    }
    cVar1 = sub_080AFF5C(param_1);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x13) == '\0') {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        sub_080AFC4C(param_1);
      }
    }
  }
  return in_lr;
}

