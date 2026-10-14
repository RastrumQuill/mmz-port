// sub_080C8E88 at 0x080C8E88 (thumb)

undefined4 sub_080C8E88(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar2 = sub_08007C7C(iVar3 + *(int *)(param_1 + 100));
  if (sVar2 != 0) {
    sub_08002B10(0x38);
    sub_08005784(param_1 + 0x74,&DAT_08862b90);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = uVar4;
  }
  return in_lr;
}

