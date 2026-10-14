// sub_080A6EF8 at 0x080A6EF8 (thumb)

undefined4 sub_080A6EF8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 in_lr;
  
  if (((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) ||
      (*(char *)(*(int *)(param_1 + 0x28) + 0xd) == '\v')) && (*(byte *)(param_1 + 0xe) < 0x14)) {
    *(undefined *)(param_1 + 0xe) = 0x14;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') goto LAB_080a74ce;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x19;
    sub_08017700(param_1,0xb100);
    if (*(byte *)(param_1 + 0xb6) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar5 = *(byte *)(param_1 + 0xb6) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a6f32_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_080a738c:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080a6f32_caseD_c:
    return in_lr;
  case 1:
    goto switchD_080a6f32_caseD_1;
  case 2:
    sub_08017700(param_1,0xb101);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(undefined *)(param_1 + 0x12) = 0xff;
    sub_080177F4(param_1);
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    if ((int)(uint)*(byte *)(param_1 + 0x13) <
        *(int *)(&DAT_083685dc + (uint)*(byte *)(param_1 + 0xb5) * 4)) {
      return in_lr;
    }
    goto LAB_080a738c;
  case 4:
    sub_08017700(param_1,0xb114);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080a738c;
  case 6:
    sub_08017700(param_1,0xb115);
    *(undefined *)(param_1 + 0x25) = 8;
    sub_08007390(param_1 + 0x74,&DAT_083684d4);
    piVar7 = (int *)(param_1 + 0xbc);
    *(char *)(param_1 + 0x13) = (char)*piVar7;
    *(int *)(param_1 + 0xc0) = *piVar7 << 8;
    *(undefined4 *)(param_1 + 0xb8) = 0x2400;
    iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
    uVar3 = sub_0800A4B4(*(undefined4 *)(iVar4 + 0x54),*(undefined4 *)(iVar4 + 0x58));
    *(undefined4 *)(param_1 + 100) = uVar3;
    iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
    iVar4 = sub_0800A104(*(undefined4 *)(iVar4 + 0x54),*(undefined4 *)(iVar4 + 0x58));
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x28) + 0x28) + 0x58) < iVar4 + -0x5e00) {
      *(undefined *)(param_1 + 0xb7) = 1;
      iVar4 = *(int *)(param_1 + 100) + 0x7c00;
    }
    else {
      *(undefined *)(param_1 + 0xb7) = 0;
      iVar4 = *(int *)(param_1 + 100) + 0x6800;
    }
    *(int *)(param_1 + 100) = iVar4;
    iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
    *(int *)(param_1 + 0x68) = *(int *)(iVar4 + 0x58) + -0x1800;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar4 + 0x54);
    *(int *)(param_1 + 0x60) = *(int *)(iVar4 + 0x58) + -0x1800;
    *piVar7 = 0x1c000;
    *(undefined *)(param_1 + 0x12) = 0xff;
    cVar1 = *(char *)(param_1 + 0xb5);
    if (((cVar1 == '\0') || (cVar1 == '\x03')) || (cVar1 == '\x06')) {
      sub_0800471C(0xcb);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0xc0) + -0x1c0;
      *(int *)(param_1 + 0xc0) = iVar4;
      if (0xe8 < (iVar4 >> 8 & 0xffU)) {
LAB_080a716e:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc0) + 0x1c0;
      *(int *)(param_1 + 0xc0) = iVar4;
      if ((iVar4 >> 8 & 0xffU) < 0x18) goto LAB_080a716e;
    }
    if (*(char *)(param_1 + 0xb7) == '\x01') {
      iVar6 = *(int *)(param_1 + 0xb8);
      iVar4 = 0x7c00;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xb8);
      iVar4 = 0x6800;
    }
    piVar7 = (int *)(param_1 + 0xb8);
    *piVar7 = iVar6 + ((iVar4 - iVar6) * 2 >> 8);
    iVar4 = *(int *)(param_1 + 0x5c) +
            ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c)) * 2 >> 8);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar6 = *(int *)(param_1 + 0x60) +
            ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60)) * 2 >> 8);
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x54) =
         iVar4 + (*piVar7 * (int)*(short *)((int)&DAT_080fe64c +
                                           ((uint)((*(int *)(param_1 + 0xc0) >> 8) << 0x18) >> 0x17)
                                           ) >> 8);
    *(int *)(param_1 + 0x58) =
         iVar6 + ((int)*(short *)((int)&DAT_080fe64c +
                                 ((uint)(((*(int *)(param_1 + 0xc0) >> 8) + 0x40) * 0x1000000) >>
                                 0x17)) * *piVar7 >> 8);
    sub_080177F4(param_1);
LAB_080a72ca:
    *(undefined *)(param_1 + 0x12) = 0xff;
    return in_lr;
  case 8:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0xc0);
      iVar6 = -0x1c0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc0);
      iVar6 = 0x1c0;
    }
    piVar7 = (int *)(param_1 + 0xc0);
    *piVar7 = iVar4 + iVar6;
    if (*(char *)(param_1 + 0xb7) == '\x01') {
      iVar6 = *(int *)(param_1 + 0xb8);
      iVar4 = 0x7c00;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xb8);
      iVar4 = 0x6800;
    }
    piVar8 = (int *)(param_1 + 0xb8);
    *piVar8 = iVar6 + ((iVar4 - iVar6) * 8 >> 8);
    iVar4 = *(int *)(param_1 + 0x5c) +
            ((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c)) * 8 >> 8);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar6 = *(int *)(param_1 + 0x60) +
            ((*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60)) * 8 >> 8);
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x54) =
         iVar4 + (*piVar8 * (int)*(short *)((int)&DAT_080fe64c +
                                           ((uint)((*piVar7 >> 8) << 0x18) >> 0x17)) >> 8);
    *(int *)(param_1 + 0x58) =
         iVar6 + ((int)*(short *)((int)&DAT_080fe64c +
                                 ((uint)(((*piVar7 >> 8) + 0x40) * 0x1000000) >> 0x17)) * *piVar8 >>
                 8);
    sub_080177F4(param_1);
    iVar4 = *(int *)(param_1 + 0xbc) + -0x1c0;
    *(int *)(param_1 + 0xbc) = iVar4;
    if (iVar4 < 1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    goto LAB_080a72ca;
  case 9:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0xc0);
      iVar6 = -0x300;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc0);
      iVar6 = 0x300;
    }
    piVar7 = (int *)(param_1 + 0xc0);
    *piVar7 = iVar4 + iVar6;
    piVar8 = (int *)(param_1 + 0xb8);
    *piVar8 = *piVar8 + (*piVar8 * -0x18 >> 8);
    iVar6 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
    iVar4 = *(int *)(param_1 + 0x5c) +
            ((*(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x5c)) * 0x18 >> 8);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar6 = *(int *)(param_1 + 0x60) +
            ((*(int *)(iVar6 + 0x58) - (*(int *)(param_1 + 0x60) + 0x1800)) * 0x18 >> 8);
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x54) =
         iVar4 + (*piVar8 * (int)*(short *)((int)&DAT_080fe64c +
                                           ((uint)((*piVar7 >> 8) << 0x18) >> 0x17)) >> 8);
    *(int *)(param_1 + 0x58) =
         iVar6 + ((int)*(short *)((int)&DAT_080fe64c +
                                 ((uint)(((*piVar7 >> 8) + 0x40) * 0x1000000) >> 0x17)) * *piVar8 >>
                 8);
    sub_080177F4(param_1);
    if (0x7ff < *piVar8) {
      return in_lr;
    }
    goto LAB_080a738c;
  case 10:
    sub_08017700(param_1,0xb116);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0xc0);
      iVar6 = -0x300;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc0);
      iVar6 = 0x300;
    }
    piVar7 = (int *)(param_1 + 0xc0);
    *piVar7 = iVar4 + iVar6;
    piVar8 = (int *)(param_1 + 0xb8);
    *piVar8 = *piVar8 + (*piVar8 * -0x18 >> 8);
    iVar6 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
    iVar4 = *(int *)(param_1 + 0x5c) +
            ((*(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x5c)) * 0x18 >> 8);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar6 = *(int *)(param_1 + 0x60) +
            ((*(int *)(iVar6 + 0x58) - (*(int *)(param_1 + 0x60) + 0x1800)) * 0x18 >> 8);
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x54) =
         iVar4 + (*piVar8 * (int)*(short *)((int)&DAT_080fe64c +
                                           ((uint)((*piVar7 >> 8) << 0x18) >> 0x17)) >> 8);
    *(int *)(param_1 + 0x58) =
         iVar6 + ((int)*(short *)((int)&DAT_080fe64c +
                                 ((uint)(((*piVar7 >> 8) + 0x40) * 0x1000000) >> 0x17)) * *piVar8 >>
                 8);
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
LAB_080a74ce:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  default:
    goto switchD_080a6f32_caseD_c;
  case 0x14:
    sub_08017700(param_1,0xb102);
    *(undefined *)(param_1 + 0x12) = 10;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x15:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
      return in_lr;
    }
    goto LAB_080a74ce;
  }
}

