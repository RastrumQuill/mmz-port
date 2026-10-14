// sub_08059D68 at 0x08059D68 (thumb)

undefined4 sub_08059D68(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_080B5C58(param_1);
        *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xfffffffd | 0x44;
        sub_08006E08(param_1 + 0x74,&DAT_0833ca08);
        *(undefined *)(param_1 + 0x12) = 0x3c;
        sub_080127E4(param_1,0xa721);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 2;
        *(undefined *)(param_1 + 0xd) = 0x16;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar4 = *(int *)(DAT_0202e130 + 0x54);
    iVar3 = iVar4 + -0x3f00;
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = iVar4 + 0x3f00;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    iVar4 = *(int *)(param_1 + 0xc0) + -0xc000;
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x54) = iVar4;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc0) + 0xc000;
      if (iVar4 < iVar3) {
        *(int *)(param_1 + 0x54) = iVar4;
      }
    }
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xd0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08006E08(param_1 + 0x74,&DAT_0833c7f8);
    sub_080127E4(param_1,0xa720);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08057AB0(param_1);
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

