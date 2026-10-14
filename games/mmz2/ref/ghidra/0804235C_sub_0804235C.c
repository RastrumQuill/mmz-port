// sub_0804235C at 0x0804235C (thumb)

undefined4 sub_0804235C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)DAT_0202ec38, (DAT_0202ec38 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = (byte)(-(*(uint *)(param_1 + 0x8c) & 0x10000) >> 0x1f);
    *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
    sub_080424D0(param_1);
    return in_lr;
  }
  iVar2 = sub_08009774(*(int *)(param_1 + 100) + 0xa000,*(undefined4 *)(param_1 + 0x68));
  *(int *)(param_1 + 0xcc) = iVar2 + -0x1000;
  iVar2 = sub_08009774(*(int *)(param_1 + 100) + -0x2000,*(undefined4 *)(param_1 + 0x68));
  *(int *)(param_1 + 0xd0) = iVar2 + -0x1000;
  if (*(char *)(param_1 + 0xb6) == '\0') {
    iVar3 = *(int *)(param_1 + 0x58);
    iVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),iVar3);
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0xd8) = iVar2 - iVar3;
    iVar2 = sub_08009864(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
    *(int *)(param_1 + 0xd4) = iVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) goto LAB_0804249e;
    if (*(int *)(param_1 + 0xb8) == 0) {
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30) {
        iVar2 = sub_0801E11C(0xb,param_1,&DAT_0833a5f8);
        *(int *)(param_1 + 0xb8) = iVar2;
        if (iVar2 == 0) goto LAB_080424b2;
        *(undefined *)(param_1 + 0xd) = 10;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      goto LAB_0804249e;
    }
  }
  else {
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x30)) {
      if (*(int *)(param_1 + 0xb8) != 0) goto LAB_080424a4;
      iVar2 = sub_0801E11C(0xb,param_1,&DAT_0833a5f8);
      *(int *)(param_1 + 0xb8) = iVar2;
    }
LAB_0804249e:
    if (*(int *)(param_1 + 0xb8) == 0) goto LAB_080424b2;
  }
LAB_080424a4:
  iVar2 = sub_0801E4D8(*(undefined4 *)(param_1 + 0xb8));
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
LAB_080424b2:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833a5c4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

