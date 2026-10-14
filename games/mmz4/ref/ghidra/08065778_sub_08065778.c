// sub_08065778 at 0x08065778 (thumb)

undefined4 sub_08065778(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_24 = 0x112;
  local_20 = 0x113;
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    iVar1 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar1 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_24 + iVar1));
    sub_08002B10(0x2f);
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc4) + 0xb4) = 1;
    }
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 != 0) {
      *(undefined *)(iVar1 + 0xb5) = 1;
      *(int *)(param_1 + 0xbc) = 0;
    }
    iVar1 = *(int *)(param_1 + 200);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *(undefined4 *)(iVar1 + 0xc) = 3;
      *(undefined4 *)(iVar1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
      *(int *)(param_1 + 200) = 0;
    }
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfc;
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
      *(undefined4 *)(iVar1 + 0xc) = 3;
      *(undefined4 *)(iVar1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(iVar1 + 9) * 4) + 0xc);
      *(int *)(param_1 + 0xd8) = 0;
    }
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    sub_0809AAA8(param_1,param_1 + 0x54,0,uVar5);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 1;
    sub_0801CF00(param_1,0xa715);
    *(uint *)(param_1 + 0x5c) = (uVar5 * 2 + -1) * 0x80;
    *(undefined *)(param_1 + 0x12) = 0x38;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    bVar4 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar4;
    iVar1 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c),0x38);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
    break;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    bVar4 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80;
    break;
  case 4:
    local_1c = 0x1000;
    local_18 = 0;
    uVar2 = sub_080D2578(param_1);
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    piVar3 = (int *)(param_1 + 0xb8);
    if (*piVar3 != 0) {
      if (1 < *(byte *)(*piVar3 + 0xc)) {
        *piVar3 = 0;
      }
      if (*piVar3 != 0) {
        return in_lr;
      }
    }
    goto LAB_08065988;
  case 6:
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_080657a0_caseD_8;
  }
  if (bVar4 != 0) {
LAB_08065988:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_080657a0_caseD_8:
  return in_lr;
}

