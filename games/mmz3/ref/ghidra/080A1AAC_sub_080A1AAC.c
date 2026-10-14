// sub_080A1AAC at 0x080A1AAC (thumb)

undefined4 sub_080A1AAC(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0xb5) == '\x01') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0x13) = 1;
      *(undefined *)(param_1 + 0xe) = 3;
      return in_lr;
    }
    sub_08017700(param_1,0xa903);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100;
    *(undefined4 *)(param_1 + 0x60) = 0x380;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    break;
  case 1:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    local_18 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000);
    if (local_18 == 0) {
      return in_lr;
    }
    local_18 = *(int *)(param_1 + 0x58) + local_18;
    *(int *)(param_1 + 0x58) = local_18;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    sub_080BD904(param_1,&local_1c,0,1);
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
    bVar1 = *(byte *)(param_1 + 10);
    bVar3 = 0xfe;
    goto LAB_080a1d14;
  case 2:
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0')) {
      return in_lr;
    }
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    sub_080A0FB8(*(undefined4 *)(param_1 + 0x28),&local_14,1);
    bVar3 = *(byte *)(param_1 + 10) | 1;
    goto LAB_080a1d16;
  case 3:
    sub_08017700(param_1,0xa905);
    sub_08007390(param_1 + 0x74,&DAT_08367a8c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
    if (*(char *)(param_1 + 0x13) == '\x01') {
      uVar4 = 0x300;
    }
    else {
      uVar4 = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    uVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 100) = iVar5;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if ((0x1400 < iVar5) && (*(char *)(param_1 + 0x12) == '\0')) {
      *(undefined *)(param_1 + 0x12) = 1;
      iVar5 = sub_080A1014(param_1,param_1 + 0x54,0);
      *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    }
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x13) == '\x01') {
      iVar5 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x400,*(undefined4 *)(param_1 + 0x58));
    }
    else {
      iVar5 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x400,*(undefined4 *)(param_1 + 0x58));
    }
    if (iVar5 == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
    break;
  case 5:
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    uVar6 = (uint)(*(int *)(param_1 + 0x58) < DAT_020302c4 + -0x5000);
    if (uVar6 == 0) {
      return in_lr;
    }
    *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + uVar6;
    *(undefined4 *)(param_1 + 100) = 0xff;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    bVar3 = 0xfb;
LAB_080a1d14:
    bVar3 = bVar3 & bVar1;
LAB_080a1d16:
    *(byte *)(param_1 + 10) = bVar3;
    break;
  case 6:
    sub_080177F4(param_1);
    *(short *)(param_1 + 0x50) = (short)*(undefined4 *)(param_1 + 100);
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 100);
    if (0 < *(int *)(param_1 + 100)) {
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -0x20;
    }
    if (*(int *)(param_1 + 100) < 0x21) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  default:
    goto switchD_080a1ae2_caseD_7;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a1ae2_caseD_7:
  return in_lr;
}

