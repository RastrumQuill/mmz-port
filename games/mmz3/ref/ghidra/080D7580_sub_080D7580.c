// sub_080D7580 at 0x080D7580 (thumb)

undefined4 sub_080D7580(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    DAT_0202fb80 = 0x380;
    DAT_0202f980 = 8;
    sub_0800393C(&DAT_085d8758,0x13000);
    sub_08003E14(&DAT_085d8764,(DAT_0202f980 - 4) * 0x20 + 0x200);
    sub_08017700(param_1,0xb800);
    iVar4 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar4 + -0x1800;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x10;
    iVar4 = 0x5f;
    do {
      iVar3 = *(int *)(param_1 + 0x60) + 0x10;
      *(int *)(param_1 + 0x60) = iVar3;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080177F4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    if (iVar4 != 0) goto switchD_080d7594_caseD_5;
    DAT_03002ec4 = 0x40;
    DAT_03002ec6 = 0x1c0;
    sub_08017700(param_1,0xb801);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    break;
  case 2:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080d7594_caseD_5;
    sub_08017700(param_1,0xb802);
    sub_0800471C(0x13d);
    break;
  case 3:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08017700(param_1,0xb802);
    }
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 0x1f) == 0) {
      sub_08017700(param_1,0xb803);
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080d7594_caseD_5;
    sub_08004768(0x13d);
    DAT_03002ec4 = 0x40;
    DAT_03002ec6 = 0x1c0;
    sub_08017700(param_1,0xb800);
    *(int *)(param_1 + 0x40) = param_1 + 100;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined *)(param_1 + 0x13) = 0x40;
    break;
  case 4:
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080d7594_caseD_5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar2 < 0x1000) goto switchD_080d7594_caseD_5;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080d7594_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080d7594_caseD_5:
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x4800) &&
     (*(int *)(param_1 + 0x60) < 0)) {
    bVar1 = *(byte *)(param_1 + 0x13);
    iVar4 = bVar1 + 1;
    *(char *)(param_1 + 0x13) = (char)iVar4;
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 0x54) +
         *(short *)((int)&DAT_080fe64c + ((bVar1 + 0x41) * 0x1000000 >> 0x17)) * 4;
    *(int *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x58) +
         *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 * 0x2000000) >> 0x17)) * -8;
  }
  return in_lr;
}

