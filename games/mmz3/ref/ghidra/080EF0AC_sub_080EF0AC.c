// sub_080EF0AC at 0x080EF0AC (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080EF0AC(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    *(undefined *)(param_1 + 3) = 0;
    uVar5 = 0;
    do {
      iVar4 = sub_08003330(uVar5 & 0xff,0x250);
      if (iVar4 != 0) {
        *(undefined *)(param_1 + 3) = 1;
      }
      uVar2 = uVar5 * 0x10000 + 0x10000;
      uVar5 = uVar2 >> 0x10;
    } while ((int)uVar2 >> 0x10 < 5);
    DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x3d00;
    DAT_020023c8 = 0x406;
    DAT_020023d4 = 0;
    DAT_020023ca = 0x606;
    _DAT_020023d8 = 0;
    sub_0800393C(&DAT_08547a78,0x4000);
    sub_08003E14(&DAT_08547a84,0);
    sub_08004340(0x24,&DAT_085222a0,0x67,0,0);
    sub_08004340(0x38,&DAT_085222a0,0x66,0,0);
    sub_080E9250();
    sub_080E933C();
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    iVar4 = *(ushort *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = (short)iVar4;
    DAT_03002ec0 = (undefined)iVar4;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (0x1f < iVar4 * 0x10000 >> 0x10) {
      sub_08004694(0xa1);
      *(undefined2 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef0c2_caseD_2:
      if ((DAT_02002136 & 0x40) != 0) {
        sub_0800471C(1);
        sVar1 = sub_080FE390(*(short *)(param_1 + 6) + 2,3);
        *(short *)(param_1 + 6) = sVar1;
        if ((sVar1 == 1) && (*(char *)(param_1 + 3) == '\0')) {
          *(undefined2 *)(param_1 + 6) = 0;
        }
      }
      if ((DAT_02002136 & 0x80) != 0) {
        sub_0800471C(1);
        sVar1 = sub_080FE390(*(short *)(param_1 + 6) + 1,3);
        *(short *)(param_1 + 6) = sVar1;
        if ((sVar1 == 1) && (*(char *)(param_1 + 3) == '\0')) {
          *(undefined2 *)(param_1 + 6) = 2;
        }
      }
      if ((DAT_02002136 & 9) != 0) {
        sub_0800471C(2);
        sub_080046A4(0xa1);
        *(undefined2 *)(param_1 + 4) = 0x20;
        *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
      }
    }
    break;
  case 2:
    goto switchD_080ef0c2_caseD_2;
  case 3:
    sVar1 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar1;
    DAT_03002ec0 = (undefined)sVar1;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar1 != 0) break;
    DAT_020023c0 = DAT_020023c0 & 0xc3ff;
    *(undefined2 *)(param_1 + 4) = 0x60;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 4:
    iVar4 = *(ushort *)(param_1 + 4) - 1;
    *(short *)(param_1 + 4) = (short)iVar4;
    if ((iVar4 * 0x10000 >> 0x10 == -1) || (iVar4 = sub_080046DC(0xa1), iVar4 == 0)) {
      if (*(short *)(param_1 + 6) == 0) {
        *DAT_02030160 = 2;
        DAT_02030160[1] = (char)*(undefined2 *)(param_1 + 0x6262);
        DAT_02030160[0x4c] = 0;
        sub_080FE110(param_1 + 0x6490,param_1 + 0x6460,0);
        FUN_080fe114(param_1 + 0x6490,param_1 + 0x6460,&DAT_04000003);
        sub_0801978C(*(undefined *)(param_1 + 0x6260),param_1 + 0x62c4);
        sub_08019850(param_1 + 0x6270);
        sub_080FE110(param_1 + 0x6348,param_1 + 0x6318,8);
        FUN_080fe114(param_1 + 0x6368,param_1 + 0x6338,&DAT_04000004);
        sub_080FE110(param_1 + 0x63c4,param_1 + 0x6378,0x10);
        FUN_080fe114(param_1 + 0x6404,param_1 + 0x63b8,&DAT_04000003);
        sub_0801A02C(*(undefined *)(param_1 + 0x6260));
        uVar3 = 0x300;
      }
      else {
        if (*(short *)(param_1 + 6) != 1) {
          sub_08002398();
          break;
        }
        uVar3 = 0x100;
      }
      sub_080EDB10(param_1,uVar3);
    }
    break;
  default:
    break;
  }
  iVar4 = 0x410;
  if (*(short *)(param_1 + 6) != 0) {
    iVar4 = 0x412;
  }
  sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar4),0,8);
  iVar4 = 0x414;
  if (*(short *)(param_1 + 6) != 1) {
    iVar4 = 0x416;
  }
  sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar4),0,10);
  iVar4 = 0x418;
  if (*(short *)(param_1 + 6) != 2) {
    iVar4 = 0x41a;
  }
  sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836e9d8 + iVar4),0,0xc);
  if ((DAT_03002a60 & 1) != 0) {
    _DAT_020023d8 = CONCAT22(DAT_020023da + -1,_DAT_020023d8 + 1);
  }
  return in_lr;
}

