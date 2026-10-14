// sub_080EDBF0 at 0x080EDBF0 (thumb)

undefined4 sub_080EDBF0(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined *)(param_1 + 0x25) = 0x10;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_0801CF00(param_1,0x804);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar3 = sub_08008534(*(int *)(param_1 + 0x54) + 0xf000,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + -0x5000;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 1;
    break;
  case 2:
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08866670;
    *(undefined2 *)(param_1 + 0x26) = 1;
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0xfffffff8;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 2;
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x54) + -0x100;
    *(int *)(param_1 + 0x54) = iVar3;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) != 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x13) = 0;
      *(int *)(param_1 + 100) = iVar3;
    }
    goto switchD_080edc04_caseD_b;
  case 5:
    cVar4 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar4 + '\x02';
    iVar3 = (int)((uint)(ushort)(&DAT_08128c10)[*(byte *)(param_1 + 0x13)] << 0x10) >> 0x11;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    if (cVar4 == -2) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    }
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 8;
    break;
  case 6:
    cVar4 = *(char *)(param_1 + 0x13) + '\x02';
    *(char *)(param_1 + 0x13) = cVar4;
    iVar3 = (int)((uint)(ushort)(&DAT_08128c10)[*(byte *)(param_1 + 0x13)] << 0x10) >> 0x11;
    *(int *)(param_1 + 0x5c) = iVar3;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
    if ((cVar4 != '@') && (cVar4 != -0x40)) goto switchD_080edc04_caseD_b;
    *(undefined4 *)(param_1 + 100) = 0x10;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    goto LAB_080eddce;
  case 7:
    if (*(int *)(param_1 + 0x5c) < 0x300) {
      iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    }
    else {
      iVar3 = 0x300;
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < 0x14001) goto switchD_080edc04_caseD_b;
    *(undefined4 *)(param_1 + 0x54) = 0x14000;
    goto LAB_080eddce;
  case 8:
    iVar3 = *(int *)(param_1 + 0x5c);
    if (iVar3 < 1) {
      *(byte *)(*(int *)(param_1 + 0x18) + 9) = *(byte *)(*(int *)(param_1 + 0x18) + 9) | 0x10;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
LAB_080edde0:
      *(int *)(param_1 + 0x5c) = iVar3 + -0x10;
    }
    goto LAB_080edde4;
  case 9:
    bVar2 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    bVar1 = 0x20;
    break;
  case 10:
    iVar3 = *(int *)(param_1 + 0x5c);
    if (-0x300 < iVar3) goto LAB_080edde0;
LAB_080edde4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  default:
    goto switchD_080edc04_caseD_b;
  case 0x10:
    *(undefined *)(param_1 + 0x25) = 0x10;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_0801CF00(param_1,0x804);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_08866670;
    *(undefined2 *)(param_1 + 0x26) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 0x11:
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + -0xa000;
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
      sub_080E8F60(param_1);
    }
    goto switchD_080edc04_caseD_b;
  }
  if ((bVar1 & bVar2) != 0) {
LAB_080eddce:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
switchD_080edc04_caseD_b:
  sub_0801CFF0(param_1);
  if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (bVar2 < 6) {
      sub_0801CF00(param_1,0x804);
    }
    else {
      sub_0801CF00(param_1,0x805);
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  return in_lr;
}

