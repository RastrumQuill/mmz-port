// sub_08052350 at 0x08052350 (thumb)

undefined4 sub_08052350(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar2 = sub_08057A70(param_1);
    if (cVar2 != '\0') {
      sub_080032EC(0xec);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + -0xa000;
    iVar6 = *(int *)(param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0xb8);
    if ((iVar6 + -0x6800) - iVar7 < 0) {
      uVar4 = (iVar7 + 0x6800) - iVar6;
    }
    else {
      uVar4 = iVar6 - (iVar7 + 0x6800);
    }
    if ((uVar4 & 0xffff) < 0x200) {
      uVar3 = 1;
    }
    else {
      uVar3 = (undefined)((uVar4 & 0xffff) >> 9);
    }
    *(undefined *)(param_1 + 0x12) = uVar3;
    uVar5 = 0x200;
    if (*(int *)(param_1 + 0xb8) + 0x6800 < iVar6) {
      uVar5 = 0xfffffe00;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    cVar2 = sub_08057A70(param_1);
    if (cVar2 == '\0') {
      bVar1 = *(byte *)(param_1 + 0xb6);
      if ((bVar1 & 2) == 0) goto LAB_08052438;
      *(byte *)(param_1 + 0xb6) = bVar1 & 0xfd;
    }
  }
  pbVar8 = (byte *)(param_1 + 0xb6);
  if (((*pbVar8 & 2) != 0) && (cVar2 = sub_08057A70(param_1), cVar2 == '\0')) {
    *pbVar8 = *pbVar8 & 0xfd;
    *(undefined *)(param_1 + 0xe) = 7;
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
LAB_08052438:
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = sub_08057A70(param_1);
  if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x12) & 0x1f) == 0)) {
    if ((*(byte *)(param_1 + 0x12) & 0x3f) == 0) {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      if ((uVar4 * 2 >> 0x11 & 3) == 0) {
        local_1c = *(undefined4 *)(param_1 + 0x54);
        local_18 = *(int *)(param_1 + 0xbc) + -0x7800;
        sub_080B61B4(param_1,&local_1c,1,0);
      }
    }
    else {
      local_14 = *(undefined4 *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0xbc) + -0x7800;
      sub_080B61B4(param_1,&local_14,1,0);
    }
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

