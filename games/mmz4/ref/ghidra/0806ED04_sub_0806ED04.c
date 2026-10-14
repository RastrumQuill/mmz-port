// sub_0806ED04 at 0x0806ED04 (thumb)

undefined4 sub_0806ED04(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08002624(0x76);
    sub_08002624(0x77);
    sub_08002624(0x78);
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0xad0e);
    *(undefined4 *)(param_1 + 100) = 0x50;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    break;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    goto LAB_0806ee0c;
  case 4:
    local_14 = 0;
    local_10 = 0;
    uVar1 = sub_080D2578(param_1,&local_14);
    *(undefined4 *)(param_1 + 0xd0) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    piVar3 = (int *)(param_1 + 0xd0);
    if (*piVar3 != 0) {
      if (1 < *(byte *)(*piVar3 + 0xc)) {
        *piVar3 = 0;
      }
      iVar2 = *piVar3;
      goto LAB_0806ee08;
    }
    goto LAB_0806ee0c;
  case 6:
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_0806ed1a_caseD_8;
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar2;
LAB_0806ee08:
  if (iVar2 == 0) {
LAB_0806ee0c:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_0806ed1a_caseD_8:
  return in_lr;
}

