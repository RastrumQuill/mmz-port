// sub_080F7130 at 0x080F7130 (thumb)

undefined4 sub_080F7130(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(DAT_0202dbf0 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202dbf0 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x1e;
    if ((DAT_0202e910 != 0x10) &&
       (((iVar3 = *(int *)(param_1 + 0x54), iVar3 - 0x4b001U < 0x1dfff ||
         ((iVar3 - 0x69001U < 0x3bfff && (0x3c000 < *(int *)(param_1 + 0x58))))) ||
        ((0xf0000 < iVar3 || (iVar3 - 0x78001U < 0xefff)))))) {
      iVar3 = *(int *)(param_1 + 0xb4);
      iVar7 = *(int *)(param_1 + 0xb8);
      iVar6 = *(int *)(param_1 + 0x5c);
      iVar5 = *(int *)(param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 100);
      *(undefined *)(*(int *)(param_1 + 0x68) + 0xe) = 4;
      *(undefined *)(iVar4 + 0xe) = 4;
      *(undefined *)(iVar5 + 0xe) = 4;
      *(undefined *)(iVar6 + 0xe) = 4;
      *(undefined *)(iVar7 + 0xe) = 4;
      *(undefined *)(iVar3 + 0xe) = 4;
      *(undefined *)(param_1 + 0xe) = 4;
LAB_080f7322:
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
LAB_080f7330:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      return in_lr;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080f7154_caseD_1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080f73b6:
      *(char *)(param_1 + 0xe) = cVar1;
    }
switchD_080f7154_caseD_5:
    return in_lr;
  case 1:
    goto switchD_080f7154_caseD_1;
  case 2:
    iVar7 = *(int *)(param_1 + 0xb4);
    iVar6 = *(int *)(param_1 + 0xb8);
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 100);
    *(undefined *)(*(int *)(param_1 + 0x68) + 0xe) = 1;
    *(undefined *)(iVar3 + 0xe) = 1;
    *(undefined *)(iVar4 + 0xe) = 1;
    *(undefined *)(iVar5 + 0xe) = 1;
    *(undefined *)(iVar6 + 0xe) = 1;
    *(undefined *)(iVar7 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    iVar7 = *(int *)(param_1 + 0xb4);
    iVar6 = *(int *)(param_1 + 0xb8);
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 100);
    *(undefined *)(*(int *)(param_1 + 0x68) + 0xe) = 2;
    *(undefined *)(iVar3 + 0xe) = 2;
    *(undefined *)(iVar4 + 0xe) = 2;
    *(undefined *)(iVar5 + 0xe) = 2;
    *(undefined *)(iVar6 + 0xe) = 2;
    *(undefined *)(iVar7 + 0xe) = 2;
    cVar1 = *(char *)(param_1 + 0xe) + '\x01';
    goto LAB_080f73b6;
  case 4:
    if (DAT_0202e910 == 0x10) {
      if (*(short *)(DAT_0202dbf0 + 0x27e) == 1000) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08005760(param_1 + 0x74,&DAT_08866da0,param_1 + 0x54,0);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      goto LAB_080f7330;
    }
    iVar3 = *(int *)(param_1 + 0x54);
    if (((iVar3 - 0x4b001U < 0x1dfff) ||
        (((iVar3 - 0x69001U < 0x3bfff && (0x3c000 < *(int *)(param_1 + 0x58))) || (0xf0000 < iVar3))
        )) || (iVar3 - 0x78001U < 0xefff)) {
      iVar3 = *(int *)(param_1 + 0xb4);
      iVar7 = *(int *)(param_1 + 0xb8);
      iVar6 = *(int *)(param_1 + 0x5c);
      iVar5 = *(int *)(param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 100);
      *(undefined *)(*(int *)(param_1 + 0x68) + 0xe) = 4;
      *(undefined *)(iVar4 + 0xe) = 4;
      *(undefined *)(iVar5 + 0xe) = 4;
      *(undefined *)(iVar6 + 0xe) = 4;
      *(undefined *)(iVar7 + 0xe) = 4;
      *(undefined *)(iVar3 + 0xe) = 4;
      goto LAB_080f7322;
    }
    if (*(short *)(DAT_0202dbf0 + 0x27e) == 1000) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_08866da0,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    }
    if (*(char *)(*(int *)(param_1 + 0xb4) + 0xe) != '\x04') {
      return in_lr;
    }
    cVar1 = '\0';
    goto LAB_080f73b6;
  default:
    goto switchD_080f7154_caseD_5;
  }
}

