// sub_0809EA04 at 0x0809EA04 (thumb)

undefined4 sub_0809EA04(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x5900);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x58) + 0x400;
  sVar1 = sub_08007C7C(uVar3,iVar2);
  if (sVar1 != 0) {
    iVar2 = sub_08008534(uVar3,iVar2);
    *(int *)(param_1 + 0x58) = iVar2 + -0x400;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

