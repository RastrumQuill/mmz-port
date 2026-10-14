// sub_080B7600 at 0x080B7600 (thumb)

undefined4 sub_080B7600(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 != 0) {
      uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  iVar3 = sub_0802B3CC(*(undefined4 *)(param_1 + 0xc0));
  if (iVar3 != 0) {
    sub_08005784(param_1 + 0x74,&DAT_08860a44);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

