// sub_080C9784 at 0x080C9784 (thumb)

undefined4 sub_080C9784(int param_1)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    uVar6 = (uint)DAT_0202ebb5;
    if ((DAT_0202ebb5 & 0x40) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08349004,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar6 & 0x40;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    if ((DAT_0202ebb5 & 3) == 3) {
      *(undefined4 *)(param_1 + 0x58) = 0x17c00;
      *(undefined4 *)(param_1 + 0xb4) = 0x17c00;
      *(uint *)(param_1 + 0x68) = (uint)DAT_02000fa0._2_2_;
      sub_080127E4(param_1,0xc302);
      uVar2 = 0xc;
    }
    else {
      sub_080127E4(param_1,0xc300);
      if ((DAT_0202ebb4 & 0x80) == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 10;
      }
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    sub_080128D4(param_1);
    return in_lr;
  case 2:
    sub_080128D4(param_1);
    if (0x3fff < *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54)) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc301);
    break;
  case 3:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0xc300);
    }
    if (*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54) < 0x2001) {
      if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
        return in_lr;
      }
      if (DAT_0202e138 == '\0') {
        return in_lr;
      }
      if (DAT_03003908 != param_1 + 0x74) {
        return in_lr;
      }
      sub_0801B4E4(&DAT_0202ec40,&DAT_083319c0,param_1);
    }
    else {
      sub_080DEF4C(0x200);
      sub_0801B4E4(&DAT_0202ec40,&DAT_083319c0,param_1);
    }
    break;
  case 4:
    sub_080128D4(param_1);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x3cff) {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      sub_080127E4(param_1,0xc300);
    }
    break;
  case 5:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) !=
        0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) {
      sub_080127E4(param_1,0xc309);
    }
    break;
  case 6:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc301);
    break;
  case 7:
    sub_080128D4(param_1);
    bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0xc300);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc306);
    break;
  case 8:
    sub_080128D4(param_1);
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x3cf9) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_080127E4(param_1);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc308);
    break;
  case 9:
    sub_080128D4(param_1);
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x3d00) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_080127E4(param_1);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    DAT_0202ebb4 = DAT_0202ebb4 | 0x80;
    goto LAB_080c9c1a;
  case 10:
    sub_080128D4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
      return in_lr;
    }
    if (DAT_0202e138 == '\0') {
      return in_lr;
    }
    if (DAT_03003908 != param_1 + 0x74) {
      return in_lr;
    }
    bVar1 = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    sub_080DEF4C(0x204);
    break;
  case 0xb:
    sub_080128D4(param_1);
    if (DAT_0202f65a != 0) {
      return in_lr;
    }
LAB_080c9c1a:
    DAT_0202e138 = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    return in_lr;
  case 0xc:
    sub_080128D4(param_1);
    if ((DAT_0202ebb5 & 0x20) != 0) {
      sub_0801B4E4(&DAT_0202ec40,&DAT_08332098,param_1);
      goto LAB_080c9de6;
    }
    if ((DAT_0202ebb5 & 4) == 0) {
      sub_0801B4E4(&DAT_0202ec40,&DAT_08331c60,param_1);
      goto LAB_080c9de6;
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x20000000) == 0) {
      return in_lr;
    }
    if (DAT_0202e138 == '\0') {
      return in_lr;
    }
    if (DAT_03003908 != param_1 + 0x74) {
      return in_lr;
    }
    if ((DAT_0202ebb5 & 8) == 0) {
      sub_080E0E64(&DAT_0202f8e0,0x20400);
    }
    else {
      sub_080E0E64(&DAT_0202f8e0,0x10400);
    }
    break;
  case 0xd:
    sub_080128D4(param_1);
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0xb4) +
         (((uint)DAT_02000fa0._2_2_ - *(int *)(param_1 + 0x68)) + 1) * 0x80;
    if (DAT_0202f8e2 != '\0') {
      return in_lr;
    }
    DAT_0202e138 = DAT_0202f8e2;
    *(undefined *)(param_1 + 0xd) = 0xc;
    return in_lr;
  case 0xe:
    sub_080128D4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 1) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfe;
      sub_080127E4(param_1,0xc303);
      *(undefined *)(param_1 + 0xd) = 0xf;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) != 0) {
      sub_080E0E64(&DAT_0202f8e0,0x20400);
      *(undefined *)(param_1 + 0xd) = 0xd;
    }
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 4) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfb;
      sub_080127E4(param_1,0xc305);
      *(undefined *)(param_1 + 0xd) = 0x10;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0x12;
    return in_lr;
  case 0xf:
    sub_080128D4(param_1);
    if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) {
      return in_lr;
    }
    goto LAB_080c9dde;
  case 0x10:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc304);
    break;
  case 0x11:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
LAB_080c9dde:
    sub_080127E4(param_1,0xc302);
LAB_080c9de6:
    *(undefined *)(param_1 + 0xd) = 0xe;
    return in_lr;
  case 0x12:
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xc302);
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x13:
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08012C04(param_1);
    }
    else {
      sub_08012CD0(param_1);
    }
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != '\0') {
      return in_lr;
    }
    sub_080032EC(0x9b);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 0x14:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 0x15:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffff400;
    break;
  case 0x16:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    iVar7 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
    uVar6 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar6 < 0x3001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  case 0x17:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) != 0) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe;
    }
  default:
    goto switchD_080c9798_caseD_18;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c9798_caseD_18:
  return in_lr;
}

