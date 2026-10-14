// sub_0806EE38 at 0x0806EE38 (thumb)

undefined4 sub_0806EE38(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08002B10(0x2f);
    sub_08002624(0x76);
    sub_08002624(0x77);
    sub_08002624(0x78);
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    pbVar5 = (byte *)(param_1 + 0xc2);
    *(byte *)(param_1 + 0x4c) = *pbVar5 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((*pbVar5 & 1) << 4);
    if ((*pbVar5 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
    sub_080A7608(param_1,param_1 + 0x54,0,uVar6);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0xad0c);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    iVar2 = FUN_081288bc((0x50 - (uint)*(byte *)(param_1 + 0x12)) * 0x40,0x50);
    iVar2 = (int)*(short *)((int)&DAT_08128c10 + ((uint)(iVar2 << 0x18) >> 0x17));
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + (uVar6 * 2 + -1) * 6 * iVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar2 * -0xc;
    break;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80;
    break;
  case 4:
    local_18 = 0x600;
    local_14 = 0x1000;
    uVar3 = sub_080D2578(param_1,&local_18);
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    piVar4 = (int *)(param_1 + 0xd0);
    if (*piVar4 != 0) {
      if (1 < *(byte *)(*piVar4 + 0xc)) {
        *piVar4 = 0;
      }
      if (*piVar4 != 0) {
        return in_lr;
      }
    }
    goto LAB_0806effa;
  case 6:
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_0806ee56_caseD_8;
  }
  if (bVar1 != 0) {
LAB_0806effa:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_0806ee56_caseD_8:
  return in_lr;
}

