// sub_08031B90 at 0x08031B90 (thumb)

undefined4 sub_08031B90(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
    if (iVar4 < 1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar4 = *(int *)(param_1 + 0x58) + 0x40;
        *(int *)(param_1 + 0x58) = iVar4;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
        iVar4 = sub_08008360();
        if (*(int *)(param_1 + 0x50) <= iVar4) {
          return in_lr;
        }
        uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c));
        *(undefined4 *)(param_1 + 0x50) = uVar3;
        sub_08029778(param_1,1);
        sub_080297C0(param_1);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        *(undefined *)(param_1 + 0x12) = 8;
        return in_lr;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      sub_08029778(param_1,0);
      sub_080297C0(param_1);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08029778(param_1,3);
    sub_080297C0(param_1);
    *(undefined4 *)(param_1 + 0x54) = 0xffffff40;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

