// sub_080C5954 at 0x080C5954 (thumb)

undefined4 sub_080C5954(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_10;
  int local_c;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0x8500);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x11) << 6;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    sub_080C4C90(param_1);
    if ((*(byte *)(param_1 + 0x13) & 0x1f) == 0) {
      local_10 = *(undefined4 *)(param_1 + 0x54);
      local_c = *(int *)(param_1 + 0x58) + 0x800;
      sub_080BC790(&local_10,0,4);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x1e;
    break;
  case 2:
    sub_080128D4(param_1);
    sub_080C4C90(param_1);
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
  case 3:
    sub_080128D4(param_1);
    sub_080C4C90(param_1);
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
  case 4:
    sub_080128D4(param_1);
    sub_080C4C90(param_1);
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
  case 5:
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
    goto switchD_080c596a_caseD_6;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c596a_caseD_6:
  return in_lr;
}

