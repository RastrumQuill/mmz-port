// sub_080760D4 at 0x080760D4 (thumb)

undefined4 sub_080760D4(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x500 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x500;
  }
  iVar4 = DAT_0202dbf0;
  cVar2 = *(char *)(param_1 + 0xf);
  if (cVar2 == '\0') {
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8) + 0x1400) {
      return in_lr;
    }
    sub_08002B10(0xde);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x1400;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
  }
  else if (cVar2 == '\x01') {
    if (*(int *)(param_1 + 0x60) < 1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0xaf0a);
    sub_0801CFF0(param_1);
  }
  else {
    if (cVar2 != '\x02') {
      if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8)) {
        return in_lr;
      }
      sub_08002B10(0xde);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined *)(param_1 + 0xd) = 0x12;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (*(char *)(param_1 + 0x71) < '\x01') {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_08859970);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

