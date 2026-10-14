// sub_080395D0 at 0x080395D0 (thumb)

undefined4 sub_080395D0(int param_1)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(&DAT_0833612c + (uint)*(byte *)(param_1 + 0x11) * 4);
  iVar3 = (int)*(char *)(param_1 + 0x71);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 0x10) == 0) {
    if ((bVar1 & 1) == 0) goto LAB_08039608;
  }
  else if ((bVar1 & 1) == 1) {
LAB_08039608:
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
      if ((*(char *)(param_1 + 0x72) < '\x02') &&
         (iVar3 = iVar3 + 1, *(short *)(iVar3 * 2 + iVar6) < 0)) {
        *(undefined *)(param_1 + 0xd) = 1;
      }
      iVar4 = (int)*(short *)(&DAT_08335a8e + (uint)*(byte *)(param_1 + 0x10) * 4);
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar3 != 0) {
        psVar2 = (short *)(iVar3 * 2 + iVar6);
        do {
          psVar2 = psVar2 + -1;
          iVar3 = iVar3 + -1;
          iVar4 = iVar4 + *psVar2;
        } while (iVar3 != 0);
      }
      goto LAB_08039682;
    }
  }
  *(undefined *)(param_1 + 0xe) = 1;
  if ('\x01' < *(char *)(param_1 + 0x72)) {
    return in_lr;
  }
  psVar2 = (short *)(iVar3 * 2 + iVar6);
  iVar4 = (int)*psVar2;
  iVar5 = *(int *)(param_1 + 0x54);
  if (psVar2[1] < 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
LAB_08039682:
  iVar3 = -1;
  if ((bVar1 & 1) != 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x54) = iVar5 + iVar4 * iVar3;
  return in_lr;
}

