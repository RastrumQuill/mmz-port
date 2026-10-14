// sub_080C826C at 0x080C826C (thumb)

undefined4 sub_080C826C(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0x8500);
    sub_080128D4(param_1);
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x11) << 6;
    *(undefined *)(param_1 + 0x13) = 0x10;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
      uVar2 = *(undefined4 *)(iVar5 + 0x54);
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined4 *)(param_1 + 0x54) = uVar2;
      iVar5 = *(int *)(iVar5 + 0x58) + -0x1e00;
      *(int *)(param_1 + 0x68) = iVar5;
      *(int *)(param_1 + 0x58) = iVar5;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xd) = 5;
      goto switchD_080c8286_caseD_4;
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = -0x1400;
    }
    else {
      iVar3 = 0x1400;
    }
    iVar3 = *(int *)(iVar5 + 0x54) + iVar3;
    *(int *)(param_1 + 100) = iVar3;
    *(int *)(param_1 + 0x54) = iVar3;
    iVar5 = *(int *)(iVar5 + 0x58) + -0x3000;
    *(int *)(param_1 + 0x68) = iVar5;
    *(int *)(param_1 + 0x58) = iVar5;
    break;
  case 1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = *(int *)(iVar5 + 0x54) + -0x1400;
    }
    else {
      iVar3 = *(int *)(iVar5 + 0x54) + 0x1400;
    }
    iVar6 = *(int *)(iVar5 + 0x58) + -0x3000;
    iVar5 = *(int *)(param_1 + 0x54);
    if (iVar5 < iVar3) {
      iVar5 = iVar5 + 0x80;
LAB_080c835a:
      *(int *)(param_1 + 0x54) = iVar5;
    }
    else if (iVar3 < iVar5) {
      iVar5 = iVar5 + -0x80;
      goto LAB_080c835a;
    }
    iVar5 = *(int *)(param_1 + 0x58);
    if (iVar5 < iVar6) {
      iVar5 = iVar5 + 0x80;
LAB_080c836c:
      *(int *)(param_1 + 0x58) = iVar5;
    }
    else if (iVar6 < iVar5) {
      iVar5 = iVar5 + -0x80;
      goto LAB_080c836c;
    }
    if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
      local_2c = *(undefined4 *)(param_1 + 100);
      local_28 = *(int *)(param_1 + 0x68) + 0x800;
      sub_080BC790(&local_2c,0,4);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080c8286_caseD_4;
    *(undefined4 *)(param_1 + 0x60) = 0x1200;
    *(undefined *)(param_1 + 0xe) = 0;
    break;
  case 2:
    sub_080128D4(param_1);
    iVar3 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0xe)];
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = -iVar3;
    }
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar5 + 0x54) + ((*(int *)(param_1 + 0x60) + 2) * iVar3 >> 8);
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = (*(int *)(iVar5 + 0x58) - iVar3) + -0x1e00;
    *(char *)(param_1 + 0xe) = (char)(0x4000 - iVar3 >> 10) + *(char *)(param_1 + 0xe);
    iVar3 = iVar3 + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    uVar1 = sub_080EF150(iVar3,0x300);
    *(undefined *)(param_1 + 0x13) = uVar1;
    if (0x3fff < iVar3) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
      local_24 = *(undefined4 *)(param_1 + 100);
      local_20 = *(int *)(param_1 + 0x68) + 0x800;
      sub_080BC790(&local_24,0,4);
    }
    goto switchD_080c8286_caseD_4;
  case 3:
    sub_080128D4(param_1);
    iVar3 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0xe)];
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = -iVar3;
    }
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar5 + 0x54) + ((*(int *)(param_1 + 0x60) + 2) * iVar3 >> 8);
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = (*(int *)(iVar5 + 0x58) - iVar3) + -0x1e00;
    *(char *)(param_1 + 0xe) = (char)(0x4000 - iVar3 >> 10) + *(char *)(param_1 + 0xe);
    iVar3 = iVar3 + -0x80;
    *(int *)(param_1 + 0x60) = iVar3;
    uVar1 = sub_080EF150(iVar3,0x300);
    *(undefined *)(param_1 + 0x13) = uVar1;
    if (0 < iVar3) goto switchD_080c8286_caseD_4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080c8286_caseD_4;
  case 5:
    sub_080128D4(param_1);
    iVar3 = (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0xe)];
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar3 = -iVar3;
    }
    *(int *)(param_1 + 0x54) =
         *(int *)(iVar5 + 0x54) + ((*(int *)(param_1 + 0x60) + 2) * iVar3 >> 8);
    iVar3 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = (*(int *)(iVar5 + 0x58) - iVar3) + -0x1e00;
    *(char *)(param_1 + 0xe) = (char)(0x4000 - (iVar3 >> 1) >> 10) + *(char *)(param_1 + 0xe);
    iVar3 = iVar3 + 0x80;
    *(int *)(param_1 + 0x60) = iVar3;
    uVar1 = sub_080EF150(iVar3,0x300);
    *(undefined *)(param_1 + 0x13) = uVar1;
    if (0x7fff < iVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
      local_1c = *(undefined4 *)(param_1 + 100);
      local_18 = *(int *)(param_1 + 0x68) + 0x800;
      sub_080BC790(&local_1c,0,4);
    }
    goto switchD_080c8286_caseD_4;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c8286_caseD_4:
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  uVar4 = (uint)*(byte *)(param_1 + 0x13) << 0x18;
  iVar5 = *(int *)(param_1 + 100) * 7 +
          *(int *)(param_1 + 0x54) +
          (uVar4 >> 0x19) * (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 7;
  }
  *(int *)(param_1 + 100) = iVar5 >> 3;
  iVar5 = *(int *)(param_1 + 0x68) * 7 +
          (*(int *)(param_1 + 0x58) -
          (uVar4 >> 0x1a) * (int)(short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x7f) * 2]);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 7;
  }
  *(int *)(param_1 + 0x68) = iVar5 >> 3;
  return in_lr;
}

