// sub_08053898 at 0x08053898 (thumb)

undefined4 sub_08053898(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined *)(*(int *)(param_1 + 0xc4) + 0xb4) = 0;
    *(undefined *)(*(int *)(param_1 + 200) + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0xb600);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    iVar2 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar2;
    iVar2 = iVar2 * 0x1000000;
    break;
  case 2:
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    iVar2 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = (char)iVar2;
    iVar2 = iVar2 * 0x1000000;
    break;
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
      break;
    }
    goto LAB_080539a4;
  case 6:
    sub_08002624(5);
    sub_08002624(6);
    sub_08002624(7);
    sub_08002624(8);
    sub_08002624(9);
    sub_08002624(10);
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_080538ae_caseD_8;
  }
  if (iVar2 == 0) {
LAB_080539a4:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_080538ae_caseD_8:
  return in_lr;
}

