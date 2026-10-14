// sub_0804A070 at 0x0804A070 (thumb)

undefined4 sub_0804A070(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0800471C(0x5d);
    sub_08007390(param_1 + 0x74,&DAT_0835f10c);
    iVar4 = *(int *)(param_1 + 0xb4) + -0x1400;
    *(int *)(param_1 + 0x5c) = iVar4;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar4 = *(int *)(param_1 + 0xb4) + 0x1400;
    }
    iVar4 = iVar4 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar3 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x60) = iVar3;
    iVar4 = iVar4 >> 8;
    iVar3 = iVar3 >> 8;
    iVar4 = sub_080FE124(iVar4 * iVar4 + iVar3 * iVar3);
    uVar5 = (uint)(iVar4 << 0x10) >> 8;
    iVar4 = FUN_080fe2f8(*(int *)(param_1 + 0x5c) << 8,uVar5);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar3 = FUN_080fe2f8(*(int *)(param_1 + 0x60) << 8,uVar5);
    *(int *)(param_1 + 0x5c) = iVar4 << 3;
    *(int *)(param_1 + 0x60) = iVar3 << 3;
    *(char *)(param_1 + 0x12) = (char)((int)uVar5 >> 0xb);
    sub_08017700(param_1,0xa70b);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 0x18) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0;
    sub_08017700(param_1,0xa726);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar4;
      if (*(int *)(param_1 + 0xb8) < iVar4) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
        *(undefined *)(param_1 + 0x12) = 1;
      }
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_08007390(param_1 + 0x74,
                 &DAT_0835efa4 + (uint)(byte)"\'\'**--0369999"[*(char *)(param_1 + 0x71)] * 0x18);
    break;
  case 4:
    sub_08007390(param_1 + 0x74,&DAT_0835f04c);
    sub_08017700(param_1,0xa708);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      if (*(char *)(param_1 + 0xbf) == '\0') {
        uVar2 = 0xb;
      }
      else {
        uVar2 = 5;
      }
      *(undefined *)(param_1 + 0xd) = uVar2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

