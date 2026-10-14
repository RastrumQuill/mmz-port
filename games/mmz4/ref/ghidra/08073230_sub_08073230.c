// sub_08073230 at 0x08073230 (thumb)

undefined4 sub_08073230(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = 0x12e;
  local_18 = 0x12f;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    iVar2 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar2 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_1c + iVar2));
    *(undefined *)(param_1 + 200) = 0;
    *(undefined *)(*(int *)(param_1 + 0xb4) + 0xb4) = 0;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0xae1a);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    break;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_080025D8(0x7a);
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    goto LAB_08073372;
  case 4:
    local_14 = 0;
    local_10 = 0xfffff000;
    uVar1 = sub_080D2578(param_1);
    *(undefined4 *)(param_1 + 0xbc) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_080025D8(0x7a);
    sub_0801CFF0(param_1);
    piVar3 = (int *)(param_1 + 0xbc);
    if (*piVar3 != 0) {
      if (1 < *(byte *)(*piVar3 + 0xc)) {
        *piVar3 = 0;
      }
      iVar2 = *piVar3;
      goto LAB_0807336e;
    }
    goto LAB_08073372;
  case 6:
    sub_08002624(0x7a);
    DAT_02000a50 = DAT_02000a50 & 0x7fff;
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_08073250_caseD_8;
  }
  sub_080025D8(0x7a);
  sub_0801CFF0(param_1);
  iVar2 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  iVar2 = iVar2 * 0x1000000;
LAB_0807336e:
  if (iVar2 == 0) {
LAB_08073372:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_08073250_caseD_8:
  return in_lr;
}

