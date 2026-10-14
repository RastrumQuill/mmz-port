// sub_0802CA4C at 0x0802CA4C (thumb)

undefined8 sub_0802CA4C(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar6 = (uint)CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70));
  if (uVar6 == 0x2706) {
LAB_0802cad4:
    iVar7 = -0x1600;
    iVar3 = -0xa00;
  }
  else {
    if (uVar6 < 0x2707) {
      iVar3 = 0x2702;
      if (uVar6 != 0x2702) {
        if (uVar6 < 0x2703) {
LAB_0802ca92:
          if (uVar6 != iVar3 - 2U) goto LAB_0802cae4;
LAB_0802caf4:
          iVar7 = 0;
          iVar3 = -0x2d00;
        }
        else if (uVar6 == 0x2704) {
LAB_0802cab4:
          iVar7 = -0x1800;
          iVar3 = -0x1600;
        }
        else {
LAB_0802cae4:
          if (*(char *)(param_1 + 0xd) == '\x01') {
            *(undefined *)(param_1 + 0x156) = 3;
            goto LAB_0802caf4;
          }
          iVar7 = 0;
          iVar3 = 0;
        }
        goto LAB_0802cb04;
      }
    }
    else {
      iVar3 = 0x2802;
      if (uVar6 != 0x2802) {
        if (uVar6 < 0x2803) goto LAB_0802ca92;
        if (uVar6 == 0x2804) goto LAB_0802cab4;
        if (uVar6 != 0x2806) goto LAB_0802cae4;
        goto LAB_0802cad4;
      }
    }
    iVar7 = -0x1200;
    iVar3 = -0x2800;
  }
LAB_0802cb04:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar6 = *(int *)(param_1 + 0x54) + iVar7;
  }
  else {
    uVar6 = *(int *)(param_1 + 0x54) - iVar7;
  }
  uVar8 = *(int *)(param_1 + 0x58) + iVar3;
  uVar4 = sub_08007020(uVar6,uVar8);
  if ((uVar4 & 0xf) == 0xf) {
    *(int *)(param_1 + 0x1c8) = (uVar8 & 0xfffff000) + 0x800;
    uVar1 = sub_08007020(uVar6 + 0x900);
    if ((uVar1 == 0) || ((uVar1 & 0xf) == 0xf)) {
      uVar1 = sub_08007020(uVar6 - 0x900,*(int *)(param_1 + 0x1c8));
      if ((uVar1 == 0) || ((uVar1 & 0xf) == 0xf)) {
        *(uint *)(param_1 + 0x1c4) = uVar6;
        goto LAB_0802cbc6;
      }
      iVar3 = 0x900;
    }
    else {
      iVar3 = 0x700;
    }
    *(uint *)(param_1 + 0x1c4) = (uVar6 & 0xfffff000) + iVar3;
  }
  else {
    sVar2 = sub_0802E358(param_1,uVar6,uVar8);
    if (sVar2 == 0) {
      uVar5 = 0;
      goto LAB_0802cbc8;
    }
  }
LAB_0802cbc6:
  uVar5 = 1;
LAB_0802cbc8:
  return CONCAT44(in_lr,uVar5);
}

