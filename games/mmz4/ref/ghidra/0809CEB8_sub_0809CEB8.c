// sub_0809CEB8 at 0x0809CEB8 (thumb)

undefined4 sub_0809CEB8(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (CONCAT11(*(undefined *)(iVar5 + 0x1e),*(undefined *)(iVar5 + 0x70)) == -0x56de) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  sub_0801CFF0(param_1);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar4 = *(int *)(param_1 + 0x58) + -0x40;
    *(int *)(param_1 + 0x58) = iVar4;
    sVar2 = sub_08007C7C(iVar5 + *(int *)(param_1 + 100),iVar4 + *(int *)(param_1 + 0x68));
    if (sVar2 == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x60;
    break;
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0809cff8;
  case 2:
    iVar5 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar4;
    sVar2 = sub_08007C7C(iVar5 + *(int *)(param_1 + 100),iVar4 + *(int *)(param_1 + 0x68));
    if (sVar2 == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    goto joined_r0x0809cff8;
  case 4:
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    sVar2 = sub_08007C7C(iVar5 + *(int *)(param_1 + 100),*(int *)(param_1 + 0x58) + -0x2000);
    if (sVar2 == 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
joined_r0x0809cff8:
    if (cVar1 != -1) {
      return in_lr;
    }
    break;
  case 6:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    iVar5 = (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60)) + -0x40;
    *(int *)(param_1 + 0x58) = iVar5;
    if (*(int *)(param_1 + 0xb8) <= iVar5) {
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    break;
  case 7:
    if (*(char *)(iVar5 + 0xd) != '\x1e') {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 4;
    uVar3 = FUN_081288bc((*(int *)(iVar5 + 0x54) + *(int *)(param_1 + 0xbc)) -
                         *(int *)(param_1 + 0x54),4);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    uVar3 = FUN_081288bc((*(int *)(iVar5 + 0x58) + *(int *)(param_1 + 0xc0)) -
                         *(int *)(param_1 + 0x58),4);
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    break;
  case 8:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + *(int *)(param_1 + 0xc0);
    sub_08002B10(0x1b5);
    break;
  case 9:
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + *(int *)(param_1 + 0xbc);
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + *(int *)(param_1 + 0xc0);
  default:
    goto switchD_0809cf26_caseD_a;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_0809cf26_caseD_a:
  return in_lr;
}

