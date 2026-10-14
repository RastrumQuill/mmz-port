// sub_080CB27C at 0x080CB27C (thumb)

undefined4 sub_080CB27C(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = DAT_020302c0;
    *(undefined4 *)(param_1 + 0x58) = DAT_020302c4;
    if (*(char *)(param_1 + 0xd) != '\0') {
      iVar7 = *(int *)(param_1 + 100);
      iVar5 = *(int *)(param_1 + 0x68);
      iVar2 = *(int *)(param_1 + 0x5c);
      iVar3 = *(int *)(param_1 + 0x60);
      if (*(char *)(param_1 + 0x10) == '\0') {
        sVar1 = sub_0800E41C(iVar7,iVar5);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar7,iVar5);
        }
        iVar6 = iVar7 + iVar2;
        iVar4 = iVar5 + iVar3;
        sVar1 = sub_0800E41C(iVar6,iVar4);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar6,iVar4);
        }
        iVar5 = iVar5 - iVar3;
        sVar1 = sub_0800E41C(iVar6,iVar5);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar6,iVar5);
        }
        iVar7 = iVar7 - iVar2;
        sVar1 = sub_0800E41C(iVar7,iVar4);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar7,iVar4);
        }
        sVar1 = sub_0800E41C(iVar7,iVar5);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar7,iVar5);
        }
      }
      else {
        sVar1 = sub_08010E68(iVar7,iVar5);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar7,iVar5);
        }
        iVar6 = iVar7 + iVar2;
        iVar4 = iVar5 + iVar3;
        sVar1 = sub_08010E68(iVar6,iVar4);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar6,iVar4);
        }
        iVar5 = iVar5 - iVar3;
        sVar1 = sub_08010E68(iVar6,iVar5);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar6,iVar5);
        }
        iVar7 = iVar7 - iVar2;
        sVar1 = sub_08010E68(iVar7,iVar4);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar7,iVar4);
        }
        sVar1 = sub_08010E68(iVar7,iVar5);
        if (sVar1 != 0) {
          sub_080CAE6C(param_1,iVar7,iVar5);
        }
      }
      *(undefined *)(param_1 + 0xd) = 0;
    }
  }
  else {
    sVar1 = sub_080CAFDC(param_1);
    if (sVar1 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  return in_lr;
}

