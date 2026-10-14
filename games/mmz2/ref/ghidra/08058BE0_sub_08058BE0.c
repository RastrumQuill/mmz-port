// sub_08058BE0 at 0x08058BE0 (thumb)

undefined4 sub_08058BE0(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = DAT_0202e130;
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
      bVar1 = 0 < *(int *)(iVar3 + 0x54) - *(int *)(param_1 + 0x54);
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      iVar3 = *(int *)(param_1 + 0x60) + -0x10;
      *(int *)(param_1 + 0x60) = iVar3;
      if (iVar3 == 0) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sub_080128D4(param_1);
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xa700);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar3 = DAT_0202e130;
  *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
  bVar1 = 0 < *(int *)(iVar3 + 0x54) - *(int *)(param_1 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar3 = *(int *)(param_1 + 0x60) + 0x10;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x100 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x100;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar3 = sub_08008DE8(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x1000);
  if (iVar3 < 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  return in_lr;
}

