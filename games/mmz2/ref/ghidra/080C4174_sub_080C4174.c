// sub_080C4174 at 0x080C4174 (thumb)

undefined4 sub_080C4174(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc308);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 1) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfe;
      sub_080127E4(param_1,0xc310);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 2) != 0) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfd;
      sub_080127E4(param_1,0xc310);
    }
    iVar5 = *(int *)(param_1 + 0x18);
    bVar3 = *(byte *)(iVar5 + 9);
    if ((bVar3 & 4) != 0) {
      *(byte *)(iVar5 + 9) = bVar3 & 0xfb;
      sub_080127E4(param_1,0xc30e);
      *(undefined *)(param_1 + 0xd) = 5;
      return in_lr;
    }
    if ((bVar3 & 8) != 0) {
      *(byte *)(iVar5 + 9) = bVar3 & 0xf7;
      sub_080127E4(param_1,0xc313);
      *(undefined *)(param_1 + 0x12) = 0xf;
      *(undefined *)(param_1 + 0xd) = 8;
      return in_lr;
    }
    if ((bVar3 & 0x10) != 0) {
      *(byte *)(iVar5 + 9) = bVar3 & 0xef;
      sub_080127E4(param_1,0xc311);
      *(undefined *)(param_1 + 0xd) = 3;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 0x20) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar1 & 0xdf;
    *(byte *)(param_1 + 0x12) = bVar3 & 8;
    *(undefined *)(param_1 + 0xd) = 0xd;
    return in_lr;
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc311);
    break;
  case 3:
    sub_080128D4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 1) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xfe;
    sub_080127E4(param_1,0xc312);
    break;
  case 4:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    return in_lr;
  case 5:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x69;
    break;
  case 6:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x12) == 'd') {
      uVar4 = sub_080A9FC8(param_1 + 0x54,0,0);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    sub_080127E4(param_1,0xc30f);
    break;
  case 7:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    goto LAB_080c449a;
  case 8:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    iVar5 = sub_08006B84(DAT_0202f088);
    if (iVar5 != 0) {
      *(undefined *)(iVar5 + 0x25) = 0x1e;
      *(undefined *)(iVar5 + 9) = 5;
      *(undefined4 *)(iVar5 + 0x14) = 0x80c22d1;
      *(undefined2 *)(iVar5 + 0x20) = 0;
      *(undefined *)(iVar5 + 0x22) = 0;
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) | 0x10;
      *(undefined *)(iVar5 + 0x1d) = *(undefined *)(iVar5 + 0x1c);
      *(undefined *)(iVar5 + 0x10) = 0x12;
      *(int *)(iVar5 + 0x28) = param_1;
    }
    break;
  case 9:
    sub_080128D4(param_1);
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 0x10) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xef;
    sub_080127E4(param_1,0xc314);
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 10:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      iVar5 = *(int *)(param_1 + 0x54);
      iVar7 = -0x200;
LAB_080c4452:
      *(int *)(param_1 + 0x54) = iVar5 + iVar7;
      return in_lr;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,0xc315);
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 0xb:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      iVar5 = *(int *)(param_1 + 0x54);
      iVar7 = 0x200;
      goto LAB_080c4452;
    }
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 0x40) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xdf;
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 0xbf;
    sub_080127E4(param_1,0xc316);
    *(undefined *)(param_1 + 0x12) = 0xf;
    break;
  case 0xc:
    sub_080128D4(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
LAB_080c449a:
    sub_080127E4(param_1,0xc310);
    *(undefined *)(param_1 + 0xd) = 1;
    return in_lr;
  case 0xd:
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xc310);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0xe:
    sub_080128D4(param_1);
    bVar3 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar3;
    if ((bVar3 & 0x60) == 0) {
      sub_08015518(1,param_1 + 0x54);
      iVar5 = (int)(short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x3f) * 4];
      if (iVar5 < 0) {
        iVar5 = iVar5 + 7;
      }
      sVar6 = (short)(iVar5 >> 3) + 0x100;
    }
    else {
      sVar6 = 0x100;
    }
    *(short *)(param_1 + 0x50) = sVar6;
    *(short *)(param_1 + 0x52) = sVar6;
    bVar3 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar3 & 0x40) == 0) {
      return in_lr;
    }
    *(byte *)(*(int *)(param_1 + 0x18) + 9) = bVar3 & 0xbf;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  case 0xf:
    if (((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) && (*(int *)(param_1 + 0x2c) != 0))
    {
      *(undefined *)(*(int *)(param_1 + 0x2c) + 0x11) = 1;
    }
  default:
    goto switchD_080c4188_caseD_10;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c4188_caseD_10:
  return in_lr;
}

