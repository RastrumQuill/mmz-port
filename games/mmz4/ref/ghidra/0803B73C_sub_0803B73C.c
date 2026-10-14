// sub_0803B73C at 0x0803B73C (thumb)

/* WARNING: Removing unreachable block (ram,0x0803b7de) */

undefined4 sub_0803B73C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  sub_0801CC9C();
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x5300);
  sub_08002B10(0x1a);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54) - *(int *)(iVar5 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = 0xfffff900;
  }
  else {
    uVar2 = 0x700;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08850670,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar3 = sub_0803A4B4(iVar5);
  uVar4 = iVar3 + 0xcU & 0xff;
  cVar1 = sub_08038A84(iVar5);
  if (cVar1 != '\0') {
    uVar4 = (uVar4 << 0x19) >> 0x18;
  }
  sub_08005794(param_1 + 0x74,&DAT_08850670,uVar4,(&DAT_0885060a)[*(byte *)(param_1 + 0xc1)],
               0xffffffff,0xffffffff);
  return in_lr;
}

