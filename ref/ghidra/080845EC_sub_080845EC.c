// sub_080845EC at 0x080845EC (thumb)

undefined4 sub_080845EC(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
        iVar5 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0xc0);
        *(int *)(param_1 + 0x54) = iVar5;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)*(short *)(param_1 + 0xc2);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        if (iVar5 < 0x101) {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
      }
    }
    else if (bVar1 == 2) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      bVar1 = *(byte *)(param_1 + 0x12);
      if ((bVar1 & 3) < 2) {
        bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(byte *)(param_1 + 0x12) = bVar1 - 1;
      if (bVar1 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
      }
    }
    goto LAB_080846fc;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x50);
  iVar4 = (iVar5 + 0x1800) - *(int *)(DAT_0202286c + 0x50) >> 9;
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      iVar5 = iVar5 + 0x40;
      goto LAB_080846a0;
    }
  }
  else {
    iVar5 = iVar5 + -0x40;
LAB_080846a0:
    *(int *)(param_1 + 0x50) = iVar5;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
LAB_080846fc:
  cVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

