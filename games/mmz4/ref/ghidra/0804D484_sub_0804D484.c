// sub_0804D484 at 0x0804D484 (thumb)

undefined4 sub_0804D484(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar5 + 0x150) == -1) {
    *(byte *)(iVar5 + 0x153) = *(byte *)(iVar5 + 0x153) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xe) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    cVar1 = sub_0803AAC8(iVar5);
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0804d52a;
    }
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x2a);
LAB_0804d544:
    *(byte *)(iVar5 + 0x153) = *(byte *)(iVar5 + 0x153) | 0x40;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
LAB_0804d52a:
    if (*(char *)(param_1 + 0xd) == '\0') {
      bVar2 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2 + 1;
      if (3 < bVar2) {
        *(undefined *)(param_1 + 0x12) = 0;
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2 + 1;
      if (3 < bVar2) goto LAB_0804d544;
    }
    bVar2 = *(byte *)(iVar5 + 10) >> 4;
    uVar4 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    uVar4 = (uint)(*(char *)(iVar5 + 0x71) == '\x03');
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar5 + 0x54) +
              *(int *)(&DAT_08850010 + uVar4 * 8 + (uint)*(byte *)(iVar5 + 0x150) * 0x10);
    }
    else {
      iVar3 = *(int *)(iVar5 + 0x54) -
              *(int *)(&DAT_08850010 + uVar4 * 8 + (uint)*(byte *)(iVar5 + 0x150) * 0x10);
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar5 + 0x58) +
         *(int *)(&UNK_08850014 + uVar4 * 8 + (uint)*(byte *)(iVar5 + 0x150) * 0x10);
    *(undefined *)(param_1 + 0x24) = (&DAT_088500b0)[*(byte *)(iVar5 + 0x150)];
  }
  return in_lr;
}

