// sub_08025FE4 at 0x08025FE4 (thumb)

undefined4 sub_08025FE4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) != '\0') {
    sub_080261EC(param_1);
    return in_lr;
  }
  if ((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x200) == 0) {
    if ((*(char *)(param_1 + 0xc) != '\0') &&
       (cVar1 = sub_08026444(param_1,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)
                            ), cVar1 != '\0')) {
      if ('\0' < cVar1) {
        sub_0809C368(*(undefined *)(param_1 + 0x11),*(undefined4 *)(param_1 + 0x4c),
                     *(undefined4 *)(param_1 + 0x50),0 < *(int *)(param_1 + 0x54));
      }
      goto LAB_080260b4;
    }
  }
  else {
    sub_080882E4(4,param_1 + 0x4c,~*(uint *)(param_1 + 0x54) >> 0x1f,0);
    sub_08001EAC(4);
    if (*(char *)(param_1 + 0x11) != '\0') {
LAB_080260b4:
      sub_080261EC(param_1);
      return in_lr;
    }
    iVar2 = *(int *)(param_1 + 0x54) * 3;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(int *)(param_1 + 0x54) = -(iVar2 >> 2);
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    iVar2 = -1;
    if (4 < (uVar3 * 2 >> 0x11 & 7)) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x58) = iVar2 * 0x260;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082aa424 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if ((*(byte *)(param_1 + 0x11) != 0) && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_08026580(param_1,*(undefined2 *)
                          (&DAT_082aa1ee +
                          ((uint)*(byte *)(param_1 + 0x12) * 3 + (uint)*(byte *)(param_1 + 0x11)) *
                          4));
  }
  sub_080265C0(param_1);
  return in_lr;
}

