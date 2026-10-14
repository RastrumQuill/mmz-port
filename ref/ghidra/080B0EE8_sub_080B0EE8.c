// sub_080B0EE8 at 0x080B0EE8 (thumb)

undefined4 sub_080B0EE8(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,*(undefined *)(param_1 + 0x11));
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x12) = 0;
  switch(*(undefined *)(param_1 + 0x10)) {
  case 1:
    if (DAT_02022b60 == 5) {
      uVar1 = 0x254;
    }
    else {
      if (DAT_02022b60 != 6) {
        if ((*(uint *)(DAT_02022b20 + 0x10) & 0x20) == 0) {
          *(undefined2 *)(param_1 + 0xc4) = 0x253;
          *(undefined *)(param_1 + 0x12) = 1;
          goto switchD_080b0f2a_caseD_b;
        }
        goto LAB_080b1102;
      }
      uVar1 = 0x255;
    }
    break;
  case 2:
    if ((*(uint *)(DAT_02022b20 + 0x10) & 0x20) != 0) {
      iVar2 = (uint)*(byte *)(param_1 + 9) << 2;
      goto LAB_080b1108;
    }
    uVar1 = 0x253;
    break;
  case 3:
    if (DAT_02022b60 == 6) {
      uVar1 = 600;
    }
    else {
      if ((*(uint *)(DAT_02022b20 + 0x14) & 0x80) != 0) goto LAB_080b1102;
      uVar1 = 599;
    }
    break;
  case 4:
    if ((*(uint *)(DAT_02022b20 + 0x10) & 0x60) != 0x20) {
      iVar2 = (uint)*(byte *)(param_1 + 9) << 2;
      goto LAB_080b1108;
    }
    uVar1 = 0x259;
    break;
  case 5:
    uVar1 = 0x25a;
    break;
  case 6:
    if (DAT_02022b60 == 10) {
      uVar1 = 0x26e;
    }
    else {
      uVar1 = 0x25c;
    }
    break;
  case 7:
    if (((*(uint *)(DAT_02022b20 + 0x10) & 0x600) != 0x200) || (DAT_02022b60 != 0)) {
LAB_080b1102:
      iVar2 = (uint)*(byte *)(param_1 + 9) << 2;
LAB_080b1108:
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(&DAT_082b5184 + iVar2) + 0xc);
      return in_lr;
    }
    uVar1 = 0x25e;
    break;
  case 8:
    uVar1 = 0x25f;
    break;
  case 9:
    if (DAT_02022b60 == 0xc) {
      uVar1 = 0x269;
    }
    else {
      uVar1 = 0x260;
    }
    break;
  case 10:
    if ((*(uint *)(DAT_02022b20 + 0x10) & 8) != 0) {
      iVar2 = (uint)*(byte *)(param_1 + 9) << 2;
      goto LAB_080b1108;
    }
    uVar1 = 0x256;
    break;
  case 0xb:
    if ((*(uint *)(DAT_02022b20 + 0x10) & 8) != 0) goto LAB_080b1102;
    uVar1 = 0x264;
    break;
  default:
    goto switchD_080b0f2a_caseD_b;
  }
  *(undefined2 *)(param_1 + 0xc4) = uVar1;
switchD_080b0f2a_caseD_b:
  sub_080014E8(&DAT_085104c4,(DAT_020231ea - 0x100) * 0x20 + 0x10000);
  sub_0800179C(&DAT_085104d0,(DAT_0202315d - 10) * 0x20 + 0x200);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&DAT_082b6b3c,param_1 + 0x4c,0x60);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0x80b1355;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  uVar3 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080B11CC(param_1);
  return in_lr;
}

