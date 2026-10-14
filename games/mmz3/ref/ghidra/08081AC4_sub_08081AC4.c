// sub_08081AC4 at 0x08081AC4 (thumb)

undefined4 sub_08081AC4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar4 + 0xc)) goto LAB_08081c44;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar4 + 0x1c);
    sub_08007390(param_1 + 0x74,&DAT_08364888);
    *(undefined *)(param_1 + 0x25) = 0xe;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08017700(param_1,0x4d05);
    }
    else {
      sub_08017700(param_1,0x4d0a);
    }
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x11) * 0x600 + -0x300;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = sub_08009A3C(iVar4 + *(int *)(param_1 + 0x5c) * 2);
    uVar3 = iVar4 << 0x10;
    break;
  case 2:
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08017700(param_1,0x4d0c);
    }
    else {
      sub_08017700(param_1,0x4d0d);
    }
    *(uint *)(iVar4 + 0xb4) = *(uint *)(iVar4 + 0xb4) | 0x200;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    uVar3 = *(uint *)(iVar4 + 0xb4) & 0x400;
    break;
  case 4:
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_08017700(param_1,0x4d05);
    }
    else {
      sub_08017700(param_1,0x4d0a);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar1;
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        uVar2 = *(uint *)(iVar4 + 0xb4);
        uVar3 = 0xffffff7f;
      }
      else {
        uVar2 = *(uint *)(iVar4 + 0xb4);
        uVar3 = 0xfffffeff;
      }
      *(uint *)(iVar4 + 0xb4) = uVar2 & uVar3;
LAB_08081c44:
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  default:
    goto switchD_08081ae2_caseD_6;
  }
  if (uVar3 != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
switchD_08081ae2_caseD_6:
  return in_lr;
}

