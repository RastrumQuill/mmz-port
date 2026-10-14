// sub_08052D08 at 0x08052D08 (thumb)

undefined4 sub_08052D08(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xa10a);
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = 0x1000;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x58);
      iVar4 = 0x1c00;
    }
    *(int *)(param_1 + 0x58) = iVar3 + iVar4;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    *(undefined *)(param_1 + 0x4d) = 0;
    pbVar5 = (byte *)(param_1 + 0x4a);
    *pbVar5 = *pbVar5 & 0xdf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(int *)(param_1 + 0x5c) = -(*(int *)(param_1 + 0x5c) >> 1);
    sub_0801FE64(4,param_1 + 0x54);
    iVar3 = DAT_0202dbf0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    *pbVar5 = *pbVar5 & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080C1744(param_1 + 0x54);
    sub_08002B10(0x38);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x1c;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

