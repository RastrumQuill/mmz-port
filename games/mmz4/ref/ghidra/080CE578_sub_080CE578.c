// sub_080CE578 at 0x080CE578 (thumb)

undefined4 sub_080CE578(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 8) == '\x01') &&
     ((*(uint *)(iVar5 + 0x8c) & 0x100) != 0)) {
    *(undefined4 *)(iVar5 + 0x5c) = 0x200;
    *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) | 0x10;
    *(undefined *)(iVar5 + 0x4c) = 1;
    pbVar3 = (byte *)(iVar5 + 0x4a);
    *pbVar3 = *pbVar3 & 0xef | 0x10;
    if (*(int *)(iVar5 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
      iVar2 = *(int *)(iVar5 + 0x5c) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(iVar5 + 0x5c) = iVar2 >> 8;
      bVar1 = *(byte *)(iVar5 + 10);
      uVar4 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar4 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(iVar5 + 10) = bVar1;
      *(undefined *)(iVar5 + 0x4c) = (char)uVar4;
      *pbVar3 = *pbVar3 & 0xef | (byte)(uVar4 << 4);
    }
    if (*(char *)(iVar5 + 0xb9) == '\x01') {
      *(undefined4 *)(iVar5 + 0x60) = 0xfffffe96;
      *(char *)(iVar5 + 0xb9) = '\0';
    }
    sub_08002B10(0x16c);
    *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + *(int *)(iVar5 + 0x5c);
    *(undefined *)(iVar5 + 0xba) = 1;
    *(undefined *)(iVar5 + 0x12) = 0x14;
  }
  return in_lr;
}

