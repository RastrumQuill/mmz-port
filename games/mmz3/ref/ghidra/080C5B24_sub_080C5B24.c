// sub_080C5B24 at 0x080C5B24 (thumb)

undefined4 sub_080C5B24(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    break;
  case 1:
    goto switchD_080c5b38_caseD_1;
  case 2:
    sub_0801749C(param_1);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    sub_08017700(param_1,*(uint *)(param_1 + 0x5c) & 0xffff);
    if ((*(uint *)(DAT_02030160 + 0x14) & 1 << (&DAT_0836bfe4)[*(byte *)(param_1 + 0x11)]) != 0) {
      *(int *)(param_1 + 0x40) = param_1 + 100;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sub_080177F4(param_1);
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) goto switchD_080c5b38_caseD_6;
    *(undefined *)(param_1 + 0x12) = 0;
    goto LAB_080c5de2;
  case 4:
    sub_08017654(param_1);
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
    sub_08017700(param_1,*(uint *)(param_1 + 0x5c) & 0xffff);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080177F4(param_1);
    iVar2 = *(byte *)(param_1 + 0x12) + 1;
    *(char *)(param_1 + 0x12) = (char)iVar2;
    *(short *)(param_1 + 0x52) =
         0x100 - *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 * 0x4000000) >> 0x17));
    if (8 < *(byte *)(param_1 + 0x12)) {
      *(short *)(param_1 + 0x50) =
           0x100 - *(short *)((int)&DAT_080fe64c +
                             ((*(byte *)(param_1 + 0x12) - 8) * 0x8000000 >> 0x17));
    }
    if (*(char *)(param_1 + 0x12) == '\x10') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc);
    }
  default:
    goto switchD_080c5b38_caseD_6;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017654(param_1);
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  *(undefined *)(param_1 + 0x25) = 1;
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar5 = (uint)bVar1;
  if ((*(uint *)(DAT_02030160 + 0x14) & 1 << (&DAT_0836bfe4)[uVar5]) == 0) {
    if (uVar5 < 4) {
      *(byte *)(param_1 + 0x22) = bVar1;
      bVar1 = *(byte *)(param_1 + 0x11);
      iVar2 = 0xcd00;
LAB_080c5bdc:
      *(uint *)(param_1 + 0x5c) = (uint)bVar1 + iVar2;
      uVar5 = (uint)bVar1 + iVar2 & 0xffff;
      goto LAB_080c5be4;
    }
    if (uVar5 < 8) {
      *(byte *)(param_1 + 0x22) = bVar1 - 4;
      bVar1 = *(byte *)(param_1 + 0x11);
      iVar2 = 0xcdfc;
      goto LAB_080c5bdc;
    }
    *(byte *)(param_1 + 0x22) = bVar1 - 8;
    uVar5 = *(byte *)(param_1 + 0x11) + 0xcff8;
    *(uint *)(param_1 + 0x5c) = uVar5;
    sub_08017700(param_1,uVar5 & 0xffff);
  }
  else {
    uVar5 = 0xcf00;
    *(undefined4 *)(param_1 + 0x5c) = 0xcf00;
LAB_080c5be4:
    sub_08017700(param_1,uVar5);
  }
  *(undefined *)(param_1 + 0x12) = 0x1f;
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c5b38_caseD_1:
  sub_080177F4(param_1);
  uVar5 = (uint)*(byte *)(param_1 + 0x11);
  if (uVar5 < 4) {
    uVar3 = (uint)*(byte *)(param_1 + 0x12);
    iVar2 = uVar3 * *(int *)(&DAT_0836bf84 + uVar5 * 8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
LAB_080c5d14:
    iVar4 = 0x1e00;
LAB_080c5d1a:
    iVar4 = (0x20 - uVar3) * (uVar5 * 0x3c00 + iVar4);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x1f;
    }
    *(int *)(param_1 + 0x54) = DAT_020302c0 + (iVar2 >> 5) + -0x7800 + (iVar4 >> 5);
  }
  else {
    if (uVar5 < 7) {
      uVar3 = (uint)*(byte *)(param_1 + 0x12);
      iVar2 = uVar3 * *(int *)(&DAT_0836bf84 + (uint)*(byte *)(param_1 + 0x11) * 8);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      uVar5 = *(byte *)(param_1 + 0x11) - 4;
      iVar4 = 0x3c00;
      goto LAB_080c5d1a;
    }
    if (uVar5 != 7) {
      uVar3 = (uint)*(byte *)(param_1 + 0x12);
      iVar2 = uVar3 * *(int *)(&DAT_0836bf84 + (uint)*(byte *)(param_1 + 0x11) * 8);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0x1f;
      }
      uVar5 = *(byte *)(param_1 + 0x11) - 8;
      goto LAB_080c5d14;
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x12);
    iVar2 = uVar3 * *(int *)(&DAT_0836bf84 + (uint)*(byte *)(param_1 + 0x11) * 8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0x1f;
    }
    *(uint *)(param_1 + 0x54) = DAT_020302c0 + (iVar2 >> 5) + -0x7800 + (0x20 - uVar3) * 0x3c0;
  }
  iVar2 = uVar3 * *(int *)(&DAT_0836bf88 + (uint)*(byte *)(param_1 + 0x11) * 8);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x1f;
  }
  *(uint *)(param_1 + 0x58) = DAT_020302c4 + (iVar2 >> 5) + -0x5000 + (0x20 - uVar3) * 0x140;
  *(short *)(param_1 + 0x50) = (0x20 - (short)uVar3) * 8;
  *(ushort *)(param_1 + 0x52) = (0x20 - (ushort)*(byte *)(param_1 + 0x12)) * 8;
  if (*(char *)(param_1 + 0x12) == '\0') {
LAB_080c5de2:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
switchD_080c5b38_caseD_6:
  if ((*(uint *)(DAT_02030160 + 0x14) & 1 << (&DAT_0836bfe4)[*(byte *)(param_1 + 0x11)]) != 0) {
    iVar2 = *(byte *)(param_1 + 0x13) + 1;
    *(char *)(param_1 + 0x13) = (char)iVar2;
    uVar5 = (uint)(iVar2 * 0x1000000) >> 0x1a & 1;
    if (uVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    pbVar6 = (byte *)(param_1 + 0x4a);
    *pbVar6 = *pbVar6 & 0xef | (byte)(uVar5 << 4);
    bVar1 = *(byte *)(param_1 + 0x13) >> 3;
    uVar5 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4d) = (char)uVar5;
    *pbVar6 = *pbVar6 & 0xdf | (byte)(uVar5 << 5);
    uVar5 = (uint)*(byte *)(param_1 + 0x13) << 0x18;
    *(uint *)(param_1 + 100) = *(int *)(param_1 + 0x54) + (uVar5 >> 0x1a & 1) * -0x100;
    *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + (uVar5 >> 0x1b & 1) * -0x100;
  }
  return in_lr;
}

