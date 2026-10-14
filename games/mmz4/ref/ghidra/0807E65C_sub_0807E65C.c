// sub_0807E65C at 0x0807E65C (thumb)

undefined4 sub_0807E65C(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    sub_08002B10(0x14c);
    iVar2 = *(int *)(param_1 + 0xd8);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0xb4) = 1;
      *(int *)(param_1 + 0xd8) = 0;
    }
    iVar2 = *(int *)(param_1 + 0xd0);
    if (iVar2 != 0) {
      *(undefined *)(iVar2 + 0xbc) = 1;
      *(int *)(param_1 + 0xd0) = 0;
    }
    *(undefined *)(param_1 + 0xd4) = 0xf;
    DAT_02000a40 = 0;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 1;
    sub_0801CF00(param_1,0xb417);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    bVar1 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    goto joined_r0x0807e76e;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80;
joined_r0x0807e76e:
    if (bVar1 == 0) {
      return in_lr;
    }
    break;
  case 4:
    local_14 = 0xfffff800;
    local_10 = 0xfffff000;
    uVar3 = sub_080D2578(param_1,&local_14);
    *(undefined4 *)(param_1 + 0xdc) = uVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    piVar4 = (int *)(param_1 + 0xdc);
    if (*piVar4 != 0) {
      if (1 < *(byte *)(*piVar4 + 0xc)) {
        *piVar4 = 0;
      }
      if (*piVar4 != 0) {
        return in_lr;
      }
    }
    break;
  case 6:
    DAT_0202e922 = DAT_0202e922 | 2;
    break;
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_0807e672_caseD_8;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
switchD_0807e672_caseD_8:
  return in_lr;
}

