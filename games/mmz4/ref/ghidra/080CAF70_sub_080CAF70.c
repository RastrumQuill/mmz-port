// sub_080CAF70 at 0x080CAF70 (thumb)

undefined4 sub_080CAF70(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  sub_0801CFF0();
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = -0xc00;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = 0xc00;
    }
    local_10 = local_10 + iVar2;
    local_c = *(undefined4 *)(param_1 + 0x58);
    if (*(byte *)(param_1 + 0x13) < 0x12) {
      sub_080CACD8(&local_10,0,*(undefined *)(param_1 + 0x11),*(byte *)(param_1 + 0x13) + 1);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_08005784(param_1 + 0x74,
               &DAT_08862f6c + (uint)(byte)(&DAT_08862fe4)[*(char *)(param_1 + 0x71)] * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CAD94(param_1);
  }
  return in_lr;
}

