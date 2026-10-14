// sub_080DCBE4 at 0x080DCBE4 (thumb)

undefined4 sub_080DCBE4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x3d02);
  sub_0801CFF0(param_1);
  if (*(byte *)(param_1 + 0x11) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  }
  else if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    *(uint *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + (uint)*(byte *)(param_1 + 0x11) * -0x400;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(uint *)(param_1 + 0x54) = *(int *)(iVar3 + 0x54) + (uint)*(byte *)(param_1 + 0x11) * 0x400;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  if ((*(byte *)(iVar3 + 10) & 0x20) == 0) {
    uVar1 = sub_08008534(*(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x58));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
    uVar1 = sub_08008748(*(undefined4 *)(iVar3 + 0x54),*(undefined4 *)(iVar3 + 0x58));
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar2 = -0x600;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar2 = 0x600;
  }
  *(int *)(param_1 + 0x54) = iVar3 + iVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080DC9E4(param_1);
  return in_lr;
}

