// sub_080A511C at 0x080A511C (thumb)

undefined4 sub_080A511C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 0;
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      bVar1 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar1;
      if (0x13 < bVar1) {
        *(undefined *)(param_1 + 0xd) = 6;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      if (*(byte *)(param_1 + 0x13) < 0x11) {
        cVar2 = *(byte *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
      }
      else {
        cVar2 = *(char *)(param_1 + 0x12) + '\x10';
      }
      *(char *)(param_1 + 0x12) = cVar2;
      *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x12);
      sub_080177F4(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_08368298);
    *(undefined *)(param_1 + 0x25) = 0x17;
    sub_08017528(param_1);
    bVar1 = *(byte *)(iVar5 + 10) >> 4;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    sub_08017700(param_1,0x4901);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x54);
  iVar6 = *(int *)(iVar5 + 0x58);
  iVar7 = *(int *)(param_1 + 0x58);
  iVar5 = FUN_080fe2f8(*(int *)(iVar5 + 0x54) - iVar4,6);
  *(int *)(param_1 + 0x54) = iVar4 + iVar5;
  iVar5 = FUN_080fe2f8(iVar6 - iVar7,6);
  *(int *)(param_1 + 0x58) = iVar7 + iVar5;
  sub_080177F4(param_1);
  return in_lr;
}

