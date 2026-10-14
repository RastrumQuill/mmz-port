// sub_080A46FC at 0x080A46FC (thumb)

undefined4 sub_080A46FC(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  puVar6 = (uint *)(param_1 + 0x8c);
  if ((*puVar6 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_080A4E3C(param_1);
    return in_lr;
  }
  uVar3 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x7800 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar6 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_080a4a1c;
  }
  sub_0801CFF0(param_1);
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  sVar2 = sub_08007C7C(iVar4,*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar3 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
    uVar3 = uVar3 & 0xffff;
    if (uVar3 == 0) {
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      bVar1 = *(char *)(param_1 + 0x12) + 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if ((bVar1 & 3) == 0) {
        local_20 = *(int *)(param_1 + 0x54);
        local_1c = *(undefined4 *)(param_1 + 0x58);
        local_18 = uVar3;
        local_14 = uVar3;
        sub_080D97A8(&local_20,&local_18,0,0);
      }
      if ((*puVar6 & 0x800) == 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      sub_08128884(param_1,0x80a4aa5);
      return in_lr;
    }
    local_20 = *(int *)(param_1 + 0x54);
    if (*(int *)(param_1 + 0x60) < 0) {
      local_1c = sub_08008748(local_20,*(undefined4 *)(param_1 + 0x58));
      sVar2 = sub_08007C7C(local_20 + -0x1000,local_1c + -1);
      if (sVar2 == 0) {
        local_20 = sub_08008868(local_20 + -0x1000,local_1c + -1);
        local_20 = local_20 + 0x1000;
      }
      else {
        sVar2 = sub_08007C7C(local_20 + 0x1000,local_1c + -1);
        if (sVar2 == 0) {
          local_20 = sub_08008988(local_20 + 0x1000,local_1c + -1);
          local_20 = local_20 + -0x1000;
        }
      }
      uVar5 = 3;
    }
    else {
      local_1c = sub_08008534(local_20,*(undefined4 *)(param_1 + 0x58));
      sVar2 = sub_08007C7C(local_20 + -0x1000,local_1c + 1);
      if (sVar2 == 0) {
        local_20 = sub_08008868(local_20 + -0x1000,local_1c + 1);
        local_20 = local_20 + 0x1000;
      }
      else {
        sVar2 = sub_08007C7C(local_20 + 0x1000,local_1c + 1);
        if (sVar2 == 0) {
          local_20 = sub_08008988(local_20 + 0x1000,local_1c + 1);
          local_20 = local_20 + -0x1000;
        }
      }
      uVar5 = 2;
    }
    sVar2 = sub_08007C7C(local_20 + -0x1000,local_1c);
    if (sVar2 == 0) {
      sVar2 = sub_08007C7C(local_20 + 0x1000,local_1c);
      if (sVar2 != 0) {
        local_20 = sub_08008868(local_20 + 0x1000,local_1c);
        local_20 = local_20 + -0x1000;
      }
    }
    else {
      local_20 = sub_08008988(local_20 + -0x1000,local_1c);
      local_20 = local_20 + 0x1000;
    }
  }
  else {
    local_1c = *(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x5c) < 0) {
      local_20 = sub_08008988(*(undefined4 *)(param_1 + 0x54));
      sVar2 = sub_08007C7C(local_20 + -1,local_1c + -0x1000);
      if (sVar2 == 0) {
        local_1c = sub_08008534(local_20 + -1,local_1c + -0x1000);
        iVar4 = 0x1000;
LAB_080a47e8:
        local_1c = local_1c + iVar4;
      }
      else {
        sVar2 = sub_08007C7C(local_20 + -1,local_1c + 0x1000);
        if (sVar2 == 0) {
          local_1c = sub_08008748(local_20 + -1,local_1c + 0x1000);
          iVar4 = -0x1000;
          goto LAB_080a47e8;
        }
      }
      uVar5 = 1;
    }
    else {
      local_20 = sub_08008868(*(undefined4 *)(param_1 + 0x54));
      sVar2 = sub_08007C7C(local_20 + 1,local_1c + -0x1000);
      if (sVar2 == 0) {
        local_1c = sub_08008534(local_20 + 1,local_1c + -0x1000);
        iVar4 = 0x1000;
LAB_080a4850:
        local_1c = local_1c + iVar4;
      }
      else {
        sVar2 = sub_08007C7C(local_20 + 1,local_1c + 0x1000);
        if (sVar2 == 0) {
          local_1c = sub_08008748(local_20 + 1,local_1c + 0x1000);
          iVar4 = -0x1000;
          goto LAB_080a4850;
        }
      }
      uVar5 = 0;
    }
    sVar2 = sub_08007C7C(local_20,local_1c + -0x1000);
    if (sVar2 == 0) {
      sVar2 = sub_08007C7C(local_20,local_1c + 0x1000);
      if (sVar2 == 0) goto LAB_080a49f8;
      local_1c = sub_08008534(local_20,local_1c + 0x1000);
      iVar4 = -0x1000;
    }
    else {
      local_1c = sub_08008748(local_20,local_1c + -0x1000);
      iVar4 = 0x1000;
    }
    local_1c = local_1c + iVar4;
  }
LAB_080a49f8:
  sub_080A44C4(&local_20,uVar5);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
LAB_080a4a1c:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

