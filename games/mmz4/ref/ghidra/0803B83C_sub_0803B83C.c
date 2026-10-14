// sub_0803B83C at 0x0803B83C (thumb)

undefined4 sub_0803B83C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0xb4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5800);
  sub_08002B10(0x1a);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = 0xfffffa00;
  }
  else {
    uVar2 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088506a0,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar3 = sub_0803A4B4(uVar5);
  uVar4 = iVar3 + 8U & 0xff;
  cVar1 = sub_08038A84(uVar5);
  if (cVar1 != '\0') {
    uVar4 = (uVar4 << 0x19) >> 0x18;
  }
  sub_08005794(param_1 + 0x74,&DAT_088506a0,uVar4,0xffffffff,0xffffffff,0xffffffff);
  *(undefined *)(param_1 + 0x12) = 0xb;
  *(undefined *)(param_1 + 0xc2) = 4;
  return in_lr;
}

