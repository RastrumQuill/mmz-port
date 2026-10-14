// sub_08097B60 at 0x08097B60 (thumb)

undefined4 sub_08097B60(int param_1)

{
  short sVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08097D50(param_1);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xc0);
  if (*piVar3 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08097bc2:
      if (*piVar3 != 0) goto LAB_08097bc8;
    }
    else {
      iVar4 = sub_0802AD94(0,param_1,&DAT_0885d614);
      *piVar3 = iVar4;
      if (iVar4 != 0) {
        sub_08005784(param_1 + 0x74,&DAT_0885d5a8);
        goto LAB_08097bc2;
      }
    }
  }
  else {
LAB_08097bc8:
    iVar4 = sub_0802B3CC(*piVar3);
    if (iVar4 == 0) {
      sVar1 = CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
      sub_0801CFC8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
      sub_0801CFF0(param_1);
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_0885d590);
    *piVar3 = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar5 = *(char *)(param_1 + 0x12) + 2;
    *(byte *)(param_1 + 0x12) = bVar5;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb4) + (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 0x14;
    if (((bVar5 & 0x7f) != 0) ||
       (cVar2 = *(char *)(param_1 + 0x13) + '\x01', *(char *)(param_1 + 0x13) = cVar2,
       cVar2 != '\x02')) goto LAB_08097d3c;
    cVar2 = '\x01';
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    sub_08002B10(0x138);
    local_14 = *(int *)(param_1 + 0x54) + -0x900;
    local_10 = *(int *)(param_1 + 0x58) + 0x1500;
    sub_080C30AC(&local_14,0);
    local_14 = *(int *)(param_1 + 0x54) + 0x900;
    sub_080C30AC(&local_14,1);
    sub_0801CFC8(param_1,0x8601,(short)*(char *)(param_1 + 0x71),
                 CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)));
    *(undefined *)(param_1 + 0x13) = 0x40;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    cVar2 = *(char *)(param_1 + 0x13);
    if (((cVar2 == '>') || (cVar2 == ':')) || (cVar2 == '6')) {
      sub_0801CFC8(param_1,0x8600,(short)*(char *)(param_1 + 0x71),
                   CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)));
    }
    if ((*(char *)(param_1 + 0x13) == '<') || (*(char *)(param_1 + 0x13) == '8')) {
      sub_0801CFC8(param_1,0x8601,(short)*(char *)(param_1 + 0x71),
                   CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)));
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != -1) goto LAB_08097d3c;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_08097d3c:
  sub_0801CFF0(param_1);
  return in_lr;
}

