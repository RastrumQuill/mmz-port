// sub_0808EB6C at 0x0808EB6C (thumb)

undefined4 sub_0808EB6C(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined *)(param_1 + 0xb8) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_0885c69c +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_0885ca70 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0x3900) * 4)) *
               0x18);
  if ((*(char *)(param_1 + 0xbb) != '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0808FA0C(param_1);
    *(char *)(param_1 + 0xbb) = '\0';
  }
  iVar2 = sub_0808F8E8(param_1);
  iVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if ((iVar3 == 0) && (uVar4 != *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54))) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else if ((iVar2 == 0) && (*(char *)(param_1 + 0x73) == '\x03')) {
    iVar2 = (uVar4 * 2 + -1) * 0x2000;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = iVar2 + -0x400;
    }
    else {
      iVar2 = iVar2 + 0x400;
    }
    if ((*(int *)(DAT_0202dbf0 + 0x54) - (*(int *)(param_1 + 0x54) + iVar2)) + 0x2000U < 0x4001) {
      if ((*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x3200U < 0x8001) {
        if (*(int *)(DAT_0202dbf0 + 0x58) + -0x1000 < *(int *)(param_1 + 0x58)) {
          uVar1 = 2;
        }
        else {
          uVar1 = 3;
        }
        *(undefined *)(param_1 + 0xd) = uVar1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

