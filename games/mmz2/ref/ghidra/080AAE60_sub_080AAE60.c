// sub_080AAE60 at 0x080AAE60 (thumb)

undefined4 sub_080AAE60(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(iVar7 + 0x28);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    sub_080128D4(param_1);
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        cVar2 = *(char *)(param_1 + 0x13) + -2;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x13) + '\x02';
      }
      *(char *)(param_1 + 0x13) = cVar2;
      if (*(byte *)(param_1 + 0x13) < 0x81) {
        uVar3 = 8;
      }
      else {
        uVar3 = 0x18;
      }
      *(undefined *)(param_1 + 0x25) = uVar3;
      iVar8 = *(int *)(param_1 + 0x5c) *
              (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + (iVar8 >> 8);
      iVar6 = *(int *)(param_1 + 0x60);
      iVar8 = iVar6 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      *(int *)(param_1 + 0x58) = *(int *)(iVar7 + 0x58) + (iVar8 >> 8);
      if (0x400 < iVar6) {
        *(int *)(param_1 + 0x60) = iVar6 + -0x100;
      }
      if (*(ushort *)(iVar7 + 0xc0) <= (ushort)((*(byte *)(param_1 + 0x11) + 1) * 8)) {
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != -1) {
          return in_lr;
        }
LAB_080aafee:
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        return in_lr;
      }
      *(short *)(iVar7 + 0xc2) = *(short *)(iVar7 + 0xc2) + -1;
      *(undefined4 *)(param_1 + 0xc) = 2;
      uVar4 = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
      goto LAB_080ab098;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        cVar2 = *(char *)(param_1 + 0x13) + -2;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x13) + '\x02';
      }
      *(char *)(param_1 + 0x13) = cVar2;
      if (*(byte *)(param_1 + 0x13) < 0x81) {
        uVar3 = 8;
      }
      else {
        uVar3 = 0x18;
      }
      *(undefined *)(param_1 + 0x25) = uVar3;
      iVar6 = *(int *)(param_1 + 0x5c);
      iVar8 = iVar6 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      *(int *)(param_1 + 0x54) = *(int *)(iVar7 + 0x54) + (iVar8 >> 8);
      iVar8 = iVar6 * (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      *(int *)(param_1 + 0x58) = *(int *)(iVar7 + 0x58) + (iVar8 >> 8);
      if (iVar6 < 0x1000) {
        *(int *)(param_1 + 0x5c) = iVar6 + 0x80;
      }
      if (*(char *)(iVar7 + 0xd) == '\0') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x1000;
      *(undefined4 *)(param_1 + 0x60) = 0x1000;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) * '\x10' + '@';
      goto LAB_080aafee;
    }
    if (bVar1 == 2) {
      iVar6 = *(int *)(iVar8 + 0x54) - *(int *)(param_1 + 0x54);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
      }
      *(int *)(param_1 + 0x5c) = iVar6 >> 5;
      iVar6 = *(int *)(iVar8 + 0x58) - (*(int *)(param_1 + 0x58) + 0x1200);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
      }
      *(int *)(param_1 + 0x60) = iVar6 >> 5;
      *(undefined *)(param_1 + 0x12) = 0x20;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar1 != 3) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    if ((((*(uint *)(iVar8 + 0x8c) & 0x200) == 0) && (*(short *)(iVar8 + 0xa4) != 0)) ||
       ((DAT_0202ec38 & 0x10) != 0)) {
      psVar5 = (short *)(iVar8 + 0xa4);
      if (*psVar5 < 0x40) {
        *psVar5 = *psVar5 + 1;
      }
    }
  }
  *(short *)(iVar7 + 0xc2) = *(short *)(iVar7 + 0xc2) + -1;
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar4 = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
LAB_080ab098:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

