// sub_080AFE70 at 0x080AFE70 (thumb)

undefined8 sub_080AFE70(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  iVar3 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54) >> 8;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 200) {
    iVar3 = *(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58) >> 8;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (0x77 < iVar3) goto LAB_080aff4a;
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
      *(byte *)(param_1 + 10) = bVar1 | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = bVar1 & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    bVar2 = *(byte *)(param_1 + 10) >> 4;
    uVar6 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2c);
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(char *)(*(int *)(param_1 + 0x2c) + 0x4c) = (char)uVar6;
    pbVar5 = (byte *)(*(int *)(param_1 + 0x2c) + 0x4a);
    *pbVar5 = *pbVar5 & 0xef | (byte)(uVar6 << 4);
    *(undefined *)(param_1 + 0xb6) = 1;
    if ((bVar1 >> 4 & 1) != (*(byte *)(param_1 + 10) >> 4 & 1)) {
      uVar4 = 1;
      goto LAB_080aff54;
    }
  }
  else {
LAB_080aff4a:
    *(undefined *)(param_1 + 0xb6) = 0;
  }
  uVar4 = 0;
LAB_080aff54:
  return CONCAT44(in_lr,uVar4);
}

