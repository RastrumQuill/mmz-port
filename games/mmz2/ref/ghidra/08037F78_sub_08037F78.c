// sub_08037F78 at 0x08037F78 (thumb)

/* WARNING: Removing unreachable block (ram,0x080380ba) */
/* WARNING: Removing unreachable block (ram,0x080380c4) */
/* WARNING: Removing unreachable block (ram,0x080380b0) */

undefined8 sub_08037F78(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 in_lr;
  undefined4 uVar10;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  
  local_38 = *(int *)(param_1 + 0x54);
  local_34 = *(undefined4 *)(param_1 + 0x58);
  puVar9 = (undefined4 *)(param_1 + 0xd8);
  bVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_30 = sub_080379F4(param_1);
  local_30 = local_30 & 0xff;
  local_2c = (uint)(local_30 == 0);
  iVar5 = param_1 + 0x54;
  iVar6 = param_1 + 0xb4;
  uVar2 = sub_0801F634(iVar5,iVar6,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),bVar1,1,local_2c,0
                       ,1);
  uVar7 = uVar2 & 0xffff;
  if ((uVar2 & 0x4f) != 0) {
    if ((*(int *)(param_1 + 0x54) - local_38) + 0xc00U < 0x1801) {
      local_38 = *(int *)(param_1 + 0x54);
      local_34 = *(undefined4 *)(param_1 + 0x58);
    }
    else {
      *(int *)(param_1 + 0x54) = local_38;
      *(undefined4 *)(param_1 + 0x58) = local_34;
      uVar7 = 0;
    }
  }
  local_28 = iVar5;
  local_24 = iVar6;
  if (((uVar7 & 0x40) == 0) &&
     (((((uVar7 & 0xf) == 0 || ((uVar7 & 0x8200) != 0)) &&
       (uVar2 = sub_0801F670(iVar5,iVar6,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),bVar1,1,
                             local_2c,0,1), (uVar2 & 0x4f) != 0)) &&
      (0x1800 < (*(int *)(param_1 + 0x54) - local_38) + 0xc00U)))) {
    *(int *)(param_1 + 0x54) = local_38;
    *(undefined4 *)(param_1 + 0x58) = local_34;
  }
  uVar2 = 0;
  if (local_30 == 0) {
    uVar4 = *puVar9;
    uVar3 = *(undefined4 *)(param_1 + 0xdc);
    uVar10 = 1;
  }
  else {
    uVar4 = *puVar9;
    uVar3 = *(undefined4 *)(param_1 + 0xdc);
    uVar10 = 0x800;
  }
  uVar7 = sub_0801F57C(local_28,local_24,puVar9,uVar4,uVar3,bVar1,uVar10,local_30 == 0,0,1);
  uVar8 = uVar7 & 0xffff;
  if (((uVar7 & 0x40) == 0) && (((uVar7 & 0xf) == 0 || ((uVar7 & 0x8200) != 0)))) {
    uVar7 = sub_0801F5B8(local_28,local_24,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),bVar1,1,1,
                         0,1);
    uVar8 = uVar7 & 0xffff;
    if (((uVar7 & 0x40) == 0) && (((uVar7 & 0xf) == 0 || ((uVar7 & 0x8200) != 0))))
    goto LAB_080381bc;
    local_40 = *(undefined4 *)(param_1 + 0x54);
    local_3c = *(undefined4 *)(param_1 + 0x58);
    uVar2 = sub_0801F57C(&local_40,local_24,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),bVar1,0,0
                         ,0,1);
  }
  else {
    local_40 = *(undefined4 *)(param_1 + 0x54);
    local_3c = *(undefined4 *)(param_1 + 0x58);
    uVar2 = sub_0801F5B8(&local_40,local_24,puVar9,*puVar9,*(undefined4 *)(param_1 + 0xdc),bVar1,0,0
                         ,0,1);
  }
  uVar2 = uVar2 & 0xffff;
LAB_080381bc:
  if ((((uVar8 & 0x40) == 0) && (((uVar8 & 0xf) == 0 || ((uVar8 & 0x8200) != 0)))) ||
     (((uVar2 & 0x40) == 0 && (((uVar2 & 0xf) == 0 || ((uVar2 & 0x8200) != 0)))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

