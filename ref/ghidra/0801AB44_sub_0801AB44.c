// sub_0801AB44 at 0x0801AB44 (thumb)

undefined8
sub_0801AB44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 4);
  uVar4 = sub_08019C74(param_1,param_2,param_3,param_4,param_5,param_7);
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 0) {
LAB_0801abb2:
    bVar1 = true;
  }
  else {
    iVar5 = *(int *)(param_1 + 4);
    if ((iVar5 - iVar6) + 0x7ffU < 0xfff) {
      *(int *)(param_1 + 4) = iVar5 + param_5;
      cVar2 = sub_08019C74(param_1,param_2,param_3,param_4,param_5,param_7);
      if (cVar2 == '\0') {
        *(int *)(param_1 + 4) = iVar5;
        goto LAB_0801abb2;
      }
    }
    *(int *)(param_1 + 4) = iVar6;
    bVar1 = false;
  }
  uVar3 = sub_0801A0A4(param_1,param_2,param_3,param_4,param_6,param_7);
  if (((!bVar1) || (uVar3 != 0)) && (*(int *)(param_1 + 4) == iVar6)) {
    uVar4 = sub_08019C74(param_1,param_2,param_3,param_4,param_5,param_7);
    uVar4 = uVar4 & 0xff;
  }
  return CONCAT44(in_lr,uVar4 | (uint)uVar3 << 0x10);
}

