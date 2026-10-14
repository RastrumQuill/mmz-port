// sub_0809EBC0 at 0x0809EBC0 (thumb)

undefined4 sub_0809EBC0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
      uVar4 = bVar1 & 1;
      if ((bVar1 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      iVar3 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
      if (*(char *)(iVar3 + 0xd) == '\t') {
        return in_lr;
      }
      cVar2 = '\0';
      goto LAB_0809ecb4;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_083676a8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
  if (*(char *)(iVar3 + 0xd) != '\t') {
    return in_lr;
  }
  sub_08007390(param_1 + 0x74,&DAT_08367690);
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0809ecb4:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}

