// sub_080CA3B0 at 0x080CA3B0 (thumb)

undefined4 sub_080CA3B0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (((int)(uint)(byte)(&DAT_0202ebb4)
                          [*(ushort *)(&DAT_08349094 + (uint)*(byte *)(param_1 + 0x11) * 2) >> 3] >>
         (*(ushort *)(&DAT_08349094 + (uint)*(byte *)(param_1 + 0x11) * 2) & 7) & 1U) == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      sub_08012580(param_1);
      sub_080127E4(param_1,0x9f02);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_08348fa4,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto switchD_080ca3c4_caseD_1;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_080ca69e;
  case 1:
switchD_080ca3c4_caseD_1:
    sub_080128D4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
      iVar5 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
      if (*(int *)(DAT_0202e130 + 0x54) == *(int *)(param_1 + 0x54) || iVar5 < 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(bool *)(param_1 + 0x4c) = 0 < iVar5;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (0 < iVar5) << 4;
      return in_lr;
    }
    if (DAT_0202e138 == '\0') {
      return in_lr;
    }
    if (DAT_03003908 != param_1 + 0x74) {
      return in_lr;
    }
    sub_080DEF4C(*(undefined2 *)(&DAT_0834909e + (uint)*(byte *)(param_1 + 0x11) * 2));
    break;
  case 2:
    sub_080128D4(param_1);
    if (DAT_0202f65a != 0) {
      return in_lr;
    }
    DAT_0202e138 = '\0';
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    (&DAT_0202ebb4)[*(ushort *)(&DAT_08349094 + (uint)*(byte *)(param_1 + 0x11) * 2) >> 3] =
         (byte)(1 << (*(ushort *)(&DAT_08349094 + (uint)*(byte *)(param_1 + 0x11) * 2) & 7)) |
         (&DAT_0202ebb4)[*(ushort *)(&DAT_08349094 + (uint)*(byte *)(param_1 + 0x11) * 2) >> 3];
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08012C04(param_1);
    }
    else {
      sub_08012CD0(param_1);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    break;
  case 4:
    sub_080126A0(param_1);
    sub_080127E4(param_1,0x9f02);
    sub_080032EC(0x9b);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 6:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffff400;
    break;
  case 7:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    iVar5 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    uVar4 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar4 < 0x3001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
LAB_080ca69e:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  default:
    goto switchD_080ca3c4_caseD_8;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080ca3c4_caseD_8:
  return in_lr;
}

