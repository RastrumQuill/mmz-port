// sub_080AB4E0 at 0x080AB4E0 (thumb)

undefined4 sub_080AB4E0(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar4 = *(int *)(param_1 + 0x5c) + 0x10;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (0x280 < iVar4) {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
    }
    if (1 < *(byte *)(iVar5 + 0xc)) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) < 2) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x10 < bVar1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar5;
  sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

