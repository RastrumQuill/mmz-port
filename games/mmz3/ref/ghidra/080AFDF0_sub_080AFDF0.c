// sub_080AFDF0 at 0x080AFDF0 (thumb)

undefined4 sub_080AFDF0(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 in_lr;
  int local_1c;
  
  if ((*(byte *)(param_1 + 0xe) < 10) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined *)(param_1 + 0xe) = 10;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_0800736C(param_1 + 0x74,&DAT_08369e04,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined *)(param_1 + 0x25) = 0x11;
    sub_08017700(param_1,0xb901);
    sub_080AF95C(param_1,param_1 + 0x54,2);
    sub_0800471C(0x132);
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 100) = iVar5;
    *(int *)(param_1 + 0x54) = iVar5;
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = iVar5;
    *(int *)(param_1 + 0x58) = iVar5;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(char *)(param_1 + 0x13) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == '\0')) {
      iVar6 = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
      iVar5 = *(int *)(DAT_0202f5c0 + 0x58) - (*(int *)(param_1 + 0x58) + 0x500);
      if ((iVar6 == 0) && (iVar5 == 0)) {
        iVar5 = 0x100;
        local_1c = 0x100;
      }
      else {
        uVar4 = sub_080FE124(iVar6 * iVar6 + iVar5 * iVar5);
        local_1c = FUN_080fe2f8(iVar6 * 0x100,uVar4);
        iVar5 = FUN_080fe2f8(iVar5 * 0x100,uVar4);
      }
      *(int *)(param_1 + 0x5c) = local_1c * 0x140 >> 8;
      if (iVar5 < 0) {
        iVar5 = iVar5 * 3;
      }
      else {
        iVar5 = iVar5 * 5;
      }
      *(int *)(param_1 + 0x60) = (iVar5 << 6) >> 8;
      *(undefined *)(param_1 + 0x13) = 0x18;
    }
    if ((*(byte *)(DAT_0202f5c0 + 10) & 1) == 0) {
      *(undefined *)(param_1 + 0x13) = 0x18;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
      if ((*(char *)(param_1 + 0x12) == '\0') ||
         (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))
      {
        *(undefined *)(param_1 + 0xe) = 10;
      }
    }
    else {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    uVar10 = 0;
    iVar5 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58);
    if ((iVar5 == 0) && (iVar6 == 0)) {
      iVar8 = 0x100;
      iVar5 = 0;
    }
    else {
      uVar10 = sub_080FE124(iVar5 * iVar5 + iVar6 * iVar6);
      uVar10 = uVar10 & 0xffff;
      iVar8 = FUN_080fe2f8(iVar5 * 0x100,uVar10);
      iVar5 = FUN_080fe2f8(iVar6 * 0x100,uVar10);
    }
    *(int *)(param_1 + 0x5c) = (iVar8 << 8) >> 8;
    *(int *)(param_1 + 0x60) = (iVar5 << 8) >> 8;
    *(uint *)(param_1 + 100) = uVar10;
    *(undefined4 *)(param_1 + 0x68) = 0x100;
    iVar5 = DAT_0202f5c0;
    *(int *)(param_1 + 0xb4) = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0xb8) = *(int *)(iVar5 + 0x58) - *(int *)(param_1 + 0x58);
    sub_08007390(param_1 + 0x74,&DAT_08369e1c);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar8 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar8;
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    iVar5 = DAT_0202f5c0;
    if (iVar6 < DAT_020302c4 + 0x27ff) {
      piVar9 = (int *)(param_1 + 0xb4);
      *piVar9 = *piVar9 + (*piVar9 * -0x10 >> 8);
      piVar7 = (int *)(param_1 + 0xb8);
      *piVar7 = *piVar7 + ((0x1000 - *piVar7) * 0x10 >> 8);
      iVar5 = DAT_0202f5c0;
      *(int *)(DAT_0202f5c0 + 0x54) = *(int *)(param_1 + 0x54) + *piVar9;
      *(int *)(iVar5 + 0x58) = *(int *)(param_1 + 0x58) + *piVar7;
    }
    else {
      *(int *)(DAT_0202f5c0 + 0x54) = iVar8 + *(int *)(param_1 + 0xb4);
      *(int *)(iVar5 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0xb8);
    }
    sub_080177F4(param_1);
    iVar5 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 100) = iVar5;
    if (iVar5 < 1) {
      sub_08007390(param_1 + 0x74,&DAT_08369e34);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
LAB_080b0162:
      if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
        *(undefined *)(param_1 + 0xe) = 0xf;
      }
    }
    break;
  case 4:
    piVar9 = (int *)(param_1 + 0xb4);
    *piVar9 = *piVar9 + (*piVar9 * -0x10 >> 8);
    piVar7 = (int *)(param_1 + 0xb8);
    *piVar7 = *piVar7 + ((0x1000 - *piVar7) * 0x10 >> 8);
    iVar5 = DAT_0202f5c0;
    *(int *)(DAT_0202f5c0 + 0x54) = *(int *)(param_1 + 0x54) + *piVar9;
    *(int *)(iVar5 + 0x58) = *(int *)(param_1 + 0x58) + *piVar7;
    sub_080177F4(param_1);
    goto LAB_080b0162;
  default:
    break;
  case 10:
    *(undefined *)(param_1 + 0x12) = 0x1a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sub_080177F4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
      iVar5 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
      if (iVar5 != 0) {
        if (*(char *)(param_1 + 0x12) != '\0') {
          bVar2 = *(char *)(param_1 + 0x12) - 1;
          *(byte *)(param_1 + 0x12) = bVar2;
LAB_080b0224:
          if (bVar2 != 0) {
            return in_lr;
          }
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
      }
    }
    else {
      *(undefined *)(param_1 + 0xe) = 2;
    }
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0x10:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    if ((bVar2 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    goto LAB_080b0224;
  }
  return in_lr;
}

