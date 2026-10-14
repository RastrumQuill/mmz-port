// sub_080F1938 at 0x080F1938 (thumb)

undefined4 sub_080F1938(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    break;
  case 1:
    goto switchD_080f194a_caseD_1;
  case 2:
    if (DAT_02030c1a == 0) {
      sub_080EDB10(param_1,0x400);
      return in_lr;
    }
    goto LAB_080f1af8;
  case 3:
    if (DAT_02030c1a == 0) {
      DAT_020302f4 = 2;
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      goto switchD_080f194a_caseD_4;
    }
LAB_080f1af8:
    DAT_02030c18 = DAT_02030c18 | 2;
    return in_lr;
  case 4:
switchD_080f194a_caseD_4:
    if (DAT_020302f4 != 0) {
      return in_lr;
    }
    sub_080EDE88(param_1);
    sub_080EDB10(param_1,2);
    return in_lr;
  case 5:
    sub_080EDF3C(param_1);
    DAT_020302f4 = 1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 6:
    if (DAT_020302f4 != 0) {
      return in_lr;
    }
    goto LAB_080f1b62;
  default:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    if (DAT_02030c2e == 9) {
      if (DAT_02030c1a == 0) {
        DAT_02030be4 = &DAT_08372f86;
        sub_080EA1C8(0x100,0x5a);
        sub_080F8884(0x5b);
        return in_lr;
      }
      goto LAB_080f1af8;
    }
    *(undefined *)(param_1 + 3) = 0;
  }
  sub_080EA244(0x66);
  *(undefined2 *)(param_1 + 10) = 0;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
switchD_080f194a_caseD_1:
  if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
    return in_lr;
  }
  sVar2 = sub_080F2DC4(param_1);
  if (sVar2 == 0) {
    return in_lr;
  }
  if (0 < sVar2) {
    uVar1 = 3;
    goto LAB_080f1b64;
  }
  if (sVar2 != -1) {
    sub_0800471C(3);
    uVar1 = 2;
    goto LAB_080f1b64;
  }
  if ((DAT_02030105 & 4) == 0) {
    sub_080EA2B0(0x207);
  }
  else if ((DAT_02030105 & 8) == 0) {
    if (DAT_0203010d == 0) {
      sub_080EA2B0(0x208);
      if ((*(byte *)(DAT_0203df90 + 0x16) & 0xf) >> 3 == 0) {
        DAT_0203010d = 1;
      }
      else {
LAB_080f1a6a:
        DAT_0203010d = 2;
      }
    }
    else {
      if (DAT_0203010d == 1) {
        sub_080EA2B0(0x209);
        goto LAB_080f1a6a;
      }
      sub_080EA2B0(0x20e);
    }
  }
  else if ((DAT_02030106 & 1) == 0) {
    if (DAT_0203010d < 3) {
      sub_080EA2B0(0x20a);
      DAT_0203010d = 3;
    }
    else {
      sub_080EA2B0(0x20b);
    }
  }
  else if (DAT_0203010d < 4) {
    sub_080EA2B0(0x20c);
    DAT_0203010d = 4;
  }
  else {
    sub_080EA2B0(0x20d);
  }
LAB_080f1b62:
  uVar1 = 0xff;
LAB_080f1b64:
  *(undefined *)(param_1 + 3) = uVar1;
  return in_lr;
}

