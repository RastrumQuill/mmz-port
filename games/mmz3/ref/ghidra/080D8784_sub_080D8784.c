// sub_080D8784 at 0x080D8784 (thumb)

undefined4 sub_080D8784(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 1);
      if (iVar3 == 0) {
        sub_08007390(param_1 + 0x74,&DAT_0836d870);
        *(undefined *)(param_1 + 0x10) = 1;
        *(undefined *)(param_1 + 0xd) = 1;
      }
      if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
        return in_lr;
      }
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x34ff) {
        sub_08017700(param_1,0xcb02);
        return in_lr;
      }
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_080177F4(param_1);
    iVar3 = *(int *)(param_1 + 0x54);
    if (DAT_020302c0 + 0x77ff < iVar3) {
      return in_lr;
    }
    if (iVar3 < DAT_020302c0 + -0x7800) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0x58) < DAT_020302c4 + -0x9800) {
      return in_lr;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836d8a0;
    *(undefined2 *)(param_1 + 0x26) = 0x3801;
    sub_0800BF10(iVar3,*(int *)(param_1 + 0x58));
    *(undefined *)(param_1 + 0x10) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x60) < 0x700) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x68) = iVar3;
  iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar3 != 0) {
    if (0x200 < *(int *)(param_1 + 0x60)) {
      sub_0800471C(0x11d);
      sub_0801ACF8(4,param_1 + 0x54);
    }
    uVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08007390(param_1 + 0x74,&DAT_0836d888);
    sub_08017700(param_1,0xcb01);
    *(undefined *)(param_1 + 0x10) = 2;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

