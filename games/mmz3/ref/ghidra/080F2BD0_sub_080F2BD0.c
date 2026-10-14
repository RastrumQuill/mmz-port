// sub_080F2BD0 at 0x080F2BD0 (thumb)

undefined4 sub_080F2BD0(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 3)) {
  case 0:
    break;
  default:
    sub_080F0C44(param_1);
    return in_lr;
  case 2:
    goto switchD_080f2be2_caseD_2;
  case 3:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  case 4:
    if (DAT_02030c1a != 0) {
      DAT_02030c18 = DAT_02030c18 | 2;
      return in_lr;
    }
    sub_080EDB10(param_1,0x400);
    return in_lr;
  case 0xb:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sub_080EA2B0(0x130f);
    uVar1 = 3;
    goto LAB_080f2ca4;
  }
  sub_080EA244(0x130e);
  *(undefined *)(param_1 + 3) = 2;
switchD_080f2be2_caseD_2:
  if (((DAT_02030c1a == 0) || (DAT_02030c1a == 4)) &&
     (uVar2 = sub_080F2DC4(param_1), (uVar2 & 0xffff) != 0)) {
    if ((int)(uVar2 * 0x10000) < 1) {
      uVar1 = 0xb;
    }
    else {
      uVar1 = 0x12;
    }
LAB_080f2ca4:
    *(undefined *)(param_1 + 3) = uVar1;
  }
  return in_lr;
}

