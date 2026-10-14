// sub_080C67B8 at 0x080C67B8 (thumb)

undefined4 sub_080C67B8(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202e6cc = 0x210;
    DAT_0202e4cc = 6;
    sub_08002638(&DAT_08433958,0x10200);
    sub_08002AEC(&DAT_08433964,(DAT_0202e4cc - 4) * 0x20 + 0x200);
    sub_080127E4(param_1,0x9e00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    iVar3 = *(int *)(param_1 + 0x54) + 0x140;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 <= *(int *)(param_1 + 100)) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
    break;
  case 2:
    DAT_0202e5ee = 0x210;
    DAT_0202e3ee = 6;
    sub_080027AC(&DAT_084330ac,0xd800);
    sub_08002AEC(&DAT_084330b8,(DAT_0202e3ee - 7) * 0x20 + 0x200);
    sub_080127E4(param_1,0x2f00);
    *(undefined *)(param_1 + 0x12) = 0xf;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sub_080128D4(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_080127E4(param_1,0x2f01);
    break;
  case 4:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    break;
  case 5:
    sub_080126A0(param_1);
    sub_080127E4(param_1,0x2f01);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0x12) = 0x1e;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 6:
    sub_080128D4(param_1);
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      sub_08012C04(param_1);
    }
    else {
      sub_08012CD0(param_1);
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_080032EC(0x9b);
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 7:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 8:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * 0x40 + 0x20;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * -0x20 + 0x160;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xfffff400;
    break;
  case 9:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x20;
    iVar3 = *(int *)(param_1 + 0x60) + -0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar2 < 0x3001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080c67cc_caseD_a;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c67cc_caseD_a:
  return in_lr;
}

