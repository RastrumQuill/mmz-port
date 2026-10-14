// sub_08051098 at 0x08051098 (thumb)

undefined4 sub_08051098(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined uVar5;
  short sVar6;
  short *psVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xf) = 0;
    if ((((DAT_0202cac0 & 0x10) != 0) && ((DAT_0202e8b4 & 4) == 0)) || (DAT_0202e910 == 0x10)) {
      psVar7 = (short *)(param_1 + 0xa4);
      if ((*psVar7 != 0) && (*psVar7 < 0x40)) {
        sub_0801CF00(param_1,0xa102);
        if (*psVar7 + 3 < 0x41) {
          sVar6 = *psVar7 + 3;
        }
        else {
          sVar6 = 0x40;
        }
        *psVar7 = sVar6;
        sub_08002B10(0xf4);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
    }
    if (*(char *)(param_1 + 0xf) == '\0') {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5ee8) {
        sub_0801CF00(param_1);
      }
      sub_08005784(param_1 + 0x74,&DAT_08854918);
    }
    else {
      sub_08005784(param_1 + 0x74,&DAT_08854b70);
    }
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar5 = 0x18;
      }
      else {
        uVar5 = 0x20;
      }
    }
    else {
      uVar5 = 0x30;
    }
    *(undefined *)(param_1 + 0x12) = uVar5;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = DAT_0202dbf0;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  if (*(char *)(param_1 + 0xf) != '\0') {
    cVar4 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar4 + '\x01';
    cVar4 = sub_08128A9C(cVar4,6);
    if (cVar4 == '\0') {
      uVar5 = sub_08128A24(*(undefined *)(param_1 + 0x13),6);
      sub_080DC924(param_1,4,uVar5);
    }
  }
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    sub_08005784(param_1 + 0x74,&DAT_08854918);
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

