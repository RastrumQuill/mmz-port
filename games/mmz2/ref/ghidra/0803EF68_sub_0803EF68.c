// sub_0803EF68 at 0x0803EF68 (thumb)

undefined4 sub_0803EF68(int param_1)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = (int)*(char *)(param_1 + 0x71);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 10) & 0x10) == 0) {
    if ((bVar1 & 1) == 0) goto LAB_0803ef98;
  }
  else if ((bVar1 & 1) == 1) {
LAB_0803ef98:
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
      if ((*(char *)(param_1 + 0x72) < '\x02') &&
         (iVar3 = iVar3 + 1, *(short *)(&DAT_08339f1c + iVar3 * 2) < 0)) {
        *(undefined *)(param_1 + 0xd) = 1;
      }
      iVar4 = (int)*(short *)(&DAT_08335a8e + (uint)*(byte *)(param_1 + 0x10) * 4);
      iVar5 = *(int *)(param_1 + 0x54);
      if (iVar3 != 0) {
        psVar2 = (short *)(&DAT_08339f1c + iVar3 * 2);
        do {
          psVar2 = psVar2 + -1;
          iVar3 = iVar3 + -1;
          iVar4 = iVar4 + *psVar2;
        } while (iVar3 != 0);
      }
      goto LAB_0803f012;
    }
  }
  *(undefined *)(param_1 + 0xe) = 1;
  if ('\x01' < *(char *)(param_1 + 0x72)) {
    return in_lr;
  }
  iVar4 = (int)*(short *)(&DAT_08339f1c + iVar3 * 2);
  iVar5 = *(int *)(param_1 + 0x54);
  if (*(short *)(&DAT_08339f1e + iVar3 * 2) < 0) {
    *(undefined *)(param_1 + 0xd) = 1;
  }
LAB_0803f012:
  iVar3 = -1;
  if ((bVar1 & 1) != 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x54) = iVar5 + iVar4 * iVar3;
  return in_lr;
}

