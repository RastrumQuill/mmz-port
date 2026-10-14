// sub_080C14B8 at 0x080C14B8 (thumb)

undefined4 sub_080C14B8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x900c);
    *(undefined4 *)(param_1 + 0x60) = 0x400;
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(bool *)(param_1 + 0x13) = sVar1 == 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_08861d60);
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0x13) == '\0') || (sVar1 = sub_08007C7C(uVar4), sVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(int *)(param_1 + 0x58) = iVar3 + iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C1550(param_1);
  }
  return in_lr;
}

