// sub_0807CFD8 at 0x0807CFD8 (thumb)

undefined4 sub_0807CFD8(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x20);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_08094AB0(param_1,0x10);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 4) != 0) {
          *(undefined *)(param_1 + 0xd) = 1;
        }
        iVar4 = *(int *)(param_1 + 0x54) + 0x10;
        *(int *)(param_1 + 0x54) = iVar4;
        if (0x280 < iVar4) {
          *(undefined4 *)(param_1 + 0x54) = 0x280;
        }
        if (1 < *(byte *)(iVar5 + 0xc)) {
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0x12) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        }
      }
      goto LAB_0807d0a0;
    }
    if (bVar1 != 2) goto LAB_0807d0a0;
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) < 2) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 0x11) goto LAB_0807d0a0;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
LAB_0807d0a0:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar5 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 0x4c) = iVar5;
  cVar3 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (cVar3 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

