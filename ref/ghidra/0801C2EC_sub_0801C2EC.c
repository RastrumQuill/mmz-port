// sub_0801C2EC at 0x0801C2EC (thumb)

undefined8 sub_0801C2EC(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 uVar7;
  int local_24;
  
  iVar5 = *(int *)(param_1 + 0x108);
  iVar6 = *(int *)(param_1 + 0x50) + (uint)*(ushort *)(iVar5 + 4);
  local_24 = *(int *)(param_1 + 0x50) - (uint)*(ushort *)(iVar5 + 6);
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    uVar7 = 0x800;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
    uVar7 = 1;
  }
  iVar4 = param_1 + 0xc4;
  iVar3 = param_1 + 0x4c;
  uVar2 = sub_080191B4(iVar3,iVar4,iVar5,bVar1 >> 4 & 1,uVar7,1);
  if ((uVar2 & 0xf) == 0) {
    uVar2 = sub_08019C74(iVar3,iVar4,iVar5,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
    if ((uVar2 & 0xf) != 0) {
      uVar2 = sub_080191B4(iVar3,iVar4,iVar5,*(byte *)(param_1 + 10) >> 4 & 1,0,0);
      if ((uVar2 & 0xf) != 0) {
        local_24 = local_24 + -1;
        goto LAB_0801c3d0;
      }
    }
  }
  else {
    uVar2 = sub_08019C74(iVar3,iVar4,iVar5,*(byte *)(param_1 + 10) >> 4 & 1,0,0);
    if ((uVar2 & 0xf) != 0) {
      iVar6 = iVar6 + 1;
LAB_0801c3d0:
      uVar7 = *(undefined4 *)(param_1 + 0x4c);
      iVar5 = sub_08009C3C(uVar7,iVar6);
      iVar6 = sub_08009CD4(uVar7,local_24);
      if ((iVar5 != 0) && (iVar6 != 0)) {
        uVar7 = 1;
        goto LAB_0801c3f2;
      }
    }
  }
  uVar7 = 0;
LAB_0801c3f2:
  return CONCAT44(in_lr,uVar7);
}

