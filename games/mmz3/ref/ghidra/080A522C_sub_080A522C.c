// sub_080A522C at 0x080A522C (thumb)

undefined4 sub_080A522C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffd40;
        uVar5 = 0xfffffd40;
        if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
          uVar5 = 0x2c0;
        }
        *(undefined4 *)(param_1 + 0x5c) = uVar5;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080a53c6;
      iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar6;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar6 = sub_0800A104(iVar6 + -0x1000,*(int *)(param_1 + 0x58) + 0x1000);
        iVar3 = *(int *)(param_1 + 0x54) + 0x1000;
      }
      else {
        iVar6 = sub_0800A104(iVar6 + 0x1000,*(int *)(param_1 + 0x58) + 0x1000);
        iVar3 = *(int *)(param_1 + 0x54) + -0x1000;
      }
      iVar3 = sub_0800A104(iVar3,*(int *)(param_1 + 0x58) + 0x1000);
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar6 - iVar4 < -0x1800) {
        uVar5 = 0xfffffd40;
LAB_080a538e:
        *(undefined4 *)(param_1 + 0x60) = uVar5;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      else {
        if ((0x1800 < iVar6 - iVar4) && (0x1800 < iVar3 - iVar4)) {
          uVar5 = 0x2c0;
          goto LAB_080a538e;
        }
        iVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x1000);
        if (iVar6 - *(int *)(param_1 + 0x58) < 0x1800) {
          *(int *)(param_1 + 0x58) = iVar6 + -0x1000;
        }
      }
      cVar2 = *(char *)(param_1 + 0x12) + '\x10';
      *(char *)(param_1 + 0x12) = cVar2;
      *(char *)(param_1 + 0x24) = cVar2;
      sub_080177F4(param_1);
      goto LAB_080a53c6;
    }
    if (bVar1 != 0) goto LAB_080a53c6;
    sub_08007390(param_1 + 0x74,&DAT_08368280);
    *(undefined4 *)(param_1 + 0x60) = 0x2c0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  if (*(int *)(param_1 + 0x60) < 1) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar6 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1000,iVar6 + 0x1000);
    }
    else {
      iVar6 = sub_08009E14(*(int *)(param_1 + 0x54) + 0x1000,iVar6 + 0x1000);
    }
    if (iVar6 == 0) goto LAB_080a52d0;
  }
  else {
    iVar6 = sub_08009B28(*(int *)(param_1 + 0x54) + -0x1000,iVar6 + 0x1000);
    iVar3 = sub_08009B28(*(int *)(param_1 + 0x54) + 0x1000,*(int *)(param_1 + 0x58) + 0x1000);
    if ((iVar6 != 0) || (iVar3 != 0)) {
LAB_080a52d0:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  cVar2 = *(char *)(param_1 + 0x12) + '\x10';
  *(char *)(param_1 + 0x12) = cVar2;
  *(char *)(param_1 + 0x24) = cVar2;
  sub_080177F4(param_1);
LAB_080a53c6:
  iVar7 = *(int *)(param_1 + 0x54) - *(int *)(iVar7 + 0xb8);
  if (((iVar7 < -0x5800) && ((*(byte *)(param_1 + 10) & 0x10) == 0)) ||
     ((0x5800 < iVar7 && ((*(byte *)(param_1 + 10) & 0x10) != 0)))) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

