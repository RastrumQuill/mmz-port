// sub_08065CF4 at 0x08065CF4 (thumb)

undefined4 sub_08065CF4(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_08066030;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_080127E4(param_1,0x6d04);
    if (*(int *)(param_1 + 0xb8) < 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    uVar5 = *(uint *)(param_1 + 0x8c);
    if ((((uVar5 & 0x200) == 0) || ((uVar5 & 0x10000) == 0)) ||
       (sVar3 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40),
       sVar3 == 0)) {
      cVar1 = '\n';
    }
    else {
      local_1c = *(int *)(param_1 + 0x54);
      local_18 = *(int *)(param_1 + 0x58) + -0x1400;
      cVar1 = *(char *)(param_1 + 0xd) + '\x01';
    }
    *(char *)(param_1 + 0xd) = cVar1;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
switchD_08065d54_caseD_1:
    sub_080128D4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08065fb6:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_08065d54_caseD_5:
    return in_lr;
  case 1:
  case 10:
    goto switchD_08065d54_caseD_1;
  case 2:
    sub_0801260C(param_1);
    sub_080127E4(param_1,0x6d06);
    if (*(int *)(param_1 + 0xb8) < 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    sub_080B9AC0(param_1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sub_080128D4(param_1);
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x13) = (bVar2 >> 5) + *(char *)(param_1 + 0x13);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((int)(short)(&DAT_080ef450)
                      [(uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x13) & 0xff] -
         (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)]) * -10;
    if (*(int *)(param_1 + 0xb8) < 0) {
      *(byte *)(param_1 + 0x24) = bVar2;
      local_1c = *(int *)(param_1 + 0x54) +
                 ((int)(short)(&DAT_080ef450)
                              [(uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x13) +
                               0x40 & 0xff] -
                 (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff]) * -10;
      *(int *)(param_1 + 0x54) = local_1c;
      bVar2 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2;
      if (bVar2 < 0x40) {
        return in_lr;
      }
      local_1c = local_1c + 0xa00;
    }
    else {
      *(byte *)(param_1 + 0x24) = bVar2;
      local_1c = *(int *)(param_1 + 0x54) +
                 ((int)(short)(&DAT_080ef450)
                              [(uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x13) +
                               0x40 & 0xff] -
                 (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff]) * 10;
      *(int *)(param_1 + 0x54) = local_1c;
      bVar2 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar2;
      if (bVar2 < 0x40) {
        return in_lr;
      }
      local_1c = local_1c + -0xa00;
    }
    local_18 = *(undefined4 *)(param_1 + 0x58);
    sub_080AC60C(1,&local_1c);
    sub_080032EC(0x2a);
    goto LAB_08065fb6;
  case 4:
    break;
  default:
    goto switchD_08065d54_caseD_5;
  case 0xb:
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0xa00;
    sub_080AC60C(1,&local_1c);
    local_18 = local_18 + -0xc00;
    sub_080AC60C(2,&local_1c);
    sub_080032EC(0x2a);
    sub_080B9B08(param_1,&local_1c);
  }
  sub_0801DD2C(4,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  uVar4 = *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_08066030:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

