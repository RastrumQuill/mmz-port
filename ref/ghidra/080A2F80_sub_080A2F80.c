// sub_080A2F80 at 0x080A2F80 (thumb)

undefined4 sub_080A2F80(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0809C930(param_1,2);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5b4c,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    *(undefined4 *)(param_1 + 0x54) = 0;
    break;
  case 2:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,2);
    *(undefined4 *)(param_1 + 0x54) = 0xffffff40;
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 3:
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      sub_0809C980(param_1);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,5);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
    sub_08001EAC(5);
    sub_08001EAC(0x4d);
    *(undefined4 *)(param_1 + 0x54) = 0x400;
    *(undefined *)(param_1 + 0x12) = 2;
    break;
  case 4:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 7 >> 3;
    sub_0809C980(param_1);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    cVar2 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
    *(char *)(param_1 + 0x1e) = cVar2;
    break;
  case 5:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 7 >> 3;
    sub_0809C980(param_1);
    if (*(int *)(param_1 + 0x54) != 0) {
      return in_lr;
    }
    sub_0809C930(param_1,0);
    break;
  case 6:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) == 0) {
      return in_lr;
    }
    sub_0809C930(param_1,3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 7:
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x10) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    sub_0809C930(param_1,2);
    *(undefined4 *)(param_1 + 0x54) = 0x180;
    break;
  case 8:
    sub_0809C980(param_1);
    iVar3 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
    if (iVar3 < 0) {
      *(int *)(param_1 + 0x54) = iVar3 * 7 + 7 >> 3;
      sub_0809C930(param_1,5);
    }
    else if (iVar3 == 0) {
      sub_0809C930(param_1,1);
    }
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      sub_08001EAC(5);
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x20) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    sub_0809C930(param_1,2);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffe80;
    break;
  case 9:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    sub_0809C980(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x40) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x44) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    sub_0809C930(param_1,1);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    break;
  case 10:
    sub_0809C980(param_1);
    if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 1) != 0) {
      sub_08001EAC(5);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    }
    if (*(byte *)(param_1 + 0x12) < 3) {
      return in_lr;
    }
    sub_08001EAC(0x4d);
    sub_0809C930(param_1,4);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffd00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 0xb:
    sub_0809C980(param_1);
    iVar3 = *(int *)(param_1 + 0x58) + 0x40;
    *(int *)(param_1 + 0x58) = iVar3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
    cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c));
    if (cVar2 == '\0') {
      return in_lr;
    }
    uVar4 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = 0;
    break;
  case 0xc:
    sub_0809C980(param_1);
  default:
    goto switchD_080a2f94_caseD_d;
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a2f94_caseD_d:
  return in_lr;
}

