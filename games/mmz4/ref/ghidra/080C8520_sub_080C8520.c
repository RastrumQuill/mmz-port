// sub_080C8520 at 0x080C8520 (thumb)

undefined4 sub_080C8520(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  sVar1 = sub_08128A9C(uVar2 * 2 >> 0x11,0xc);
  sub_0801CF00(param_1,sVar1 + 0x6c00);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  pbVar6 = (byte *)(param_1 + 0xbc);
  iVar5 = *(int *)(iVar7 + 0x54) + *(int *)(&DAT_08862bd8 + (uint)*pbVar6 * 4);
  *(int *)(param_1 + 0x54) = iVar5;
  if ((2 < *pbVar6) && (sVar1 = sub_08007C7C(iVar5,*(undefined4 *)(param_1 + 0x58)), sVar1 != 0)) {
    if (*pbVar6 == 3) {
      iVar5 = *(int *)(iVar7 + 0x54);
      iVar4 = 0x3000;
    }
    else {
      iVar5 = *(int *)(iVar7 + 0x54);
      iVar4 = 0x1800;
    }
    *(int *)(param_1 + 0x54) = iVar5 + iVar4;
  }
  uVar3 = sub_08008534(*(undefined4 *)(iVar7 + 0x54),*(undefined4 *)(iVar7 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080C84C0(param_1);
  return in_lr;
}

