// sub_0807B710 at 0x0807B710 (thumb)

undefined4 sub_0807B710(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836418c + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_0807BB70(param_1);
    iVar1 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + -0x400);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
    }
    iVar1 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x400,*(int *)(param_1 + 0x58) + -0x400);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
    }
    iVar1 = sub_0800A104(*(int *)(param_1 + 0x54) + -0x1000,*(int *)(param_1 + 0x58) + -0x600);
    iVar2 = sub_0800A104(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + -0x600);
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x58) = iVar1;
    }
    else {
      *(int *)(param_1 + 0x58) = iVar2;
    }
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083641a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807B808(param_1);
  }
  return in_lr;
}

