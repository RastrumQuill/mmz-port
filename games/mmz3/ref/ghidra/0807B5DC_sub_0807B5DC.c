// sub_0807B5DC at 0x0807B5DC (thumb)

undefined4 sub_0807B5DC(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801749C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  iVar1 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0xc00);
  iVar3 = iVar1;
  iVar2 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + -0xc00);
  if (iVar1 == 0) {
    if (iVar2 == 0) goto LAB_0807b658;
    iVar3 = *(int *)(param_1 + 0x54) + iVar2;
  }
  else {
    if (iVar2 != 0) goto LAB_0807b658;
    iVar3 = *(int *)(param_1 + 0x54) + iVar3;
  }
  *(int *)(param_1 + 0x54) = iVar3;
LAB_0807b658:
  iVar1 = sub_0800A104(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + -0x600);
  iVar3 = iVar1;
  iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0x600);
  if (iVar3 < iVar2) {
    *(int *)(param_1 + 0x58) = iVar1;
  }
  else {
    *(int *)(param_1 + 0x58) = iVar2;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_083641b4,param_1 + 0x54,6,iVar3,iVar2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x807bbc5;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  iVar3 = sub_08063614(param_1);
  if (iVar3 != 0) {
    sub_08017700(param_1,0x3e00);
    sub_080177F4(param_1);
  }
  sub_0807B710(param_1);
  return in_lr;
}

