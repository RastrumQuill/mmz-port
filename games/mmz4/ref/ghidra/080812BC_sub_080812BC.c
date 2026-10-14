// sub_080812BC at 0x080812BC (thumb)

undefined4 sub_080812BC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    sub_08006984(0x25);
  }
  uVar2 = *(uint *)(param_1 + 0x8c);
  if ((uVar2 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (*(char *)(param_1 + 0xb6) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08081990(param_1);
    return in_lr;
  }
  if ((uVar2 & 1) == 0) {
LAB_08081338:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_080813bc;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = sub_0802AD94(0,param_1,&DAT_0885b230);
    *(int *)(param_1 + 0x2c) = iVar1;
    if (iVar1 == 0) goto LAB_080813bc;
    *(undefined *)(param_1 + 0xb5) = 1;
    goto LAB_08081338;
  }
  iVar1 = sub_0802B3CC(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined *)(param_1 + 0xb5) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    sub_0801D1F4(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      sub_08005784(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    *(int *)(&DAT_0885b1e0 +
                            (uint)*(byte *)(param_1 + 0xb5) * 4 +
                            (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70))
                            - 0x1700) * 8)));
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_0885afb0);
    return in_lr;
  }
LAB_080813bc:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885af8c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

