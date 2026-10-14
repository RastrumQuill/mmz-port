// sub_08078CBC at 0x08078CBC (thumb)

undefined4 sub_08078CBC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if ((*(char *)(param_1 + 199) != '\0') && (*(char *)(*(int *)(param_1 + 0xcc) + 0xbc) == '\0'))
    {
      sub_08002B5C(0x163);
      *(char *)(param_1 + 199) = '\0';
    }
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    sub_0801D3D0(param_1,5);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0x9c00);
    *(undefined *)(param_1 + 0x12) = 0x10;
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
    goto LAB_08078de0;
  case 4:
    local_18 = 0;
    local_14 = 0;
    uVar1 = sub_080D2578(param_1,&local_18);
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    piVar3 = (int *)(param_1 + 0xc0);
    if (*piVar3 != 0) {
      if (1 < *(byte *)(*piVar3 + 0xc)) {
        *piVar3 = 0;
      }
      iVar2 = *piVar3;
      goto LAB_08078ddc;
    }
    goto LAB_08078de0;
  case 6:
    sub_08002624(0x84);
    sub_08002624(0x85);
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_08078cd2_caseD_8;
  }
  sub_0801CFF0(param_1);
  iVar2 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  iVar2 = iVar2 * 0x1000000;
LAB_08078ddc:
  if (iVar2 == 0) {
LAB_08078de0:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_08078cd2_caseD_8:
  return in_lr;
}

