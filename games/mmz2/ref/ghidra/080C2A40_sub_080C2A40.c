// sub_080C2A40 at 0x080C2A40 (thumb)

undefined4 sub_080C2A40(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x11) != '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    sub_080BF834(param_1);
    return in_lr;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08348db0 + (uint)*(byte *)(param_1 + 0x11) * 4));
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 0x41) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x5c) +
           (0x100 - (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)]) * 0x80;
    }
    if (*(byte *)(param_1 + 0x12) < 0x49) goto switchD_080c2a68_caseD_5;
    break;
  case 2:
    sub_080128D4(param_1);
    if (0x40 < *(byte *)(param_1 + 0x12)) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
      goto switchD_080c2a68_caseD_5;
    }
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08348db2 + (uint)*(byte *)(param_1 + 0x11) * 4));
    break;
  case 3:
    sub_080128D4(param_1);
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 9) & 1) == 0)
    goto switchD_080c2a68_caseD_5;
    if (*(char *)(param_1 + 0x11) == '\x01') {
      sub_080127E4(param_1,0x4002);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x3000;
    }
    break;
  case 4:
    sub_080128D4(param_1);
  default:
    goto switchD_080c2a68_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c2a68_caseD_5:
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x60) +
       ((short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)] + -0x100) * 0x40;
  return in_lr;
}

