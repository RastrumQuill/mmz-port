// sub_080C6568 at 0x080C6568 (thumb)

undefined4 sub_080C6568(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08348dd6 + (uint)*(byte *)(param_1 + 0x11) * 2));
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08348ddc + (uint)*(byte *)(param_1 + 0x11) * 2));
    break;
  case 2:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 3:
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
    *(undefined *)(param_1 + 0x12) = 8;
    break;
  case 4:
    sub_080128D4(param_1);
    sub_08012CD0(param_1);
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x12) * -4 + 0x120;
    *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x12) * 4 + 0xe0;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    sub_080032EC(0x9b);
    *(undefined *)(param_1 + 0x12) = 4;
    break;
  case 5:
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
  case 6:
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
    goto switchD_080c657c_caseD_7;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c657c_caseD_7:
  return in_lr;
}

