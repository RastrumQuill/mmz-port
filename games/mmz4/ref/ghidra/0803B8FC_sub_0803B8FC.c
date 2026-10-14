// sub_0803B8FC at 0x0803B8FC (thumb)

undefined4 sub_0803B8FC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5d00);
  sub_08002B10(0x1a);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar3 = 0xfffffa00;
  }
  else {
    uVar3 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x12) = 0x14;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08850700,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar4 = sub_0803A4B4(uVar2);
  uVar5 = iVar4 + 8U & 0xff;
  cVar1 = sub_08038A84(uVar2);
  if (cVar1 != '\0') {
    uVar5 = (uVar5 << 0x19) >> 0x18;
  }
  sub_08005794(param_1 + 0x74,&DAT_08850700,uVar5,0xffffffff,0xffffffff,0xffffffff);
  *(undefined *)(param_1 + 0xc2) = 4;
  return in_lr;
}

