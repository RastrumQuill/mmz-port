// sub_08097060 at 0x08097060 (thumb)

undefined4 sub_08097060(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809717C(param_1);
    return in_lr;
  }
  iVar1 = sub_08065A24(param_1);
  if (iVar1 != 0) {
    sub_08006E08(param_1 + 0x74,&DAT_08342f6c);
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xc0);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar1 = sub_0801E11C(0,param_1,&DAT_08342f9c);
      *piVar2 = iVar1;
    }
    if (*piVar2 == 0) goto LAB_0809711e;
  }
  iVar1 = sub_0801E4D8(*piVar2);
  if (iVar1 == 0) {
    sub_08006E08(param_1 + 0x74,&DAT_08342f84);
    if (*(int *)(param_1 + 0x28) == 0) {
      return in_lr;
    }
    *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return in_lr;
  }
  sub_08006E08(param_1 + 0x74,&DAT_08342f6c);
LAB_0809711e:
  if ((*(uint *)(param_1 + 0x8c) & 0x40) != 0) {
    if (*(char *)(param_1 + 0xd) == '\x06') {
      if (*(int *)(param_1 + 0x28) != 0) {
        *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
      }
      uVar3 = sub_080ABE84(param_1,0,0x9c0a);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
    }
    sub_080032EC(0xe7);
    *(char *)(param_1 + 0xbd) = *(char *)(param_1 + 0xbd) + '\x01';
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08342f20 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

