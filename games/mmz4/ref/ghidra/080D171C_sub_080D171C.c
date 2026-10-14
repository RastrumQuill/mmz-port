// sub_080D171C at 0x080D171C (thumb)

undefined4 sub_080D171C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
LAB_080d1762:
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_080d1798;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080d1798;
      sub_0801CF00(param_1,0xf00);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      goto LAB_080d1762;
    }
    if (bVar1 == 2) {
      *(undefined *)(param_1 + 0x12) = 2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else if (bVar1 != 3) goto LAB_080d1798;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto LAB_080d1798;
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_080d1798:
  if ((*(char *)(param_1 + 0x11) != '\0') && (*(char *)(param_1 + 0x13) == 'l')) {
    sub_080D15B4(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),0);
  }
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

