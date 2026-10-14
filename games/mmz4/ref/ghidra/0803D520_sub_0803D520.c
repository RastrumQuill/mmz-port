// sub_0803D520 at 0x0803D520 (thumb)

undefined4 sub_0803D520(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0xb4);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  if (*(byte *)(iVar3 + 0x14e) == 0xff) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_0803d620;
  }
  if (*(char *)(param_1 + 0xc4) == '\0') {
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      sub_08005784(param_1 + 0x74,
                   &DAT_08851bb4 + (uint)(byte)(&DAT_08851d00)[*(byte *)(iVar3 + 0xc3)] * 0x18);
    }
    if (*(char *)(param_1 + 0xc3) != '\0') {
      if (*(char *)(param_1 + 0xc3) == '\x02') {
        sub_080D17D8(param_1 + 100,6,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_08002B10(0x2b);
        sub_0801CF00(param_1,*(short *)(&DAT_08851b78 + (uint)*(byte *)(iVar3 + 0xc3) * 2) + 1);
      }
      cVar1 = *(char *)(param_1 + 0xc3) + -1;
      *(char *)(param_1 + 0xc3) = cVar1;
      if (cVar1 == '\0') {
        sub_0801CF00(param_1,*(undefined2 *)(&DAT_08851b78 + (uint)*(byte *)(iVar3 + 0xc3) * 2));
      }
    }
    sub_0801CFF0(param_1);
    sub_08128884(param_1,*(undefined4 *)(&DAT_08851b68 + (uint)*(byte *)(iVar3 + 0x14e) * 4));
    *(undefined *)(param_1 + 0xc1) = 0;
    return in_lr;
  }
  if (*(char *)(iVar3 + 0xc3) == '\x02') {
    sub_0804694C(iVar3,param_1,0);
    sub_0804694C(iVar3,param_1,0x2b);
    sub_0804694C(iVar3,param_1,0x56);
    sub_0804694C(iVar3,param_1,0x80);
    sub_0804694C(iVar3,param_1,0xaa);
    sub_0804694C(iVar3,param_1,0xd5);
  }
  if (*(byte *)(iVar3 + 0xc0) < 3) {
    if (2 < *(byte *)(iVar3 + 0xc1)) {
      *(undefined *)(iVar3 + 0xc1) = 2;
      goto LAB_0803d5d6;
    }
  }
  else {
    *(undefined *)(iVar3 + 0xc0) = 2;
LAB_0803d5d6:
    pcVar2 = (char *)(iVar3 + 0xf8);
    cVar1 = *pcVar2;
    if (cVar1 != '\x02') {
      pcVar2 = (char *)(iVar3 + 0xf9);
      cVar1 = *pcVar2;
      if (cVar1 != '\x02') goto LAB_0803d5ec;
    }
    *pcVar2 = cVar1;
  }
LAB_0803d5ec:
  *(undefined *)(iVar3 + 0xfa) = 2;
  *(undefined *)(iVar3 + 0xe6) = 0;
  sub_080D0894(1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
LAB_0803d620:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

