// sub_080D44E8 at 0x080D44E8 (thumb)

undefined4 sub_080D44E8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar2 = DAT_0202e130;
  if (*(char *)(param_1 + 0x11) != '\0') {
    sVar1 = sub_080D41C8(param_1);
    if (sVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(DAT_0202e130 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  if (*(char *)(param_1 + 0xd) == '\0') {
    return in_lr;
  }
  iVar7 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x10) == '\0') {
    sVar1 = sub_0800BB24(iVar7,iVar5);
    if (sVar1 != 0) {
      sub_080D4028(param_1,iVar7,iVar5);
    }
    iVar6 = iVar7 + iVar2;
    iVar4 = iVar5 + iVar3;
    sVar1 = sub_0800BB24(iVar6,iVar4);
    if (sVar1 != 0) {
      sub_080D4028(param_1,iVar6,iVar4);
    }
    iVar5 = iVar5 - iVar3;
    sVar1 = sub_0800BB24(iVar6,iVar5);
    if (sVar1 != 0) {
      sub_080D4028(param_1,iVar6,iVar5);
    }
    iVar7 = iVar7 - iVar2;
    sVar1 = sub_0800BB24(iVar7,iVar4);
    if (sVar1 != 0) {
      sub_080D4028(param_1,iVar7,iVar4);
    }
    sVar1 = sub_0800BB24(iVar7,iVar5);
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x01') {
      sVar1 = sub_08011768(iVar7,iVar5);
      if (sVar1 != 0) {
        sub_080D4028(param_1,iVar7,iVar5);
      }
      iVar6 = iVar7 + iVar2;
      iVar4 = iVar5 + iVar3;
      sVar1 = sub_08011768(iVar6,iVar4);
      if (sVar1 != 0) {
        sub_080D4028(param_1,iVar6,iVar4);
      }
      iVar5 = iVar5 - iVar3;
      sVar1 = sub_08011768(iVar6,iVar5);
      if (sVar1 != 0) {
        sub_080D4028(param_1,iVar6,iVar5);
      }
      iVar7 = iVar7 - iVar2;
      sVar1 = sub_08011768(iVar7,iVar4);
      if (sVar1 != 0) {
        sub_080D4028(param_1,iVar7,iVar4);
      }
      sVar1 = sub_08011768(iVar7,iVar5);
      if (sVar1 != 0) {
        sub_080D4028(param_1,iVar7,iVar5);
      }
      goto LAB_080d46c2;
    }
    sVar1 = sub_0800E964(iVar7,iVar5);
    if (sVar1 != 0) {
      sub_080D4028(param_1,iVar7,iVar5);
    }
    iVar6 = iVar7 + iVar2;
    iVar4 = iVar5 + iVar3;
    sVar1 = sub_0800E964(iVar6,iVar4);
    if (sVar1 != 0) {
      sub_080D4028(param_1,iVar6,iVar4);
    }
    iVar5 = iVar5 - iVar3;
    sVar1 = sub_0800E964(iVar6,iVar5);
    if (sVar1 != 0) {
      sub_080D4028(param_1,iVar6,iVar5);
    }
    iVar7 = iVar7 - iVar2;
    sVar1 = sub_0800E964(iVar7,iVar4);
    if (sVar1 != 0) {
      sub_080D4028(param_1,iVar7,iVar4);
    }
    sVar1 = sub_0800E964(iVar7,iVar5);
  }
  if (sVar1 != 0) {
    sub_080D4028(param_1,iVar7,iVar5);
  }
LAB_080d46c2:
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

