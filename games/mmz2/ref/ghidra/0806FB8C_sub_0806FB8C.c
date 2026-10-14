// sub_0806FB8C at 0x0806FB8C (thumb)

undefined4 sub_0806FB8C(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1800);
    cVar2 = '\x01';
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      cVar2 = -1;
    }
    *(char *)(param_1 + 0xb7) = cVar2;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = (int)*(char *)(param_1 + 0xb7) << 7;
    *(undefined *)(param_1 + 0xb5) = 4;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x12),6);
  if (cVar2 == '\0') {
    pbVar5 = (byte *)(param_1 + 0xb6);
    bVar1 = *pbVar5;
    *pbVar5 = bVar1 + 1;
    if (2 < (byte)(bVar1 + 1)) {
      *pbVar5 = 0;
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_080ef792 + (uint)*pbVar5 * 2));
    if (*pbVar5 == 0) {
      local_1c = *(int *)(param_1 + 0x54) + *(char *)(param_1 + 0xb7) * 0x1200;
      local_18 = *(int *)(param_1 + 0x58) + -0x1600;
      sub_080AC60C(3,&local_1c);
    }
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar2 = sub_080708D0(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = 0x1400;
    }
    else {
      iVar4 = -0x1400;
    }
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) + iVar4;
    sVar3 = sub_08008CFC(iVar4,*(int *)(param_1 + 0x58) + -0x800);
    if (sVar3 == 0) {
      sVar3 = sub_08008CFC(iVar4,*(int *)(param_1 + 0x58) + 0x800);
      if (sVar3 == 0) {
        *(undefined *)(param_1 + 0xbd) = 1;
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        if ((*(int *)(param_1 + 100) - iVar4) + 0x3000U < 0x6001) {
          *(int *)(param_1 + 0x54) = iVar4;
        }
        else {
          sub_080705DC(param_1);
        }
      }
    }
    else {
      *(undefined *)(param_1 + 0xbd) = 1;
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

