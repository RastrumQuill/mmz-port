// sub_080BF464 at 0x080BF464 (thumb)

undefined4 sub_080BF464(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(int *)(param_1 + 0x60) < 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    if (*(int *)(iVar3 + 0xb8) + -0x6fff < iVar2 + -0x800) goto LAB_080bf4ac;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 + 0x800 < *(int *)(iVar3 + 0xb8)) goto LAB_080bf4ac;
  }
  *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
LAB_080bf4ac:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = iVar2 + *(int *)(param_1 + 0x60);
  uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x4000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

