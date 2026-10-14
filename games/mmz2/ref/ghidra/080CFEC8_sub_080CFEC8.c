// sub_080CFEC8 at 0x080CFEC8 (thumb)

undefined4 sub_080CFEC8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sub_080128D4();
  if ((*(byte *)(param_1 + 0xd) < 4) &&
     (bVar1 = *(byte *)(param_1 + 0xb9), *(byte *)(param_1 + 0xb9) = bVar1 + 1, (bVar1 & 0xf) == 0))
  {
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + 0x800;
    sub_080BC790(&local_18,0,4);
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar4 = *(int *)(iVar6 + 0x54) +
              (short)(&DAT_080ef450)[*(byte *)(param_1 + 0xb8) + 0x40 & 0xff] * -4;
    }
    else {
      iVar4 = *(int *)(iVar6 + 0x54) +
              (short)(&DAT_080ef450)[*(byte *)(param_1 + 0xb8) + 0x40 & 0xff] * 4;
    }
    pbVar5 = (byte *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + (short)(&DAT_080ef450)[*pbVar5] * 4;
    *pbVar5 = *pbVar5 + 4;
    if (*(byte *)(iVar6 + 0xd) < 2) goto switchD_080cff18_caseD_5;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(undefined *)(param_1 + 0x13) = 0x40;
    break;
  case 1:
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar4 = *(int *)(iVar6 + 0x54) -
              (uint)(*(byte *)(param_1 + 0x13) >> 4) *
              (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0xb8) + 0x40 & 0xff];
    }
    else {
      iVar4 = *(int *)(iVar6 + 0x54) +
              (uint)(*(byte *)(param_1 + 0x13) >> 4) *
              (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0xb8) + 0x40 & 0xff];
    }
    pbVar5 = (byte *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x54) = iVar4;
    *(uint *)(param_1 + 0x58) =
         *(int *)(iVar6 + 0x58) +
         (uint)(*(byte *)(param_1 + 0x13) >> 4) * (int)(short)(&DAT_080ef450)[*pbVar5];
    *pbVar5 = *pbVar5 + 2;
    if (-1 < *(char *)(param_1 + 0x12)) {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + -1;
    }
    *(char *)(param_1 + 0xba) = (*(byte *)(param_1 + 0x12) >> 4) + *(char *)(param_1 + 0xba);
    if (*(byte *)(iVar6 + 0xd) < 4) goto switchD_080cff18_caseD_5;
    *(int *)(param_1 + 0x68) =
         *(int *)(iVar6 + 0x58) - *(int *)(*(int *)(*(int *)(iVar6 + 0x18) + 4) + 0x58);
    break;
  case 2:
    iVar4 = *(int *)(param_1 + 0x68) + 0x80;
    *(int *)(param_1 + 0x68) = iVar4;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -8;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x20;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(*(int *)(iVar6 + 0x18) + 4) + 0x58) + iVar4;
    *(char *)(param_1 + 0xba) = *(char *)(param_1 + 0xba) + '\b';
    if (*(int *)(param_1 + 0x68) < -0x21ff) goto switchD_080cff18_caseD_5;
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 3:
    if (*(byte *)(param_1 + 0x12) < 0xfa) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
    }
    *(char *)(param_1 + 0xba) = *(char *)(param_1 + 0xba) + '\b' + (*(byte *)(param_1 + 0x12) >> 4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(int *)(param_1 + 0x58) =
         *(int *)(*(int *)(*(int *)(iVar6 + 0x18) + 4) + 0x58) + *(int *)(param_1 + 0x68);
    if (*(byte *)(iVar6 + 0xd) < 7) goto switchD_080cff18_caseD_5;
    break;
  case 4:
    if (0x400 < *(int *)(param_1 + 0x5c)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x40;
    }
    if (*(byte *)(param_1 + 0x12) < 0xfa) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
    }
    *(char *)(param_1 + 0xba) = *(char *)(param_1 + 0xba) + '\b' + (*(byte *)(param_1 + 0x12) >> 4);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(int *)(param_1 + 0x58) =
         *(int *)(*(int *)(*(int *)(iVar6 + 0x18) + 4) + 0x58) + *(int *)(param_1 + 0x68);
    uVar2 = *(ushort *)(param_1 + 0x50);
    if (uVar2 < 5) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080CF5F8(param_1);
    }
    else {
      *(ushort *)(param_1 + 0x50) = uVar2 - 4;
      *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + -4;
    }
  default:
    goto switchD_080cff18_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080cff18_caseD_5:
  pbVar5 = (byte *)(param_1 + 0xba);
  if ((byte)(*pbVar5 + 0xbf) < 0x7f) {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    uVar3 = 0x1d;
  }
  else {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    uVar3 = 0x18;
  }
  *(undefined *)(param_1 + 0x25) = uVar3;
  iVar6 = (int)(short)(&DAT_080ef450)[*pbVar5] * *(int *)(param_1 + 0x5c);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar6 >> 8);
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar6 = (int)(short)(&DAT_080ef450)[*pbVar5] * *(int *)(param_1 + 0x60);
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar6 = *(int *)(param_1 + 0x58) + (iVar6 >> 8);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x60) * (int)(short)(&DAT_080ef450)[*pbVar5];
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    iVar6 = *(int *)(param_1 + 0x58) - (iVar6 >> 8);
  }
  *(int *)(param_1 + 0x58) = iVar6;
  return in_lr;
}

