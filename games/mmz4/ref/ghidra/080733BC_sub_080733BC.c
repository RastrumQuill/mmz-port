// sub_080733BC at 0x080733BC (thumb)

undefined4 sub_080733BC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0x12e;
  local_1c = 0x12f;
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    iVar1 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar1 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_20 + iVar1));
    sub_08002B10(0x2f);
    *(undefined *)(param_1 + 200) = 0;
    *(undefined *)(*(int *)(param_1 + 0xb4) + 0xb4) = 0;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    sub_080AB2F4(param_1,param_1 + 0x54,0,uVar5);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0xae1b);
    *(uint *)(param_1 + 0x5c) = (uVar5 * 2 + -1) * 0x60;
    *(undefined4 *)(param_1 + 0x60) = 0x20;
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_080025D8(0x7a);
    sub_0801CFF0(param_1);
    bVar4 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar4;
    iVar1 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c),0x30);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
    iVar1 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x60),0x30);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar1;
    break;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_080025D8(0x7a);
    sub_0801CFF0(param_1);
    bVar4 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80;
    break;
  case 4:
    local_18 = 0xc00;
    local_14 = 0xffffef00;
    uVar2 = sub_080D2578(param_1);
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_080025D8(0x7a);
    sub_0801CFF0(param_1);
    piVar3 = (int *)(param_1 + 0xbc);
    if (*piVar3 != 0) {
      if (1 < *(byte *)(*piVar3 + 0xc)) {
        *piVar3 = 0;
      }
      if (*piVar3 != 0) {
        return in_lr;
      }
    }
    goto LAB_08073554;
  case 6:
    sub_08002624(0x7a);
    DAT_02000a50 = DAT_02000a50 & 0x7fff;
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_080733e4_caseD_8;
  }
  if (bVar4 != 0) {
LAB_08073554:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_080733e4_caseD_8:
  return in_lr;
}

