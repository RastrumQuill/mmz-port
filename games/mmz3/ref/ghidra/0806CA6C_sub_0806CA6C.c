// sub_0806CA6C at 0x0806CA6C (thumb)

undefined4 sub_0806CA6C(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x1902);
    sub_08007390(param_1 + 0x74,&DAT_08362dd0);
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar4 = *(byte *)(param_1 + 0xbc) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if (bVar1 < 3) {
      *(undefined *)(param_1 + 0x12) = 8;
      if (bVar1 == 2) {
        sub_08017700(param_1,*(undefined2 *)(&DAT_080febdc + (uint)*(byte *)(param_1 + 0x13) * 2));
      }
      if (*(char *)(param_1 + 0x13) == '\x01') {
        sub_08007390(param_1 + 0x74,&DAT_08362dd0);
      }
      else {
        sub_08007390(param_1 + 0x74,&DAT_08362d58);
      }
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x13) == '\x01') {
      pbVar3 = (byte *)(param_1 + 0xbc);
      *pbVar3 = *pbVar3 ^ 1;
      if (*pbVar3 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      uVar4 = *pbVar3 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    }
  }
  sub_080177F4(param_1);
  return in_lr;
}

