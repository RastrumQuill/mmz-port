// sub_080B11CC at 0x080B11CC (thumb)

undefined4 sub_080B11CC(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = DAT_0202286c;
  sub_0809C980();
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\a') {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
      *(bool *)(param_1 + 0x44) = bVar1;
      if (bVar1) {
        bVar3 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar3;
    }
  }
  else {
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    if (*(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c) + -0x3000) {
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) && (DAT_02022874 != '\0')) {
      sub_080BC808(*(undefined2 *)(param_1 + 0xc4));
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (DAT_0202365a == 0) {
    DAT_02022874 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  if (((*(byte *)(iVar2 + 0x128) & 1) != 0) && (*(char *)(param_1 + 0x12) == '\0')) {
    iVar5 = *(int *)(iVar2 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x4c);
    iVar6 = iVar5 - iVar4;
    if (iVar6 < 0) {
      iVar6 = iVar4 - iVar5;
    }
    if ((iVar6 < 0x2401) && (*(int *)(iVar2 + 0x50) <= *(int *)(param_1 + 0x50) + 0x3000)) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = iVar4 + -0x2400;
        if (iVar5 <= iVar4) {
          return in_lr;
        }
      }
      else {
        iVar4 = iVar4 + 0x2400;
        if (iVar4 <= iVar5) {
          return in_lr;
        }
      }
      *(int *)(iVar2 + 0x4c) = iVar4;
    }
  }
  return in_lr;
}

