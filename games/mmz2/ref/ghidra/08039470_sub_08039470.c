// sub_08039470 at 0x08039470 (thumb)

undefined4 sub_08039470(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8);
    sub_080396AC(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
    if ((*(char *)(param_1 + 0xc) != '\0') &&
       (cVar1 = sub_08039954(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)
                            ), cVar1 != '\0')) {
      if ('\0' < cVar1) {
        sub_080AD254(*(undefined *)(param_1 + 0x11),*(undefined4 *)(param_1 + 0x54),
                     *(undefined4 *)(param_1 + 0x58),0 < *(int *)(param_1 + 0x5c));
      }
      goto LAB_08039544;
    }
  }
  else {
    sub_080AC670(4,param_1 + 0x54,~*(uint *)(param_1 + 0x5c) >> 0x1f,0);
    sub_080032EC(0x2b);
    if (*(char *)(param_1 + 0x11) != '\0') {
LAB_08039544:
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080396AC(param_1);
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x5c) * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(int *)(param_1 + 0x5c) = -(iVar2 >> 2);
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    iVar2 = -1;
    if (4 < (uVar3 * 2 >> 0x11 & 7)) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x60) = iVar2 * 0x260;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083363ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  if ((*(byte *)(param_1 + 0x11) != 0) && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_080127E4(param_1,*(undefined2 *)
                          (&DAT_083360ea +
                          ((uint)*(byte *)(param_1 + 0x12) * 3 + (uint)*(byte *)(param_1 + 0x11)) *
                          4));
  }
  sub_08012A14(param_1);
  return in_lr;
}

