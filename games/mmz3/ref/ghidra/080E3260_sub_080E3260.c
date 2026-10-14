// sub_080E3260 at 0x080E3260 (thumb)

undefined4 sub_080E3260(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  iVar5 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar3 + 0x147) * 8);
  sub_080177F4(param_1);
  if (((*(uint *)(iVar3 + 0x8c) & 0x200) == 0) && (*(short *)(iVar3 + 0xa4) != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + (int)(short)iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + (iVar5 >> 0x10);
    iVar6 = *(int *)(param_1 + 0xbc) + 0x60;
    *(int *)(param_1 + 0xbc) = iVar6;
    iVar3 = sub_080FE390(*(byte *)(param_1 + 0xb8) + 1,0x30);
    *(byte *)(param_1 + 0xb8) = (byte)iVar3;
    iVar5 = FUN_080fe2f8(iVar3 << 8,0x30);
    iVar3 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = 1;
    }
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (iVar6 * *(short *)((int)&DAT_080fe64c + ((uint)((iVar5 + 0x40) * 0x1000000) >> 0x17)) >> 8
         ) * iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         (*(short *)((int)&DAT_080fe64c + ((uint)(iVar5 << 0x18) >> 0x17)) * iVar6 >> 8);
    uVar4 = *(ushort *)(param_1 + 0xba) - 1;
    *(ushort *)(param_1 + 0xba) = (ushort)uVar4;
    pcVar7 = (char *)(param_1 + 0xb9);
    cVar1 = *pcVar7;
    *pcVar7 = cVar1 + -1;
    if ((char)(cVar1 + -1) == -1) {
      sub_080BF760(param_1 + 0x54,0);
      *pcVar7 = ' ';
    }
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
    if (uVar4 < 0xf0) {
      uVar2 = sub_080FE460((0xf0 - uVar4) * 0xf,0xf0);
      if ((0xf0 - uVar4 & 0xf) >> 2 == 1) {
        uVar2 = uVar2 + 1;
      }
      uVar4 = (uVar2 & 0xf) << 4 | uVar2 & 0xf;
      DAT_02002420 = (ushort)uVar4 | (ushort)(uVar4 << 8);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

