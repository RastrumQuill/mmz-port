// sub_08039DDC at 0x08039DDC (thumb)

undefined8 sub_08039DDC(int param_1,undefined param_2,undefined param_3,uint param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar4 = 0;
  uVar5 = (uint)*(short *)(DAT_0202f070 + 10);
  if (uVar5 != 0) {
    if (param_4 <= uVar5) {
      uVar5 = param_4;
    }
    sVar2 = sub_08037DC8(param_1,2);
    iVar6 = (int)sVar2;
    iVar3 = 0;
    do {
      uVar5 = uVar5 - 1;
      iVar4 = sub_08006B84(DAT_0202f070);
      *(undefined *)(iVar4 + 9) = 2;
      *(undefined4 *)(iVar4 + 0x14) = 0x80399d5;
      if (iVar6 < 2) {
        bVar1 = *(byte *)(iVar4 + 0xb) & 0xbf;
      }
      else {
        bVar1 = *(byte *)(iVar4 + 0xb) | 0x40;
      }
      *(byte *)(iVar4 + 0xb) = bVar1;
      *(undefined *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = (&DAT_08335fd4)[iVar6];
      *(undefined1 *)(iVar4 + 0x22) = (&DAT_08335fdc)[iVar6];
      *(undefined *)(iVar4 + 0x10) = param_2;
      *(char *)(iVar4 + 0x11) = (char)uVar5;
      *(char *)(iVar4 + 0x12) = (char)param_4;
      *(int *)(iVar4 + 0x28) = param_1;
      *(int *)(iVar4 + 0x2c) = iVar3;
      iVar3 = iVar4;
    } while (uVar5 != 0);
    *(undefined *)(iVar4 + 100) = param_3;
    *(int *)(param_1 + 0x2c) = iVar4;
    sub_08037DEC(param_1,*(undefined *)(param_1 + 0x215));
  }
  return CONCAT44(in_lr,iVar4);
}

