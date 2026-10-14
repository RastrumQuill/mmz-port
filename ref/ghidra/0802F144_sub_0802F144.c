// sub_0802F144 at 0x0802F144 (thumb)

undefined4 sub_0802F144(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad144);
    sub_080785C8(*(undefined4 *)(param_1 + 0x24),2);
    sub_08029778(param_1,9);
    uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar6 & 0x7fffffff;
    uVar6 = uVar6 * 2 >> 0x11 & 0x1f;
    if (uVar6 < 10) {
      uVar2 = 3;
    }
    else if (uVar6 < 0x16) {
      uVar2 = 4;
    }
    else {
      uVar2 = 5;
    }
    *(undefined *)(param_1 + 0x12) = uVar2;
    *(undefined *)(param_1 + 0x13) = 0x28;
    bVar1 = 0 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    uVar6 = (uint)bVar1;
    *(bool *)(param_1 + 0x44) = bVar1;
    if (uVar6 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(uint *)(param_1 + 0x5c) = uVar6 * 0x20 + -0x10;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    uVar5 = sub_08001EAC(0x87);
    *(undefined2 *)(param_1 + 0xd4) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar7 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar7;
    iVar8 = iVar7;
    if (iVar7 < 0) {
      iVar8 = -iVar7;
    }
    if (iVar8 < 0x300) {
      *(int *)(param_1 + 0x54) = iVar7 + *(int *)(param_1 + 0x5c);
    }
  }
  else {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  uVar6 = sub_0802E674(param_1);
  if ((uVar6 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((uVar6 & 2) != 0) {
    bVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar3;
    if (bVar3 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    iVar8 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = -iVar8;
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 == '\0') {
      *(int *)(param_1 + 0x5c) = iVar8;
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  sub_080297C0(param_1);
  return in_lr;
}

