// sub_0804F7E4 at 0x0804F7E4 (thumb)

undefined4 sub_0804F7E4(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 < 9) && (pbVar2 = (byte *)(iVar5 + 0x150), *pbVar2 != 0xff)) {
    if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
      sub_0801CFF0(param_1);
      bVar1 = *(byte *)(iVar5 + 10) >> 4;
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
      uVar4 = (uint)(*(char *)(iVar5 + 0x71) == '\x03');
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar5 + 0x54) + *(int *)(&DAT_08850010 + uVar4 * 8 + (uint)*pbVar2 * 0x10);
      }
      else {
        iVar3 = *(int *)(iVar5 + 0x54) - *(int *)(&DAT_08850010 + uVar4 * 8 + (uint)*pbVar2 * 0x10);
      }
      *(int *)(param_1 + 0x54) = iVar3;
      *(int *)(param_1 + 0x58) =
           *(int *)(iVar5 + 0x58) + *(int *)(&UNK_08850014 + uVar4 * 8 + (uint)*pbVar2 * 0x10);
    }
    else {
      *(byte *)(iVar5 + 0x153) = *(byte *)(iVar5 + 0x153) | 0x40;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  else {
    *(byte *)(iVar5 + 0x153) = *(byte *)(iVar5 + 0x153) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

