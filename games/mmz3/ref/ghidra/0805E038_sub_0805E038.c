// sub_0805E038 at 0x0805E038 (thumb)

undefined4 sub_0805E038(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_0836190c);
        sub_080ADD30(param_1,4);
        sub_0800471C(0xef);
        iVar4 = *(int *)(param_1 + 0xbc);
        if (iVar4 != 0) {
          *(undefined *)(iVar4 + 0x11) = 1;
          *(int *)(param_1 + 0xbc) = 0;
        }
        sub_08017700(param_1,0x1200);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0836193c);
    sub_0800471C(0xe9);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffc80;
    uVar3 = 0xfffffc80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar3 = 0x380;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    sub_08017700(param_1,0x300);
    sub_080B322C(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    uVar3 = sub_080B3C5C(param_1);
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x1c;
    *(undefined *)(param_1 + 0x13) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0x13) = 3;
    sub_080B322C(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  sub_0805D670(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') ||
     ((*(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x1800U < 0x3000)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

