// sub_0803B678 at 0x0803B678 (thumb)

undefined4 sub_0803B678(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  sub_0801CC9C();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5100);
  sub_08002B10(0x1a);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54) - *(int *)(iVar4 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffa00;
    *(uint *)(param_1 + 0x60) = *(byte *)(param_1 + 10) & 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08850640,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar2 = sub_0803A4B4(iVar4);
  uVar3 = iVar2 + 6U & 0xff;
  cVar1 = sub_08038A84(iVar4);
  if (cVar1 != '\0') {
    uVar3 = (uVar3 << 0x19) >> 0x18;
  }
  sub_08005794(param_1 + 0x74,&DAT_08850640,uVar3,0xffffffff,0xffffffff,0xffffffff);
  return in_lr;
}

