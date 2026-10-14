// sub_0808ED88 at 0x0808ED88 (thumb)

undefined4 sub_0808ED88(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x3901);
    bVar1 = *(byte *)(param_1 + 10);
    uVar4 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar4 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 10);
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               &DAT_0885c69c +
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(&DAT_0885ca70 +
                                        (CONCAT11(*(undefined *)(param_1 + 0x1e),
                                                  *(undefined *)(param_1 + 0x70)) - 0x3900) * 4)) *
               0x18);
  iVar3 = sub_0808F8E8(param_1);
  if ((iVar3 == 0) && (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_0808FBD0(param_1);
    iVar3 = ((bVar1 >> 4 & 1) * 2 + -1) * 0x2000;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = iVar3 + -0x400;
    }
    else {
      iVar3 = iVar3 + 0x400;
    }
    if ((*(int *)(DAT_0202dbf0 + 0x54) - (*(int *)(param_1 + 0x54) + iVar3)) + 0x2000U < 0x4001) {
      if ((*(int *)(DAT_0202dbf0 + 0x58) - *(int *)(param_1 + 0x58)) + 0x3200U < 0x8001) {
        if (*(int *)(DAT_0202dbf0 + 0x58) + -0x1000 < *(int *)(param_1 + 0x58)) {
          uVar2 = 2;
        }
        else {
          uVar2 = 3;
        }
        *(undefined *)(param_1 + 0xd) = uVar2;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        return in_lr;
      }
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

