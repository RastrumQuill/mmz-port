// sub_0807573C at 0x0807573C (thumb)

undefined4 sub_0807573C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf03);
    sub_08002B10(0xd6);
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
    sub_08005784(param_1 + 0x74,&DAT_08859928);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0x72) < '\x02') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_08859bb0 + *(char *)(param_1 + 0x71) * 4);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_08859bb0 + *(char *)(param_1 + 0x71) * 4);
    }
    *(int *)(param_1 + 0x54) = iVar4;
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0xf) != '\0')) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x8c) & 8) != 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(param_1 + 0x54);
        iVar6 = 0x100;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x54);
        iVar6 = -0x100;
      }
      *(int *)(param_1 + 0x54) = iVar4 + iVar6;
      if (*(char *)(param_1 + 0x13) == '\0') {
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        if ((uVar5 * 2 >> 0x11 & 1) != 0) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
      }
      else {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

