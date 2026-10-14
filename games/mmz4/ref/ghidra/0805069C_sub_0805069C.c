// sub_0805069C at 0x0805069C (thumb)

undefined4 sub_0805069C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = DAT_0202dbf0;
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202e918 & 8) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08050A40(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    uVar1 = sub_0802AD94(7,param_1,&DAT_08854c98);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar2 = sub_0802B3CC(), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    *(short *)(param_1 + 0xd2) = *(short *)(param_1 + 0xd2) + -1;
  }
  if (*(short *)(param_1 + 0xd0) != 0) {
    *(short *)(param_1 + 0xd0) = *(short *)(param_1 + 0xd0) + -1;
    goto LAB_080509e8;
  }
  if ((*(char *)(iVar4 + 0x278) == '\0') || ((DAT_0202e918 & 8) != 0)) goto LAB_080509e8;
  uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
  if (*(short *)(param_1 + 0xa4) < 0x21) {
    iVar4 = 2;
    if ((5 < uVar3) && (iVar4 = 4, uVar3 < 0x16)) {
      iVar4 = 3;
    }
  }
  else {
    iVar4 = 3;
    if (uVar3 < 0x16) {
      iVar4 = 2;
    }
  }
  if (iVar4 == 2) {
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + -0x2000,0);
    }
    else {
      sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
    }
    uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    if ((uVar3 * 2 >> 0x11 & 1) == 0) {
      iVar4 = *(int *)(param_1 + 0xc4) + -0x8800;
      iVar2 = *(int *)(param_1 + 200) + -0x2000;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc4) + -0x8800;
      iVar2 = *(int *)(param_1 + 200) + 0x2000;
    }
LAB_08050974:
    sub_08091EF0(iVar4,iVar2,1);
  }
  else {
    if (iVar4 == 3) {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      uVar3 = uVar3 * 2 >> 0x11 & 3;
      if (uVar3 == 1) {
        sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
        sub_08091EF0(*(int *)(param_1 + 0xc4) + -0x8800,*(int *)(param_1 + 200) + 0x2000,1);
        iVar4 = *(int *)(param_1 + 0xc4) + -0x8800;
        iVar2 = *(int *)(param_1 + 200) + -0x2000;
      }
      else if (uVar3 == 0) {
        sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + -0x2000,0);
        sub_08091EF0(*(int *)(param_1 + 0xc4) + -0x8800,*(int *)(param_1 + 200) + 0x2000,1);
        iVar4 = *(int *)(param_1 + 0xc4) + -0x8800;
        iVar2 = *(int *)(param_1 + 200) + -0x2000;
      }
      else if (uVar3 == 2) {
        sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
        sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + -0x2000,0);
        iVar4 = *(int *)(param_1 + 0xc4) + -0x8800;
        iVar2 = *(int *)(param_1 + 200) + -0x2000;
      }
      else {
        if (uVar3 != 3) goto LAB_080509cc;
        sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
        sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + -0x2000,0);
        iVar4 = *(int *)(param_1 + 0xc4) + -0x8800;
        iVar2 = *(int *)(param_1 + 200) + 0x2000;
      }
      goto LAB_08050974;
    }
    sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + 0x2000,0);
    sub_08091EF0(*(int *)(param_1 + 0xc4) + 0x8800,*(int *)(param_1 + 200) + -0x2000,0);
    sub_08091EF0(*(int *)(param_1 + 0xc4) + -0x8800,*(int *)(param_1 + 200) + 0x2000,1);
    sub_08091EF0(*(int *)(param_1 + 0xc4) + -0x8800,*(int *)(param_1 + 200) + -0x2000,1);
  }
LAB_080509cc:
  sub_08002B10(0xee);
  *(undefined2 *)(param_1 + 0xd0) = 600;
LAB_080509e8:
  if ((*(char *)(param_1 + 0xd9) == '\0') || (6 < (byte)(*(char *)(param_1 + 0xd) - 0x12U))) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885489c + (uint)*(byte *)(param_1 + 0xd) * 4));
    *(char *)(param_1 + 0xd9) = '\0';
    uVar3 = 0;
    do {
      *(undefined *)(param_1 + 0xda + uVar3) = 0;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 8);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 0x1a;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

