// sub_0806D01C at 0x0806D01C (thumb)

undefined4 sub_0806D01C(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  cVar1 = sub_08009038(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x1800);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
LAB_0806d0ae:
    sub_0806D4CC(param_1);
    return in_lr;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (1 < *(byte *)(*(int *)(param_1 + 0x2c) + 0xc))) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') goto LAB_0806d0ae;
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') goto LAB_0806d0ae;
  uVar3 = *(uint *)(param_1 + 0x8c);
  if ((uVar3 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806CEA8(param_1);
    return in_lr;
  }
  piVar4 = (int *)(param_1 + 0xb4);
  if ((*(char *)(param_1 + 0xd) != '\b') && ((uVar3 & 1) != 0)) {
    if (*piVar4 != 0) goto LAB_0806d11a;
    iVar2 = sub_080253D8(0,param_1,&DAT_08362e68);
    *piVar4 = iVar2;
    if (iVar2 == 0) goto LAB_0806d144;
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*piVar4 == 0) {
LAB_0806d144:
    sub_08007390(param_1 + 0x74,&DAT_08362e70);
    iVar2 = sub_08063614(param_1);
    if (iVar2 != 0) {
      return in_lr;
    }
    if (((*(char *)(param_1 + 0xbf) == '\0') && (*(char *)(param_1 + 0xd) != '\0')) &&
       (*(int *)(param_1 + 0x2c) == 0)) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362e34 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080177F4(param_1);
    return in_lr;
  }
LAB_0806d11a:
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08362e34 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_08007390(param_1 + 0x74,&DAT_08362e88);
  return in_lr;
}

