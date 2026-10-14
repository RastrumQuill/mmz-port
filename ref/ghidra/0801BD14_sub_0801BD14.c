// sub_0801BD14 at 0x0801BD14 (thumb)

undefined8 sub_0801BD14(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar2 = param_1 + 0x4c;
  iVar5 = param_1 + 0xc4;
  puVar6 = (undefined4 *)(param_1 + 0x108);
  uVar3 = sub_080191B4(iVar2,iVar5,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  uVar7 = uVar3 & 0xff;
  if ((uVar3 & 0xf) == 0) {
    uVar3 = sub_08019C74(iVar2,iVar5,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
    uVar4 = uVar3 & 0xff;
    if ((uVar3 & 0xf) != 0) {
      uVar7 = sub_080191B4(iVar2,iVar5,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,0,0);
      uVar7 = uVar7 & 0xff;
    }
  }
  else {
    uVar4 = sub_08019C74(iVar2,iVar5,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,0,0);
    uVar4 = uVar4 & 0xff;
  }
  if (((uVar7 & 0xf) == 0) || ((uVar4 & 0xf) == 0)) {
    uVar1 = sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                         *(byte *)(param_1 + 10) >> 4 & 1,1,1);
  }
  else {
    uVar1 = 0;
  }
  if (*(byte *)(param_1 + 0xe) < 2) {
    if (((uVar4 & 0xf) == 0) || ((uVar1 & 0xf) != 0)) {
      uVar4 = sub_08019C74(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                           *(byte *)(param_1 + 10) >> 4 & 1,1,1);
      uVar4 = uVar4 & 0xff;
    }
    uVar4 = uVar4 | (uint)uVar1 << 0x10;
  }
  else {
    if (((uVar7 & 0xf) == 0) || ((uVar1 & 0xf) != 0)) {
      uVar7 = sub_080191B4(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                           *(byte *)(param_1 + 10) >> 4 & 1,1,1);
      uVar7 = uVar7 & 0xff;
    }
    uVar4 = uVar7 | (uint)uVar1 << 0x10;
  }
  return CONCAT44(in_lr,uVar4);
}

