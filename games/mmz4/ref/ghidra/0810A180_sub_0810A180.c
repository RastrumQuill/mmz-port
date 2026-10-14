// sub_0810A180 at 0x0810A180 (thumb)

undefined4 sub_0810A180(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(iVar5 + 0x63a8);
  if (*(byte *)(param_1 + 0x11) < 3) {
    if (*(byte *)(iVar3 + 0xc0) == *(byte *)(param_1 + 0x11)) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar2 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar2 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar2;
    uVar4 = 0x3800;
    *(undefined4 *)(param_1 + 0x54) = 0x3800;
  }
  else {
    if ((uint)*(byte *)(iVar3 + 0xc1) == *(byte *)(param_1 + 0x11) - 3) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar2 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar2 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar2;
    *(undefined4 *)(param_1 + 0x54) = 0x3800;
    uVar4 = 0x6000;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  switch(*(undefined *)(param_1 + 0x11)) {
  case 0:
    uVar4 = 0x3400;
    goto LAB_0810a31a;
  case 1:
    sub_0801CF00(param_1,0x3401);
    iVar3 = *(int *)(param_1 + 0x58) + (uint)*(byte *)(iVar5 + 0xdcf) * 0x200;
    break;
  case 2:
    if (*(byte *)(iVar5 + 0xdf7) < 5) {
      if (*(byte *)(iVar3 + 0xc1) < 3) {
        iVar3 = 0x3402;
      }
      else {
        if (*(char *)(iVar3 + 0xe6) != -1) goto LAB_0810a2c0;
        iVar3 = 0x342b;
      }
LAB_0810a2c8:
      sub_0801CF00(param_1,iVar3);
    }
    else {
      if (2 < *(byte *)(iVar3 + 0xc0)) {
        if (*(char *)(iVar3 + 0xe6) == -1) {
          iVar3 = 0x342b;
        }
        else {
LAB_0810a2c0:
          iVar3 = *(byte *)(iVar3 + 0xe6) + 0x3421;
        }
        goto LAB_0810a2c8;
      }
      if (2 < *(byte *)(iVar3 + 0xc1)) {
        if (*(char *)(iVar3 + 0xe6) != -1) goto LAB_0810a2c0;
        iVar3 = 0x342b;
        goto LAB_0810a2c8;
      }
      sub_0801CF00(param_1,0x3402);
    }
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uint)*(byte *)(iVar5 + 0xdcf) * 0x300;
    iVar3 = *(int *)(param_1 + 0x58) + (uint)*(byte *)(iVar5 + 0xdcf) * 0x100;
    break;
  case 3:
    sub_0801CF00(param_1,0x3400);
    iVar3 = (uint)*(byte *)(iVar5 + 0xdcf) << 9;
    goto LAB_0810a3ba;
  case 4:
    uVar4 = 0x3401;
LAB_0810a31a:
    sub_0801CF00(param_1,uVar4);
    goto switchD_0810a21c_caseD_6;
  case 5:
    if (*(byte *)(iVar5 + 0xdf7) < 5) {
      if (*(byte *)(iVar3 + 0xc0) < 3) {
        iVar3 = 0x3402;
      }
      else {
        if (*(char *)(iVar3 + 0xe6) != -1) goto LAB_0810a388;
        iVar3 = 0x342b;
      }
LAB_0810a390:
      sub_0801CF00(param_1,iVar3);
    }
    else {
      if (2 < *(byte *)(iVar3 + 0xc1)) {
        if (*(char *)(iVar3 + 0xe6) == -1) {
          iVar3 = 0x342b;
        }
        else {
LAB_0810a388:
          iVar3 = *(byte *)(iVar3 + 0xe6) + 0x3421;
        }
        goto LAB_0810a390;
      }
      if (2 < *(byte *)(iVar3 + 0xc0)) {
        if (*(char *)(iVar3 + 0xe6) != -1) goto LAB_0810a388;
        iVar3 = 0x342b;
        goto LAB_0810a390;
      }
      sub_0801CF00(param_1,0x3402);
    }
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uint)*(byte *)(iVar5 + 0xdcf) * 0x300;
    iVar3 = (uint)*(byte *)(iVar5 + 0xdcf) << 8;
LAB_0810a3ba:
    iVar3 = *(int *)(param_1 + 0x58) - iVar3;
    break;
  default:
    goto switchD_0810a21c_caseD_6;
  }
  *(int *)(param_1 + 0x58) = iVar3;
switchD_0810a21c_caseD_6:
  if (*(char *)(iVar5 + 0xdcf) == '\0') {
    *(undefined *)(param_1 + 0x74) = 1;
  }
  return in_lr;
}

