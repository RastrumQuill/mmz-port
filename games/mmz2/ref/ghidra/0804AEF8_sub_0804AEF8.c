// sub_0804AEF8 at 0x0804AEF8 (thumb)

undefined4 sub_0804AEF8(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080126A0(param_1);
      sub_080127D0(param_1);
      sub_080127E4(param_1,0xa100);
      sub_08012CD0(param_1);
      *(undefined2 *)(param_1 + 0x50) = 0x30;
      *(undefined2 *)(param_1 + 0x52) = 0x180;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xf000;
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xf) = 4;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
    if (sVar2 == 0) {
      return in_lr;
    }
    sub_080032EC(0x9b);
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    break;
  case 1:
    sub_080128D4(param_1);
    uVar1 = *(ushort *)(param_1 + 0x52);
    if (0x100 < uVar1) {
      *(ushort *)(param_1 + 0x52) = uVar1 - 0x40;
      return in_lr;
    }
    break;
  case 2:
    sub_080128D4(param_1);
    puVar4 = (ushort *)(param_1 + 0x50);
    if (*puVar4 < 0x100) {
      *puVar4 = *puVar4 + 0x40;
      return in_lr;
    }
    *puVar4 = 0x100;
    break;
  case 3:
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa100);
    sub_08012C04(param_1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 4:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    return in_lr;
  default:
    return in_lr;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

