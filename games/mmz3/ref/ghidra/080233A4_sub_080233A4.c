// sub_080233A4 at 0x080233A4 (thumb)

undefined8 sub_080233A4(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\f') {
    DAT_0203730c = 1;
    DAT_0203730d = 1;
  }
  if (iVar5 == 0) goto switchD_080233d6_caseD_e;
  iVar2 = *(int *)(param_1 + 0xc);
  switch(*(undefined *)(iVar2 + 1)) {
  case 0:
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(iVar5 + 0x58);
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
    break;
  case 2:
    *(undefined *)(iVar5 + 0xd) = 9;
    *(undefined *)(iVar5 + 0xe) = 0;
    *(undefined *)(iVar5 + 0xf) = 0;
    break;
  case 3:
    DAT_0202f5c8 = 0;
    break;
  case 4:
    *(undefined *)(iVar5 + 0xd) = 10;
    *(undefined *)(iVar5 + 0xe) = 0;
    *(undefined *)(iVar5 + 0xf) = 2;
    break;
  case 5:
    DAT_0202f5b8 = 1;
    *(undefined *)(iVar5 + 0xd) = 10;
    *(undefined *)(iVar5 + 0xe) = 3;
    *(undefined *)(iVar5 + 0xf) = 0;
    goto LAB_08023494;
  case 6:
    *(undefined *)(iVar5 + 0xd) = 10;
    *(undefined *)(iVar5 + 0xe) = 4;
    *(undefined *)(iVar5 + 0xf) = 0;
    DAT_0202f5b8 = 0;
LAB_08023494:
    sub_0800471C(0x9a);
    break;
  case 7:
    if (*(char *)(iVar5 + 0xd) != '\0') {
      iVar2 = iVar2 + -8;
      goto LAB_080234fc;
    }
    break;
  case 8:
    if ((*(uint *)(iVar5 + 0xc) & 0xffff00) != 0) {
      iVar2 = iVar2 + -8;
      goto LAB_080234fc;
    }
    break;
  case 9:
    iVar4 = *(int *)(iVar5 + 0x54) - *(int *)(iVar2 + 4);
    if (iVar4 < -0x200) {
      uVar1 = 0x8010;
    }
    else {
      if (iVar4 < 0x201) {
        *(int *)(iVar5 + 0x54) = *(int *)(iVar2 + 4);
        *(undefined2 *)(param_1 + 0x148) = 0x8000;
        break;
      }
      uVar1 = 0x8020;
    }
    *(undefined2 *)(param_1 + 0x148) = uVar1;
    iVar2 = *(int *)(param_1 + 0xc) + -8;
LAB_080234fc:
    *(int *)(param_1 + 0xc) = iVar2;
    uVar3 = 1;
    goto LAB_08023548;
  case 10:
    *(undefined *)(iVar5 + 0xd) = 0xb;
    *(undefined *)(iVar5 + 0xe) = 2;
    *(undefined *)(iVar5 + 0xf) = 0;
    break;
  case 0xb:
    *(undefined *)(iVar5 + 0x231) = 1;
    break;
  case 0xc:
    *(undefined *)(iVar5 + 0xc0) = 1;
    *(undefined *)(iVar5 + 0xc1) = 1;
    break;
  case 0xd:
    sub_08025BDC(iVar5);
  }
switchD_080233d6_caseD_e:
  uVar3 = 0;
LAB_08023548:
  return CONCAT44(in_lr,uVar3);
}

