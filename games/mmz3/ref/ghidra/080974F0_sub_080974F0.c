// sub_080974F0 at 0x080974F0 (thumb)

undefined4 sub_080974F0(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xdc01);
    *(undefined *)(param_1 + 0x12) = 0x15;
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
    uVar5 = 0xfffffe00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar5 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    uVar5 = 0xfffffc00;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar5 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    uVar3 = sub_08096D00(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
    if ((uVar3 & 2) != 0) {
      bVar2 = *(byte *)(param_1 + 10);
      uVar3 = ~(uint)(bVar2 >> 4) & 1;
      if (uVar3 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    iVar4 = *(int *)(param_1 + 0xc0) + -1;
    *(int *)(param_1 + 0xc0) = iVar4;
    if (iVar4 < 10) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      sub_08007390(param_1 + 0x74,&DAT_08366a80);
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

