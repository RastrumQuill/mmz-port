// sub_080C9514 at 0x080C9514 (thumb)

undefined4 sub_080C9514(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if (((*(char *)(param_1 + 0x11) == '\0') && ((DAT_0202ebb5 & 1) == 0)) ||
       (uVar3 = (uint)DAT_0202ebb5, (DAT_0202ebb5 & 0x40) != 0)) {
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
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08348fd4,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(uint *)(param_1 + 0x98) = uVar3 & 0x40;
    uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0xe00;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,0xc403);
    }
    else {
      sub_080127E4(param_1,0xc405);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x11) != '\0') {
      return in_lr;
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
    if ((*(uint *)(DAT_0202ebf0 + 0x14) & 0x6c) == 0x6c) {
      DAT_0202ebb5 = DAT_0202ebb5 | 0x20;
    }
    sub_080032EC(0x9e);
    sub_080127E4(param_1,0xc404);
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      sub_080032EC(0xa0);
    }
    else {
      sub_080032EC(0x9f);
    }
    sub_080E0E64(&DAT_0202f8e0,0x30400);
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 3:
    sub_080128D4(param_1);
    if (DAT_0202f8e2 != '\0') {
      return in_lr;
    }
    DAT_0202e138 = DAT_0202f8e2;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    break;
  case 4:
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
    sub_080E0E64(&DAT_0202f8e0,0x30400);
    cVar1 = '\x03';
    break;
  default:
    goto switchD_080c9528_caseD_5;
  }
  *(char *)(param_1 + 0xd) = cVar1;
switchD_080c9528_caseD_5:
  return in_lr;
}

