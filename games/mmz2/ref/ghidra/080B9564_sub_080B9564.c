// sub_080B9564 at 0x080B9564 (thumb)

undefined4 sub_080B9564(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    goto switchD_080b959e_caseD_0;
  case 1:
    goto switchD_080b959e_caseD_1;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08347064 + (uint)*(byte *)(param_1 + 0x12) * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    break;
  default:
    goto switchD_080b959e_caseD_5;
  }
  sub_080128D4(param_1);
  if (1 < (byte)(*(char *)(param_1 + 0x73) - 3U)) {
    return in_lr;
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  if ((*(char *)(param_1 + 0x12) == '\x01') && ((*(byte *)(param_1 + 0x13) & 3) == 0)) {
    sub_080CBD74(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54);
  }
  if (*(byte *)(param_1 + 0x13) < (byte)(&DAT_0834706a)[*(byte *)(param_1 + 0x12)]) {
    return in_lr;
  }
  uVar2 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar2;
  if (2 < (uVar2 & 0xff)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  cVar1 = '\x03';
  goto LAB_080b969e;
switchD_080b959e_caseD_0:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined *)(param_1 + 0x12) = 0x3a;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080b959e_caseD_1:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080b969e:
    *(char *)(param_1 + 0xe) = cVar1;
  }
switchD_080b959e_caseD_5:
  return in_lr;
}

