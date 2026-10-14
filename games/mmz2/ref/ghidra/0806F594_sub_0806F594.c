// sub_0806F594 at 0x0806F594 (thumb)

undefined4 sub_0806F594(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined uVar4;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0x8c);
  if ((uVar3 & 0x200) != 0) {
    if ((uVar3 & 0x10000) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      if ((uVar3 & 0x8000) != 0) {
        uVar4 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = uVar4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x28) = 0;
    }
    sub_0806F694(param_1);
    return in_lr;
  }
  sub_08070B94(param_1);
  iVar1 = sub_08065A24(param_1);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xb8) == 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0xb8) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833eb80);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xb8);
  if (*piVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      iVar1 = sub_0801E11C(0,param_1,&DAT_0833eb78);
      *piVar2 = iVar1;
      if (iVar1 == 0) goto LAB_0806f674;
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (*piVar2 == 0) goto LAB_0806f674;
  }
  iVar1 = sub_0801E4D8(*piVar2);
  if (iVar1 != 0) {
    *piVar2 = 0;
  }
LAB_0806f674:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833eb4c + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

