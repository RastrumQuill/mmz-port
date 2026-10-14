// sub_080C5BC8 at 0x080C5BC8 (thumb)

undefined4 sub_080C5BC8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0x8d00);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    sub_080128D4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    if (*(char *)(param_1 + 0x11) != '\0') {
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      if ((uVar2 * 2 >> 0x11 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    if (*(int *)(param_1 + 0x60) != 0) goto switchD_080c5bdc_caseD_5;
    DAT_03002ec4 = 0x40;
    DAT_03002ec6 = 0x1c0;
    sub_080127E4(param_1,0x8d01);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    break;
  case 2:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') goto switchD_080c5bdc_caseD_5;
    sub_080127E4(param_1,0x8d02);
    sub_080032EC(0x59);
    break;
  case 3:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_080127E4(param_1,0x8d02);
    }
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    if ((uVar2 * 2 >> 0x11 & 0x1f) == 0) {
      sub_080127E4(param_1,0x8d03);
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      if ((uVar2 * 2 >> 0x11 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto switchD_080c5bdc_caseD_5;
    sub_08003338(0x59);
    DAT_03002ec4 = 0x40;
    DAT_03002ec6 = 0x1c0;
    sub_080127E4(param_1,0x8d00);
    *(int *)(param_1 + 0x40) = param_1 + 100;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    *(undefined *)(param_1 + 0x13) = 0x40;
    break;
  case 4:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x11) != '\0') {
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      if ((uVar2 * 2 >> 0x11 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto switchD_080c5bdc_caseD_5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
    if (uVar2 < 0x1000) goto switchD_080c5bdc_caseD_5;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    break;
  default:
    goto switchD_080c5bdc_caseD_5;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c5bdc_caseD_5:
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == -0x7300) &&
     (*(int *)(param_1 + 0x60) < 0)) {
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 0x54) +
         (short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff] * 4;
    *(int *)(param_1 + 0x68) =
         *(int *)(param_1 + 0x58) +
         (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x13) & 0x7f) * 2] * -8;
  }
  return in_lr;
}

