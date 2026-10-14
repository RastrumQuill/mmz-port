// sub_0801D104 at 0x0801D104 (thumb)

undefined4 sub_0801D104(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
  iVar3 = param_1 + 0x4c;
  iVar1 = param_1 + 0xc4;
  puVar2 = (undefined4 *)(param_1 + 0x108);
  sub_0801A0A4(iVar3,iVar1,*puVar2,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  if (*(byte *)(param_1 + 0xe) < 2) {
    sub_08019C74(iVar3,iVar1,*puVar2,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  }
  else {
    sub_080191B4(iVar3,iVar1,*puVar2,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  }
  return in_lr;
}

