// sub_080A199C at 0x080A199C (thumb)

undefined4 sub_080A199C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined4 *)(param_1 + 100) = 0;
      if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 0x10) == 0) {
        uVar2 = 0xffffffee;
      }
      else {
        uVar2 = 0x12;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar2;
      *(undefined *)(param_1 + 0x12) = 200;
      sub_08017700(param_1,0xa900);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = iVar3;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = -iVar3;
    }
    if (0x300 < iVar4) {
      *(int *)(param_1 + 100) = iVar3 - *(int *)(param_1 + 0x5c);
    }
    iVar4 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(param_1 + 0x54) + iVar4;
    *(int *)(param_1 + 0x54) = iVar3;
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
      if (iVar4 < 1) {
        iVar4 = sub_08009F80(iVar3,*(undefined4 *)(param_1 + 0x58));
      }
      else {
        iVar4 = sub_08009E14(iVar3,*(undefined4 *)(param_1 + 0x58));
      }
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      }
    }
    else {
      if (iVar4 < 1) {
        iVar4 = sub_08009F80(iVar3,*(undefined4 *)(param_1 + 0x58));
      }
      else {
        iVar4 = sub_08009E14(iVar3,*(undefined4 *)(param_1 + 0x58));
      }
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
      }
    }
    sub_080177F4(param_1);
  }
  return in_lr;
}

