// sub_0801CB00 at 0x0801CB00 (thumb)

undefined8 sub_0801CB00(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) goto switchD_0801cb20_caseD_a;
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
    sub_08022F38(iVar5);
    break;
  case 3:
    DAT_0202e138 = 0;
    break;
  case 4:
    sub_08022F50(iVar5);
    break;
  case 5:
    sub_08022F80(iVar5);
    goto LAB_0801cbac;
  case 6:
    sub_08022F68(iVar5);
    DAT_0202e128 = 0;
LAB_0801cbac:
    sub_080032EC(0x9a);
    break;
  case 7:
    if (*(char *)(iVar5 + 0xd) != '\0') {
      iVar2 = iVar2 + -8;
      goto LAB_0801cc20;
    }
    break;
  case 8:
    if (((*(uint *)(iVar5 + 0xc) & 0xffff00) != 0) || (1 < *(byte *)(iVar5 + 0x176))) {
      iVar2 = iVar2 + -8;
      goto LAB_0801cc20;
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
LAB_0801cc20:
    *(int *)(param_1 + 0xc) = iVar2;
    uVar3 = 1;
    goto LAB_0801cc3c;
  }
switchD_0801cb20_caseD_a:
  uVar3 = 0;
LAB_0801cc3c:
  return CONCAT44(in_lr,uVar3);
}

