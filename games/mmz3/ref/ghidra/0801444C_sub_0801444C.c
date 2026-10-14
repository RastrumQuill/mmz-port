// sub_0801444C at 0x0801444C (thumb)

undefined4 sub_0801444C(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    (&DAT_020023c4)[(uVar2 & 0xffff) >> 4] =
         (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) | 0x8044;
    sub_08004340(uVar2 & 0xff,&DAT_085222a0,0x60,0,0);
    sub_080043C4(((ushort)(&DAT_020023c4)[(uVar2 & 0xffff) >> 4] & 0x1f00) * 8 + 0x6000800,
                 &DAT_085222a0,0x5f,0,0);
    DAT_0202f4b4 = 0;
    DAT_0202f4b8 = 0;
    DAT_0202f4bc = 0;
    DAT_0202f4c4 = 0;
    DAT_0202f4c8 = 0;
    DAT_0202f4d0 = 0;
    DAT_0202f4d4 = 0;
    DAT_0202f4b0 = 0;
    DAT_0202f4c0 = 0;
    DAT_0202f4cc = 0;
    *(undefined2 *)(param_1 + 0x10) = 0x80;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if (2 < DAT_0202f4a4) {
      sub_0800471C(0x141);
      sub_0801ACF8(4,&DAT_020302c0);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08014468_caseD_2:
      if (0x10000 < DAT_0202f4b8) {
        DAT_0202f4a4 = DAT_0202f4a4 + 1;
LAB_08014604:
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    break;
  case 2:
  case 4:
  case 6:
  case 8:
    goto switchD_08014468_caseD_2;
  case 3:
  case 5:
  case 7:
    DAT_0202f4b8 = 0x10000;
    if ((DAT_0202f4a4 & 1) == 0) break;
    if (*(char *)(param_1 + 0xe) == '\x03') {
      sub_08004768(0x141);
      sub_0800471C(0x142);
      uVar1 = 0x200;
    }
    else {
      sub_08004768(0x142);
      sub_0800471C(0x141);
      uVar1 = 0x80;
    }
    *(undefined2 *)(param_1 + 0x10) = uVar1;
    DAT_0202f4b8 = -0x10000;
    goto LAB_08014604;
  case 9:
    if (*(ushort *)(param_1 + 0x12) < 0x40) {
      *(ushort *)(param_1 + 0x12) = *(ushort *)(param_1 + 0x12) + 1;
    }
    else {
      iVar3 = 0x1e000 - DAT_0202f4bc >> 5;
      if (iVar3 < DAT_0202f4b0) {
        DAT_0202f4b0 = iVar3;
      }
      if (iVar3 == 0) {
        sub_080092B4(0xf7,100,&DAT_0834208c);
        DAT_0202f4bc = 0x1e000;
        sub_08004768(0x141);
        sub_08004768(0x142);
        sub_0800471C(0x143);
        sub_0800471C(0x144);
        sub_0801ACF8(2,&DAT_020302c0);
        DAT_0202f4a4 = DAT_0202f4a4 + 1;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    DAT_0202f4bc = DAT_0202f4bc +
                   (DAT_0202f4b0 * (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)] >> 8);
    DAT_0202f4b8 = DAT_0202f4b8 +
                   (DAT_0202f4b0 *
                    *(short *)((int)&DAT_080fe64c +
                              ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) >> 8);
    DAT_0202f4b4 = DAT_0202f4bc + (*(int *)(param_1 + 0x34) * 0x100 + -0xe6800 >> 2);
    break;
  case 10:
    DAT_0202f4b4 = DAT_0202f4bc + (*(int *)(param_1 + 0x34) * 0x100 + -0xe6800 >> 2);
  }
  if (*(byte *)(param_1 + 0xe) < 9) {
    iVar3 = *(int *)(param_1 + 0x34) * 0x100 + -0xe6800;
    DAT_0202f4b4 = iVar3 >> 2;
    DAT_0202f4c4 = iVar3 * 3 >> 4;
    DAT_0202f4d0 = iVar3 >> 3;
  }
  if ((byte)(*(byte *)(param_1 + 0xe) - 2) < 7) {
    uVar2 = (uint)*(ushort *)(param_1 + 0x10);
    iVar3 = uVar2 * 3;
    iVar4 = uVar2 * 6;
    if ((int)(DAT_0202f4b0 + uVar2 * -6) < 0 != SBORROW4(DAT_0202f4b0,iVar4)) {
      DAT_0202f4b0 = DAT_0202f4b0 + 6;
    }
    if (DAT_0202f4b0 != iVar4 &&
        (int)(DAT_0202f4b0 + uVar2 * -6) < 0 == SBORROW4(DAT_0202f4b0,iVar4)) {
      DAT_0202f4b0 = DAT_0202f4b0 + -6;
    }
    DAT_0202f4b8 = DAT_0202f4b8 + DAT_0202f4b0;
    iVar4 = uVar2 * 4;
    if ((int)(DAT_0202f4c0 + uVar2 * -4) < 0 != SBORROW4(DAT_0202f4c0,iVar4)) {
      DAT_0202f4c0 = DAT_0202f4c0 + 4;
    }
    if (DAT_0202f4c0 != iVar4 &&
        (int)(DAT_0202f4c0 + uVar2 * -4) < 0 == SBORROW4(DAT_0202f4c0,iVar4)) {
      DAT_0202f4c0 = DAT_0202f4c0 + -4;
    }
    DAT_0202f4c8 = DAT_0202f4c8 + DAT_0202f4c0;
    if ((int)(DAT_0202f4cc + uVar2 * -3) < 0 != SBORROW4(DAT_0202f4cc,iVar3)) {
      DAT_0202f4cc = DAT_0202f4cc + 3;
    }
    if (DAT_0202f4cc != iVar3 &&
        (int)(DAT_0202f4cc + uVar2 * -3) < 0 == SBORROW4(DAT_0202f4cc,iVar3)) {
      DAT_0202f4cc = DAT_0202f4cc + -3;
    }
    DAT_0202f4d4 = DAT_0202f4d4 + DAT_0202f4cc;
  }
  return in_lr;
}

