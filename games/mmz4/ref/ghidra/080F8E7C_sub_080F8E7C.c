// sub_080F8E7C at 0x080F8E7C (thumb)

undefined4 sub_080F8E7C(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 1) != 0) {
    sub_08006984(0x20);
  }
  if ((*puVar3 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if ((*puVar3 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    sub_080F9460(param_1);
    return in_lr;
  }
  if ((DAT_0202e8d6 < 2) && (uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54), 0x8000 < uVar1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_080f8f66:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080f902a;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar2 = sub_0802AD94(0,param_1,&DAT_08867140);
    *(int *)(param_1 + 0x2c) = iVar2;
    if (iVar2 == 0) goto LAB_080f902a;
    sub_08005784(param_1 + 0x74,&DAT_08867060);
    goto LAB_080f8f66;
  }
  iVar2 = sub_0802B3CC();
  if (iVar2 == 0) {
    sub_0801CFC8(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)),
                 (short)*(char *)(param_1 + 0x71),*(char *)(param_1 + 0x72) + 1);
    sub_0801CFF0(param_1);
    uVar1 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
    iVar2 = (int)*(char *)(param_1 + 0x71);
    sub_08005784(param_1 + 0x74,
                 *(int *)(iVar2 * 4 +
                         (&DAT_0886705c)[*(ushort *)(&DAT_08867068 + (uVar1 - 0x8100) * 2)]) +
                 (uint)*(byte *)(*(int *)(uVar1 * 4 +
                                          *(int *)(&DAT_08867138 +
                                                  ((int)(-*(uint *)(param_1 + 0x2c) |
                                                        *(uint *)(param_1 + 0x2c)) >> 0x1f & 4)) +
                                         -0x20400) + iVar2) * 0x18);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08005784(param_1 + 0x74,&DAT_0886705c);
LAB_080f902a:
  sub_08128884(param_1,*(undefined4 *)(&DAT_08866ee0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

