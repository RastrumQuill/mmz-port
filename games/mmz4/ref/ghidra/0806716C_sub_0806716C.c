// sub_0806716C at 0x0806716C (thumb)

undefined4 sub_0806716C(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa902);
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
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\x04' < *(char *)(param_1 + 0x71)) {
      if (*(char *)(param_1 + 0xda) == '\0') {
        iVar4 = *(int *)(param_1 + 0x54);
        iVar3 = *(int *)(DAT_0202dbf0 + 0x54);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x54);
        if (iVar4 < *(int *)(param_1 + 0xc4)) {
          iVar4 = iVar4 + 0x2800;
          iVar3 = *(int *)(param_1 + 0xc0);
        }
        else {
          iVar4 = iVar4 + -0x2800;
          iVar3 = *(int *)(param_1 + 0xbc);
        }
      }
      *(int *)(param_1 + 0x5c) = iVar3 - iVar4;
      iVar4 = *(int *)(param_1 + 0x5c) >> 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0x1f;
      }
      *(int *)(param_1 + 0x5c) = iVar4 >> 5;
      *(undefined4 *)(param_1 + 0x60) = 0xfffff800;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    if ((*(char *)(param_1 + 0xf) == '\x01') && ('\x05' < *(char *)(param_1 + 0x71))) {
      sub_08005784(param_1 + 0x74,&DAT_08857d08);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(int *)(param_1 + 0xb8) < iVar4) {
      sub_08002B10(0x5f);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

