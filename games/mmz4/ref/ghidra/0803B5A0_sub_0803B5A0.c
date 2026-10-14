// sub_0803B5A0 at 0x0803B5A0 (thumb)

undefined4 sub_0803B5A0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0xb4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5000);
  sub_08002B10(0x16);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffb40;
    *(uint *)(param_1 + 0x60) = *(byte *)(param_1 + 10) & 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x4c0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08850610,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar3 = 2;
  if ((*(uint *)(*(int *)(param_1 + 0xb4) + 0xc) & 0xffff00) == 0x20000) {
    iVar3 = 3;
  }
  iVar2 = sub_0803A4B4(uVar5);
  uVar4 = iVar3 + iVar2 & 0xff;
  cVar1 = sub_08038A84(uVar5);
  if (cVar1 != '\0') {
    uVar4 = (uVar4 << 0x19) >> 0x18;
  }
  sub_08005794(param_1 + 0x74,&DAT_08850610,uVar4,0xffffffff,0xffffffff,0xffffffff);
  return in_lr;
}

