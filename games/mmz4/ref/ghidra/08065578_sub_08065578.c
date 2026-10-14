// sub_08065578 at 0x08065578 (thumb)

undefined4 sub_08065578(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0x112;
  local_1c = 0x113;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    iVar2 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar2 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_20 + iVar2));
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc4) + 0xb4) = 1;
    }
    iVar2 = *(int *)(param_1 + 0xbc);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0xb5) = 1;
      *(int *)(param_1 + 0xbc) = 0;
    }
    iVar2 = *(int *)(param_1 + 200);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
      *(int *)(param_1 + 200) = 0;
    }
    iVar2 = *(int *)(param_1 + 0xd8);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
      *(int *)(param_1 + 0xd8) = 0;
    }
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 1;
    sub_0801CF00(param_1,0xa714);
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
    goto LAB_0806574c;
  case 4:
    local_18 = 0;
    local_14 = 0;
    uVar1 = sub_080D2578(param_1);
    *(undefined4 *)(param_1 + 0xb8) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    piVar3 = (int *)(param_1 + 0xb8);
    if (*piVar3 != 0) {
      if (1 < *(byte *)(*piVar3 + 0xc)) {
        *piVar3 = 0;
      }
      iVar2 = *piVar3;
      goto LAB_08065748;
    }
    goto LAB_0806574c;
  case 6:
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_08065598_caseD_8;
  }
  sub_0801CFF0(param_1);
  iVar2 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar2;
  iVar2 = iVar2 * 0x1000000;
LAB_08065748:
  if (iVar2 == 0) {
LAB_0806574c:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_08065598_caseD_8:
  return in_lr;
}

