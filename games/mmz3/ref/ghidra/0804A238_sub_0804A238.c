// sub_0804A238 at 0x0804A238 (thumb)

undefined4 sub_0804A238(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
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
        iVar3 = *(int *)(param_1 + 0xb4);
        if (*(int *)(param_1 + 0x54) < iVar3) {
          iVar3 = iVar3 + -0x5400;
        }
        else {
          iVar3 = iVar3 + 0x5400;
        }
        *(int *)(param_1 + 0x54) = iVar3;
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
      *(undefined *)(param_1 + 0xbf) = 1;
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f0c4);
    iVar3 = *(int *)(param_1 + 0xb4) + -0x5400;
    *(int *)(param_1 + 0x5c) = iVar3;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = *(int *)(param_1 + 0xb4) + 0x5400;
    }
    iVar3 = iVar3 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar4 = (*(int *)(param_1 + 0xb8) + -0x6800) - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar4;
    iVar3 = iVar3 >> 8;
    iVar4 = iVar4 >> 8;
    iVar3 = sub_080FE124(iVar3 * iVar3 + iVar4 * iVar4);
    uVar5 = (uint)(iVar3 << 0x10) >> 8;
    iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar5);
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar5);
    *(int *)(param_1 + 0x5c) = iVar3 << 3;
    *(int *)(param_1 + 0x60) = iVar4 << 3;
    *(char *)(param_1 + 0x12) = (char)((int)uVar5 >> 0xb);
    sub_08017700(param_1,0xa70a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

