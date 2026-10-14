// sub_080DCD18 at 0x080DCD18 (thumb)

undefined4 sub_080DCD18(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x3c0f);
  sub_0801CFF0(param_1);
  uVar5 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    iVar4 = 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
    goto LAB_080dcdf0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = -0x800;
      iVar3 = *(int *)(param_1 + 0x58);
      iVar6 = -0x2000;
LAB_080dcd9e:
      *(int *)(param_1 + 0x58) = iVar3 + iVar6;
      goto LAB_080dcdf0;
    }
  }
  else {
    if (bVar1 == 2) {
      iVar4 = 0xe00;
      iVar3 = *(int *)(param_1 + 0x58);
      iVar6 = -0x2600;
      goto LAB_080dcd9e;
    }
    if (bVar1 == 3) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0xa00;
    }
  }
  uVar7 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  iVar4 = (0x10 - (uVar7 * 2 >> 0x11 & 0x1f)) * 0x100;
  uVar7 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar7 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + -0x1e00 + (uVar7 * 2 >> 0x11 & 0x1f) * 0x100;
LAB_080dcdf0:
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    iVar4 = *(int *)(param_1 + 0x54) + iVar4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) - iVar4;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DC9E4(param_1);
  return in_lr;
}

