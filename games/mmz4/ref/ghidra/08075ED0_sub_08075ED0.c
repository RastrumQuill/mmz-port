// sub_08075ED0 at 0x08075ED0 (thumb)

undefined4 sub_08075ED0(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf09);
    sub_08005784(param_1 + 0x74,&DAT_088599d0);
    bVar2 = *(byte *)(param_1 + 0xda) + 1 & 1;
    *(byte *)(param_1 + 0xda) = bVar2;
    if (bVar2 == 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
      *(undefined *)(param_1 + 0xd) = 0x11;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(int *)(param_1 + 0xcc) < *(int *)(DAT_0202dbf0 + 0x54)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 200) + -0x5000;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc4) + 0x5000;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x4000;
    *(undefined4 *)(param_1 + 0x60) = 0;
    bVar2 = 0;
    do {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
      bVar2 = bVar2 + 1;
    } while (bVar2 < 0x30);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined *)(param_1 + 0x13) = 0x30;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar5 = *(int *)(param_1 + 0xd0);
    iVar4 = sub_08128A9C(iVar5,6);
    *(int *)(param_1 + 0xd0) = iVar5 + 1;
    if (iVar4 == 0) {
      local_1c = *(int *)(param_1 + 0x54) + 0xe24;
      local_18 = *(int *)(param_1 + 0x58) + -0x18dc;
      sub_080CBBF0(param_1,&local_1c,2,'0' - *(char *)(param_1 + 0x13));
      local_1c = *(int *)(param_1 + 0x54) + -0xe24;
      local_18 = *(int *)(param_1 + 0x58) + -0x18dc;
      sub_080CBBF0(param_1,&local_1c,2,*(char *)(param_1 + 0x13) + 'P');
    }
  }
  iVar4 = DAT_0202dbf0;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + -0x20;
    *(int *)(param_1 + 0x60) = iVar4;
    if (iVar4 < 1) {
      if (*(char *)(param_1 + 0xda) != '\0') {
        sub_08002B10(0xda);
      }
      *(undefined *)(param_1 + 0x12) = 0x20;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if ((cVar3 == -1) && (*(char *)(param_1 + 0xda) != '\0')) {
      *(undefined *)(param_1 + 0xd) = 0x13;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

