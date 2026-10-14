// sub_080676C0 at 0x080676C0 (thumb)

undefined4 sub_080676C0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 1;
        *(undefined *)(param_1 + 0x13) = 0x60;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 3) {
        sub_08007390(param_1 + 0x74,&DAT_08362710);
      }
      else {
        sub_08007390(param_1 + 0x74,&DAT_083626e0);
      }
      if ((*(char *)(param_1 + 0x12) != '\0') &&
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0'))
      {
        iVar11 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
        iVar9 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1800);
        if ((iVar11 == 0) && (iVar9 == 0)) {
          iVar11 = 0x100;
          iVar9 = 0;
        }
        else {
          uVar3 = sub_080FE124(iVar11 * iVar11 + iVar9 * iVar9);
          iVar11 = FUN_080fe2f8(iVar11 * 0x100,uVar3);
          iVar9 = FUN_080fe2f8(iVar9 * 0x100,uVar3);
        }
        *(int *)(param_1 + 0x5c) = (iVar11 << 7) >> 8;
        *(int *)(param_1 + 0x60) = (iVar9 << 7) >> 8;
        *(undefined *)(param_1 + 0x12) = 0x10;
      }
      iVar12 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar12;
      iVar11 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar11;
      iVar9 = DAT_0202f5c0;
      if ((uint)((*(int *)(DAT_0202f5c0 + 0x54) + 0x5000) - iVar12) < 0xa000) {
        if (*(char *)(param_1 + 0x13) == '\0') {
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x13) + -1;
        *(char *)(param_1 + 0x13) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        uVar10 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar10 & 0x7fffffff;
        if (((uVar10 * 2 >> 0x11 & 0xf) < 8) && (iVar11 <= *(int *)(iVar9 + 0x58))) {
          uVar4 = sub_08009A3C(iVar12,iVar11);
          uVar5 = sub_08009A3C(iVar12 + 0x1200,iVar11 + 0x1200);
          uVar6 = sub_08009A3C(iVar12 + -0x1200,iVar11 + 0x1200);
          uVar7 = sub_08009A3C(iVar12 + 0x1200,iVar11 + -0x1200);
          uVar8 = sub_08009A3C(iVar12 + -0x1200,iVar11 + -0x1200);
          if ((ushort)(uVar4 | uVar5 | uVar6 | uVar7 | uVar8) == 0) {
            *(undefined *)(param_1 + 0xd) = 3;
            *(undefined *)(param_1 + 0xe) = 0;
          }
        }
      }
      *(undefined *)(param_1 + 0x13) = 0x60;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08017700(param_1,0x600);
    *(undefined *)(param_1 + 0xb9) = 1;
    sub_08007390(param_1 + 0x74,&DAT_083626e0);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0xbb) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar9;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar9;
  sub_080177F4(param_1);
  if (0 < *(int *)(param_1 + 0x60)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 3) {
    sub_08007390(param_1 + 0x74,&DAT_08362710);
  }
  else {
    sub_08007390(param_1 + 0x74,&DAT_083626e0);
  }
  iVar9 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202f5c0 + 0x58);
  if (iVar9 < 1) {
    iVar9 = *(int *)(DAT_0202f5c0 + 0x58) - *(int *)(param_1 + 0x58);
  }
  if (0xa000 < iVar9) {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

