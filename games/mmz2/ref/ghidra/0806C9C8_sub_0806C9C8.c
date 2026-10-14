// sub_0806C9C8 at 0x0806C9C8 (thumb)

undefined4 sub_0806C9C8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar5 + 0xc) < 2) {
    psVar4 = (short *)(iVar5 + 0xd8);
    if (*(short *)(param_1 + 0xc0) != *psVar4) {
      sub_080127E4(param_1,*psVar4);
      *(short *)(param_1 + 0xc0) = *psVar4;
    }
    sub_080128D4(param_1);
    bVar1 = *(byte *)(iVar5 + 10) >> 4;
    uVar3 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    uVar2 = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806CA58(param_1);
  }
  return in_lr;
}

