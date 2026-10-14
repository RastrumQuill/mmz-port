// sub_08059F74 at 0x08059F74 (thumb)

undefined4 sub_08059F74(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080127E4(param_1,0xa724);
    pbVar4 = (byte *)(param_1 + 0xd4);
    *(byte *)(param_1 + 0x4c) = *pbVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar4 & 1) << 4);
    if ((*pbVar4 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_08006E08(param_1 + 0x74,&DAT_0833c7c8);
    if (*(char *)(param_1 + 0xd5) == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0x300;
      *(uint *)(param_1 + 0x5c) = (uint)*pbVar4 * -0x600 + 0x300;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x300;
      *(uint *)(param_1 + 0x5c) = (uint)*pbVar4 * -0x600 + 0x300;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffb00;
    }
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0xd5) == '\0') {
    iVar2 = *(int *)(param_1 + 0x5c) * 0xe8;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    uVar3 = (uint)bVar1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    uVar3 = *(uint *)(param_1 + 0x2c);
  }
  if (uVar3 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc4) = 4;
  }
  sub_080128D4(param_1);
  return in_lr;
}

