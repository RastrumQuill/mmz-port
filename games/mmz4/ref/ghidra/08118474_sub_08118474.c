// sub_08118474 at 0x08118474 (thumb)

undefined4 sub_08118474(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined uVar3;
  char cVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x63a8);
  cVar2 = sub_08117C68(param_1);
  if (cVar2 != '\0') {
    return in_lr;
  }
  if ((DAT_02000764 & 1) != 0) {
    sub_08002B10(2);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 0xdcc) + '\x01';
    *(undefined *)(param_1 + 0xdf7) = 0;
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xdcc);
  switch(cVar2) {
  case '\0':
    if ((DAT_02000766 & 0x80) != 0) {
      *(undefined *)(param_1 + 0xdcc) = 1;
    }
    if ((DAT_02000766 & 0x10) != 0) {
      cVar4 = sub_08119364(param_1);
      if (cVar4 == '\0') {
        cVar4 = sub_08119398(param_1);
        if (cVar4 == '\0') {
          uVar3 = 4;
        }
        else {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 2;
      }
      *(undefined *)(param_1 + 0xdcc) = uVar3;
    }
    sub_0810D214(&DAT_0886a857,1,0x10);
    uVar3 = *(undefined *)(iVar6 + 0xc0);
    break;
  case '\x01':
    if ((DAT_02000766 & 0x40) != 0) {
      *(undefined *)(param_1 + 0xdcc) = 0;
    }
    uVar1 = DAT_02000766;
    if ((DAT_02000766 & 0x80) != 0) {
      *(undefined *)(param_1 + 0xdcc) = 4;
    }
    if ((uVar1 & 0x10) != 0) {
      cVar4 = sub_08119398(param_1);
      if (cVar4 == '\0') {
        cVar4 = sub_08119364(param_1);
        if (cVar4 == '\0') {
          uVar3 = 4;
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 3;
      }
      *(undefined *)(param_1 + 0xdcc) = uVar3;
    }
    sub_0810D214(&DAT_0886a86d,1,0x10);
    uVar3 = *(undefined *)(iVar6 + 0xc1);
    break;
  case '\x02':
    if ((DAT_02000766 & 0x20) != 0) {
      *(undefined *)(param_1 + 0xdcc) = 0;
    }
    if ((DAT_02000766 & 0x80) != 0) {
      cVar4 = sub_08119398(param_1);
      if (cVar4 == '\0') {
        uVar3 = 1;
      }
      else {
        uVar3 = 3;
      }
      *(undefined *)(param_1 + 0xdcc) = uVar3;
    }
    puVar5 = &DAT_08869b8c;
    goto LAB_081186ba;
  case '\x03':
    if ((DAT_02000766 & 0x20) != 0) {
      *(undefined *)(param_1 + 0xdcc) = 1;
    }
    uVar1 = DAT_02000766;
    if ((DAT_02000766 & 0x80) != 0) {
      *(undefined *)(param_1 + 0xdcc) = 4;
    }
    if ((uVar1 & 0x40) != 0) {
      cVar4 = sub_08119364(param_1);
      if (cVar4 == '\0') {
        *(undefined *)(param_1 + 0xdcc) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xdcc) = 2;
      }
    }
    puVar5 = &DAT_08869b8e;
LAB_081186ba:
    sub_0810D214(&DAT_0886a17c + *puVar5,1,0x10);
    goto switchD_081184de_caseD_5;
  case '\x04':
    if ((DAT_02000766 & 0x20) != 0) {
      sub_08002B10(1);
      *(undefined *)(param_1 + 0xdcc) = 1;
    }
    if ((DAT_02000766 & 0x40) != 0) {
      cVar4 = sub_08119398(param_1);
      if (cVar4 == '\0') {
        cVar4 = sub_08119364(param_1);
        if (cVar4 == '\0') {
          uVar3 = 1;
        }
        else {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 3;
      }
      *(undefined *)(param_1 + 0xdcc) = uVar3;
    }
    sub_0810D214(&DAT_0886a8c0,1,0x10);
  default:
    goto switchD_081184de_caseD_5;
  }
  iVar6 = sub_08119410(iVar6,uVar3);
  sub_0810D214(&DAT_0886a17c + *(ushort *)((int)&DAT_08869ac0 + ((uint)(iVar6 << 0x10) >> 0xf)),0xc,
               0x12);
switchD_081184de_caseD_5:
  if (cVar2 != *(char *)(param_1 + 0xdcc)) {
    sub_08002B10(1);
  }
  return in_lr;
}

