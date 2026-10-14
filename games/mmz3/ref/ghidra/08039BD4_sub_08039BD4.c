// sub_08039BD4 at 0x08039BD4 (thumb)

undefined4 sub_08039BD4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar3 = *(int *)(iVar1 + 0xb4);
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    if (DAT_02030180 != -1) {
      DAT_02030180 = DAT_02030180 + 1;
    }
    if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
      if ((byte)(*(char *)(iVar1 + 0x10) - 0xbU) < 10) {
        iVar1 = *(int *)(param_1 + 0x2c);
        sub_0803C700(*(undefined4 *)(iVar1 + 0xb4),(&DAT_0835cc1d)[*(byte *)(iVar1 + 0x10)]);
      }
      if ((*(char *)(iVar1 + 0x10) == '\r') && (*(int *)(iVar1 + 0x58) < *(int *)(iVar2 + 0x58))) {
        *(undefined *)(iVar1 + 0x10) = 0x13;
        *(undefined *)(iVar3 + 0x135) = 1;
      }
      if ((*(char *)(iVar1 + 0x10) == '\x10') && (*(int *)(iVar1 + 0x58) < *(int *)(iVar2 + 0x58)))
      {
        *(undefined *)(iVar1 + 0x10) = 0x14;
        *(undefined *)(iVar3 + 0x135) = 1;
      }
    }
  }
  return in_lr;
}

