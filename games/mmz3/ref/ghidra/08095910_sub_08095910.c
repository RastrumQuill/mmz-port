// sub_08095910 at 0x08095910 (thumb)

undefined8 sub_08095910(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar2 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar2 - *(int *)(param_1 + 0x58) < 0x440) {
    *(int *)(param_1 + 0x58) = iVar2;
  }
  uVar4 = (uint)(0 < *(int *)(param_1 + 0x5c));
  iVar6 = uVar4 * 0x1400 + -0xa00;
  iVar2 = *(int *)(param_1 + 0x58);
  iVar5 = iVar2 + -0x800;
  if (uVar4 == 0) {
    iVar5 = sub_08009F80(*(int *)(param_1 + 0x54) + iVar6,iVar5);
    if (iVar5 < 1) goto LAB_08095982;
  }
  else {
    iVar5 = sub_08009E14(*(int *)(param_1 + 0x54) + iVar6,iVar5);
    if (-1 < iVar5) {
LAB_08095982:
      sVar1 = sub_08009A3C(*(int *)(param_1 + 0x54) + iVar6,iVar2 + 0x800);
      if (sVar1 == 0) {
        uVar3 = 2;
      }
      else {
        uVar3 = 0;
      }
      goto LAB_0809599e;
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  uVar3 = 1;
LAB_0809599e:
  return CONCAT44(in_lr,uVar3);
}

