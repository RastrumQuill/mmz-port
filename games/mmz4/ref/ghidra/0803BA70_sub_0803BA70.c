// sub_0803BA70 at 0x0803BA70 (thumb)

undefined4 sub_0803BA70(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x7000);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08850760,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  iVar2 = sub_0803A4B4(iVar4);
  uVar3 = iVar2 + 2U & 0xff;
  cVar1 = sub_08038A84(iVar4);
  if (cVar1 != '\0') {
    uVar3 = (uVar3 << 0x19) >> 0x18;
  }
  sub_08005794(param_1 + 0x74,&DAT_08850760,uVar3,0xffffffff,0xffffffff,0xffffffff);
  *(undefined *)(iVar4 + 0x164) = 1;
  *(undefined *)(param_1 + 0xc2) = 4;
  return in_lr;
}

