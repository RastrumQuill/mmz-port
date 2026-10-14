// sub_080C4D70 at 0x080C4D70 (thumb)

undefined4 sub_080C4D70(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 4);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0xc317);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080c4d88_caseD_6;
    sub_080127E4(param_1,0xc318);
    break;
  case 2:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080c4d88_caseD_6;
    *(undefined *)(param_1 + 0x12) = 0xff;
    break;
  case 3:
    if ((*(char *)(param_1 + 0x12) < '\0') || ((*(byte *)(param_1 + 0x12) & 1) == 0)) {
      sub_080126A0(param_1);
      sub_080127D0(param_1);
      sub_080127E4(param_1,0xc318);
      sub_080128D4(param_1);
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        sub_08012CD0(param_1);
      }
      else {
        sub_08012C64(param_1);
      }
      sVar1 = (ushort)*(byte *)(param_1 + 0x12) + (*(byte *)(param_1 + 0x12) & 1) * -0x40;
      *(short *)(param_1 + 0x50) = sVar1;
      *(short *)(param_1 + 0x52) = sVar1;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      goto switchD_080c4d88_caseD_6;
    }
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0x9002);
    sub_080128D4(param_1);
    sVar1 = (0x80 - (ushort)*(byte *)(param_1 + 0x12)) * 4;
    *(short *)(param_1 + 0x50) = sVar1;
    *(short *)(param_1 + 0x52) = sVar1;
    bVar2 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (0x3f < bVar2) goto switchD_080c4d88_caseD_6;
    *(int *)(param_1 + 0x40) = param_1 + 100;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 8;
    break;
  case 4:
    sub_080128D4(param_1);
    if (0x1b000 < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x30;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 4) == 0) goto switchD_080c4d88_caseD_6;
    *(undefined4 *)(param_1 + 0x5c) = 0x20;
    break;
  case 5:
    iVar3 = *(int *)(iVar5 + 0x58);
    iVar4 = *(int *)(iVar5 + 0x54) + 0x1400;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 8) != 0) {
      iVar4 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) >> 3);
      *(int *)(param_1 + 0x5c) = iVar4;
      iVar4 = *(int *)(iVar5 + 0x54) - (iVar4 + -0x1400);
      if (iVar4 < 0x1e000) {
        iVar4 = 0x1e000;
        *(undefined4 *)(param_1 + 0x5c) = 0x1e000;
      }
    }
    iVar5 = iVar4 - *(int *)(param_1 + 0x54);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) * 0x1f + iVar4 >> 5;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) * 0x1f + ((iVar3 + -0x3000) - (iVar5 >> 1)) >> 5;
    sub_080128D4(param_1);
  default:
    goto switchD_080c4d88_caseD_6;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c4d88_caseD_6:
  if (3 < *(byte *)(param_1 + 0xd)) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 0x54) +
         (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff] * 4;
    *(int *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x58) +
         (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x7f) * 2] * -2;
  }
  return in_lr;
}

