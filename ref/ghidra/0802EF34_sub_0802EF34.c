// sub_0802EF34 at 0x0802EF34 (thumb)

undefined4 sub_0802EF34(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  piVar4 = (int *)(param_1 + 0xd0);
  iVar3 = *piVar4;
  *piVar4 = iVar3 + 1;
  if (iVar3 + 1 == 1) {
    sub_080785C8(*(undefined4 *)(param_1 + 0x24),6);
  }
  if (*piVar4 == 7) {
    sub_08001EAC(0x88);
    sub_080785C8(*(undefined4 *)(param_1 + 0x24),7);
    sub_0800561C(param_1 + 0x74,&DAT_082ad160);
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    bVar1 = sub_0802E674(param_1);
    *(byte *)(param_1 + 0x13) = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      sub_08029778(param_1,0);
      sub_0800561C(param_1 + 0x74,&DAT_082ad128);
      sub_080785C8(*(undefined4 *)(param_1 + 0x24),3);
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  sub_080297C0(param_1);
  return in_lr;
}

