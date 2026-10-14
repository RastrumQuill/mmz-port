// sub_08089310 at 0x08089310 (thumb)

undefined4 sub_08089310(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xc0) + 0x1f02);
    sub_08005784(param_1 + 0x74,
                 &DAT_0885bc08 + (uint)(byte)(&DAT_0885bd72)[*(byte *)(param_1 + 0xc0)] * 0x18);
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = bVar1 >> 4 & 1;
    if ((bVar1 >> 4 & 1) == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
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
      pbVar4 = (byte *)(param_1 + 0xc0);
      if (bVar1 == 2) {
        sub_0801CF00(param_1,*(short *)(&DAT_08129424 + (uint)*(byte *)(param_1 + 0x13) * 2) +
                             (ushort)*pbVar4);
      }
      if (*(char *)(param_1 + 0x13) == '\x01') {
        sub_08005784(param_1 + 0x74,&DAT_0885bc08 + (uint)(byte)(&DAT_0885bd72)[*pbVar4] * 0x18);
      }
      else {
        sub_08005784(param_1 + 0x74,&DAT_0885bc08 + (uint)(byte)(&DAT_0885bd70)[*pbVar4] * 0x18);
      }
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if (*(char *)(param_1 + 0x13) == '\x01') {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = bVar1 >> 4 & 1 ^ 1;
      if (uVar3 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    }
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

