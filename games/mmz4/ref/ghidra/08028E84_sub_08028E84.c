// sub_08028E84 at 0x08028E84 (thumb)

undefined8 sub_08028E84(int param_1)

{
  undefined uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 0) goto switchD_08028ea8_caseD_b;
  iVar3 = *(int *)(param_1 + 0xc);
  switch(*(undefined *)(iVar3 + 1)) {
  case 0:
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(iVar7 + 0x58);
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
    break;
  case 2:
    *(undefined *)(iVar7 + 0xd) = 9;
    *(undefined *)(iVar7 + 0xe) = 0;
    *(undefined *)(iVar7 + 0xf) = 0;
    break;
  case 3:
    DAT_0202dbf8 = 0;
    break;
  case 4:
    *(undefined *)(iVar7 + 0xd) = 10;
    *(undefined *)(iVar7 + 0xe) = 0;
    *(undefined *)(iVar7 + 0xf) = 2;
    break;
  case 5:
    DAT_0202dbe8 = 1;
    *(undefined *)(iVar7 + 0xd) = 10;
    *(undefined *)(iVar7 + 0xe) = 3;
    *(undefined *)(iVar7 + 0xf) = 0;
    goto LAB_08028f78;
  case 6:
    *(undefined *)(iVar7 + 0xd) = 10;
    *(undefined *)(iVar7 + 0xe) = 4;
    *(undefined *)(iVar7 + 0xf) = 0;
    DAT_0202dbe8 = 0;
LAB_08028f78:
    sub_08002B10(0x4a);
    break;
  case 7:
    if (*(char *)(iVar7 + 0xd) != '\0') goto LAB_0802909a;
    break;
  case 8:
    if (((*(uint *)(iVar7 + 0xc) & 0xffff00) != 0) || (1 < *(byte *)(iVar7 + 0x100)))
    goto LAB_0802909a;
    break;
  case 9:
    iVar6 = *(int *)(iVar7 + 0x54);
    uVar8 = DAT_02000c80 & 0x7f;
    iVar4 = iVar6;
    if (uVar8 == 4) {
      iVar4 = sub_08128954(iVar6 + -0xf000,0x3c000);
      iVar4 = iVar4 + 0xf000;
    }
    iVar3 = *(int *)(iVar3 + 4);
    if (iVar4 - iVar3 < -0x200) {
      uVar2 = 0x8010;
    }
    else {
      if (iVar4 - iVar3 < 0x201) {
        if (uVar8 == 4) {
          iVar4 = FUN_081288bc(iVar6 + -0xf000,0x3c000);
          *(int *)(iVar7 + 0x54) = iVar4 * 0x3c000 + iVar3;
        }
        else {
          *(int *)(iVar7 + 0x54) = iVar3;
        }
LAB_080290b2:
        *(undefined2 *)(param_1 + 0x148) = 0x8000;
        break;
      }
LAB_08029094:
      uVar2 = 0x8020;
    }
LAB_08029096:
    *(undefined2 *)(param_1 + 0x148) = uVar2;
    iVar3 = *(int *)(param_1 + 0xc);
LAB_0802909a:
    *(int *)(param_1 + 0xc) = iVar3 + -8;
    uVar5 = 1;
    goto LAB_08029108;
  case 10:
    *(undefined *)(iVar7 + 0xd) = 0xb;
    *(undefined *)(iVar7 + 0xe) = 2;
    *(undefined *)(iVar7 + 0xf) = 0;
    break;
  case 0xc:
    *(undefined *)(iVar7 + 0xc0) = 1;
    *(undefined *)(iVar7 + 0xc1) = 1;
    break;
  case 0xd:
    sub_0802B7B4(iVar7);
    break;
  case 0xe:
    if (*(int *)(iVar7 + 0x58) - 0x1b001U < 0x1bfff) {
      if (0x157fff < *(int *)(iVar7 + 0x54)) {
        if (*(int *)(iVar7 + 0x54) < 0x169001) goto LAB_080290b2;
        goto LAB_08029094;
      }
      uVar2 = 0x8010;
      goto LAB_08029096;
    }
    break;
  case 0xf:
    *(undefined *)(iVar7 + 0xc0) = 0;
    *(undefined *)(iVar7 + 0xc1) = 2;
    break;
  case 0x10:
    iVar3 = *(int *)(param_1 + *(int *)(iVar3 + 4) * 0x10 + 0x10);
    if (iVar3 != 0) {
      uVar1 = sub_080383D8(iVar7,0);
      sub_0801D3D0(iVar3,uVar1);
    }
    break;
  case 0x11:
    *(undefined *)(iVar7 + 0xc0) = DAT_02035964;
    *(undefined *)(iVar7 + 0xc1) = DAT_02035965;
    break;
  case 0x12:
    sub_0802B7A4(iVar7);
  }
switchD_08028ea8_caseD_b:
  uVar5 = 0;
LAB_08029108:
  return CONCAT44(in_lr,uVar5);
}

