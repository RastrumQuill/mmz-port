// sub_080E3670 at 0x080E3670 (thumb)

undefined4 sub_080E3670(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar7 = *(int *)(&DAT_0835b034 + (uint)*(byte *)(iVar5 + 0x147) * 8);
  sub_080177F4(param_1);
  if (((*(uint *)(iVar5 + 0x8c) & 0x200) == 0) && (*(short *)(iVar5 + 0xa4) != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (int)(short)iVar7;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + (iVar7 >> 0x10);
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836e550 + (uint)*(byte *)(param_1 + 0xd) * 4));
    iVar5 = *(int *)(param_1 + 0xc0);
    iVar4 = iVar5 - (iVar5 * 0xff >> 8);
    iVar7 = iVar5 * 6 >> 8;
    iVar7 = iVar4 * iVar4 + iVar7 * iVar7;
    if ((iVar7 == 0) || (0xfffff < iVar7)) {
      uVar2 = *(byte *)(param_1 + 0xb8) + 1;
    }
    else {
      iVar4 = FUN_080fe2f8(0x100000,iVar7);
      iVar7 = sub_080FE390(0x100000,iVar7);
      if (iVar7 != 0) {
        iVar4 = iVar4 + 1;
      }
      uVar2 = sub_080FE124(iVar4);
      uVar2 = (uVar2 & 0xffff) + (uint)*(byte *)(param_1 + 0xb8);
    }
    *(char *)(param_1 + 0xb8) = (char)uVar2;
    iVar7 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar7 = 1;
    }
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (*(short *)((int)&DAT_080fe64c + (((uVar2 & 0xff) << 0x18) >> 0x17)) * iVar5 >> 8) * iVar7;
    uVar3 = 0x10;
    if (0x7f < ((uVar2 & 0xff) + 0x40 & 0xff)) {
      uVar3 = 0x11;
    }
    *(undefined *)(param_1 + 0x25) = uVar3;
    iVar7 = sub_080FE390(*(byte *)(param_1 + 0xbb) + 1,0x1c);
    *(byte *)(param_1 + 0xbb) = (byte)iVar7;
    iVar7 = FUN_080fe2f8(iVar7 << 8,0x1c);
    iVar4 = 0xa00;
    if (iVar5 < 0x1300) {
      iVar4 = FUN_080fe2f8((iVar5 + -0xc00) * 0xa00,0x700);
    }
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) -
         (iVar4 * *(short *)((int)&DAT_080fe64c + ((uint)(iVar7 << 0x18) >> 0x17)) >> 8);
    pcVar6 = (char *)(param_1 + 0xb9);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + -1;
    if ((char)(cVar1 + -1) == -1) {
      sub_080BF760(param_1 + 0x54,0);
      *pcVar6 = ' ';
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

