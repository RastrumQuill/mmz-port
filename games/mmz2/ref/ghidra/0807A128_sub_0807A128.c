// sub_0807A128 at 0x0807A128 (thumb)

undefined4 sub_0807A128(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
LAB_0807a146:
    if (iVar1 != 0) {
      *(char *)(iVar1 + 0xcc) = *(char *)(iVar1 + 0xcc) + -1;
    }
LAB_0807a154:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08079FA0(param_1);
    return in_lr;
  }
  if (iVar1 == 0) goto LAB_0807a154;
  if (1 < *(byte *)(iVar1 + 0xc)) goto LAB_0807a146;
  if (((*(int *)(iVar1 + 0x54) - *(int *)(param_1 + 0x54)) + (uint)*(ushort *)(iVar1 + 0xd2) <=
       (uint)*(ushort *)(iVar1 + 0xd2) * 2) &&
     ((*(int *)(iVar1 + 0x58) - *(int *)(param_1 + 0x58)) + 0x4000U < 0x8001)) {
    *(undefined *)(iVar1 + 0xdb) = 1;
  }
  sub_0807A60C(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0807a1f4:
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) goto LAB_0807a208;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      iVar1 = sub_0801E11C(0,param_1,&DAT_0833ffbc);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) goto LAB_0807a208;
      *(undefined *)(param_1 + 0xb8) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_0807a1f4;
    }
  }
  iVar1 = sub_0801E4D8(iVar1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0807a208:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833ffa0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

