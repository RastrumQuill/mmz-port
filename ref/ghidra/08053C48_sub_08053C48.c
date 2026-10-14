// sub_08053C48 at 0x08053C48 (thumb)

undefined4 sub_08053C48(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    iVar4 = (uVar3 * 2 >> 0x11 & 3) * 4;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(&DAT_082af6fc + iVar4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(&DAT_082af70c + iVar4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(bool *)(param_1 + 0x44) = 0 < *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x54) < 1) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar4 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar4;
  piVar5 = (int *)(param_1 + 0xc4);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *piVar5 = *piVar5 - iVar4;
  cVar2 = sub_080534D0(param_1);
  if (cVar2 == '\0') {
    iVar4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0xb8);
    if (iVar4 < 0) {
      iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x4c);
    }
    if (iVar4 < 0xa001) goto LAB_08053d10;
  }
  *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
LAB_08053d10:
  if (*piVar5 < 1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

