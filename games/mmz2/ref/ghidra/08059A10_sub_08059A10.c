// sub_08059A10 at 0x08059A10 (thumb)

undefined4 sub_08059A10(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_0202e130;
  bVar3 = *(byte *)(param_1 + 0xe);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 != 2) {
        return in_lr;
      }
      goto LAB_08059aca;
    }
    if (bVar3 != 0) {
      return in_lr;
    }
    DAT_0202ebbc = DAT_0202ebbc | 0x20;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar5 & 0x7fffffff;
    *(undefined *)(param_1 + 0x12) = (&DAT_0833cbfe)[uVar5 * 2 >> 0x11 & 0xf];
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08006E08(param_1 + 0x74,&DAT_0833c7f8);
  sub_080127E4(param_1,0xa71f);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08059aca:
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 == '\0') {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xc4) = 4;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x12;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

