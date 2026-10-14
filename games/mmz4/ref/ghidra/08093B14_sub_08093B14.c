// sub_08093B14 at 0x08093B14 (thumb)

undefined4 sub_08093B14(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08002B10(0x58);
    sub_08005784(param_1 + 0x74,&DAT_0885d088);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CF00(param_1,0x400b);
    *(undefined4 *)(param_1 + 0x60) = 0x180;
    *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
    *(undefined4 *)(param_1 + 100) = 0x1140;
    *(undefined *)(param_1 + 0x12) = 1;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 2:
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar7 = *(undefined4 *)(param_1 + 0x54);
    iVar6 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 100) + iVar6 * -0x1000;
      local_1c = iVar6;
      sVar2 = sub_08007C7C(uVar7,iVar5);
      if ((sVar2 != 0) && (uVar4 = sub_08007C7C(uVar7,iVar5), (uVar4 & 0xf) != 0xf)) {
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        break;
      }
      iVar6 = local_1c + 1;
    } while (iVar6 <= (int)(uint)*(byte *)(param_1 + 0x12));
    if (*(char *)(param_1 + 0x13) == '\0') {
      return in_lr;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x58);
    sVar2 = sub_08007C7C(uVar7,uVar8);
    if (sVar2 == 0) {
      return in_lr;
    }
    uVar4 = sub_08007C7C(uVar7,uVar8);
    if ((uVar4 & 0xf) == 0xf) {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 3:
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 100);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 4:
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar7 = *(undefined4 *)(param_1 + 0x54);
    sVar2 = sub_08007C7C(uVar7,iVar6);
    if ((sVar2 != 0) && (uVar3 = sub_08007C7C(uVar7,iVar6), (uVar3 & 0xf) != 0xf)) {
      iVar6 = sub_08007DB4(uVar7,iVar6);
      if (iVar6 < 0) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar6;
      }
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    *(int *)(param_1 + 0x58) = iVar6;
    uVar7 = *(undefined4 *)(param_1 + 0x54);
    uVar8 = *(undefined4 *)(param_1 + 0x5c);
    sVar2 = sub_08007C7C(uVar7,uVar8);
    if ((sVar2 != 0) && (uVar3 = sub_08007C7C(uVar7,uVar8), (uVar3 & 0xf) != 0xf)) {
      iVar6 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar6;
      if (iVar6 < 0x10) {
        *(undefined4 *)(param_1 + 0x60) = 0x10;
      }
      local_24 = *(int *)(param_1 + 0x54) + (uVar4 * -2 + 1) * 0x1000;
      local_20 = *(undefined4 *)(param_1 + 0x58);
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      sub_080DB8A8(&local_24,0,(uVar4 * 2 + -1) * 0x18 + (uVar3 * 2 >> 0x11 & 0xf) + 0x39 & 0xff);
      return in_lr;
    }
    cVar1 = '\x01';
    break;
  default:
    goto switchD_08093b3c_caseD_5;
  }
  *(char *)(param_1 + 0xf) = cVar1;
switchD_08093b3c_caseD_5:
  return in_lr;
}

