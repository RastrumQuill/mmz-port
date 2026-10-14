// sub_08085A8C at 0x08085A8C (thumb)

undefined4 sub_08085A8C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_0885b6d4);
    sub_0801CF00(param_1,0x1b04);
    bVar1 = 0 < *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\x1e') {
    uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_14 = uVar5 * 0xc00 + *(int *)(param_1 + 0x54) + -0x600;
    local_10 = *(int *)(param_1 + 0x58) + -0x200;
    sub_08002B10(0x2c);
    sub_080BD058(&local_14,0x200,uVar5 * 0x80);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  uVar4 = sub_08008AA4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x400);
  sub_080852A8(param_1,uVar4,0x800);
  sub_0801CFF0(param_1);
  return in_lr;
}

