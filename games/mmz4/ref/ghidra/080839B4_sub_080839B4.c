// sub_080839B4 at 0x080839B4 (thumb)

undefined4 sub_080839B4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  cVar1 = sub_08007098(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1800);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\x01') {
LAB_08083a2a:
    sub_08083ED8(param_1);
    return in_lr;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc))) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (cVar1 == '\x01') goto LAB_08083a2a;
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08083880(param_1);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xb4);
  if ((cVar1 != '\b') && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if (*piVar3 != 0) goto LAB_08083a92;
    iVar2 = sub_0802AD94(0,param_1,&DAT_0885b460);
    *piVar3 = iVar2;
    if (iVar2 == 0) goto LAB_08083abc;
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*piVar3 == 0) {
LAB_08083abc:
    sub_08005784(param_1 + 0x74,&DAT_0885b468);
    iVar2 = sub_0807F824(param_1);
    if (iVar2 != 0) {
      return in_lr;
    }
    if (((*(char *)(param_1 + 0xbf) == '\0') && (*(char *)(param_1 + 0xd) != '\0')) &&
       (*(int *)(param_1 + 0x2c) == 0)) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885b42c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_0801CFF0(param_1);
    return in_lr;
  }
LAB_08083a92:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885b42c + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08005784(param_1 + 0x74,&DAT_0885b480);
  return in_lr;
}

