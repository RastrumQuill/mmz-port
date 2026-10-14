// sub_08038528 at 0x08038528 (thumb)

undefined8 sub_08038528(int param_1)

{
  ushort uVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(&DAT_0884fe36 + (uint)*(byte *)(param_1 + 0x174) * 8);
  iVar5 = *(int *)(param_1 + 0x58);
  iVar3 = DAT_0202cabc;
  if ((DAT_02000c80 & 0x7f) == 2) {
    iVar3 = sub_08007B84(param_1 + 0x54);
  }
  if (iVar3 < iVar5 - ((int)((uint)uVar1 << 0x10) >> 0x11)) goto switchD_0803859e_caseD_1;
  if ((DAT_02000c80 & 0x7f) == 9) {
    uVar2 = sub_08014948(param_1 + 0x54);
    switch(uVar2) {
    case 1:
switchD_0803859e_caseD_1:
      uVar4 = 0x20;
      goto LAB_080385e2;
    case 2:
switchD_0803859e_caseD_2:
      uVar4 = 0x80;
      goto LAB_080385e2;
    case 3:
      if (0 < *(int *)(param_1 + 0xec)) goto switchD_0803859e_caseD_1;
      if (*(int *)(param_1 + 0xec) < 0) goto switchD_0803859e_caseD_2;
      break;
    case 4:
      if (0 < *(int *)(param_1 + 0xec)) goto switchD_0803859e_caseD_2;
      if (*(int *)(param_1 + 0xec) < 0) goto switchD_0803859e_caseD_1;
    }
  }
  uVar4 = 0x40;
LAB_080385e2:
  return CONCAT44(in_lr,uVar4);
}

