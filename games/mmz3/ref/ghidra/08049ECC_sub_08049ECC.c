// sub_08049ECC at 0x08049ECC (thumb)

undefined4 sub_08049ECC(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        sub_08007390(param_1 + 0x74,&DAT_0835f2ec);
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        uVar5 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
        if (uVar5 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xb4)) {
          iVar3 = -0x5400;
        }
        else {
          iVar3 = 0x5400;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + iVar3;
        sub_08017700(param_1,0xa70c);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f0c4);
    *(undefined *)(param_1 + 0xbf) = 0;
    piVar7 = (int *)(param_1 + 0xb4);
    if (*(int *)(param_1 + 0x54) < *piVar7) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      iVar3 = *piVar7;
      iVar6 = 0x5400;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      iVar3 = *piVar7;
      iVar6 = -0x5400;
    }
    *(int *)(param_1 + 100) = iVar3 + iVar6;
    cVar1 = sub_080FE124(0x851);
    *(char *)(param_1 + 0x12) = cVar1 + '\x10';
    uVar4 = FUN_080fe2f8((iVar3 + iVar6) - *(int *)(param_1 + 0x54),*(undefined *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    uVar5 = sub_080FE124(0x851);
    *(uint *)(param_1 + 0x60) = (uVar5 & 0xffff) * -0x19;
    sub_08017700(param_1,0xa70a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x19;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

