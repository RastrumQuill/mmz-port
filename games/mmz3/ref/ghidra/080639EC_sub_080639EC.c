// sub_080639EC at 0x080639EC (thumb)

undefined4 sub_080639EC(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if ((DAT_02030108 & 0x40) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    goto LAB_08063d28;
  }
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    sub_08017700(param_1,0x1404);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    uVar6 = *(uint *)(param_1 + 0x8c);
    if (((((uVar6 & 0x200) == 0) || (*(char *)(param_1 + 0xb9) != '\0')) || ((uVar6 & 0x10000) == 0)
        ) || (sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40),
             sVar3 == 0)) {
      cVar2 = '\n';
    }
    else {
      local_18 = *(int *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x1400;
      cVar2 = *(char *)(param_1 + 0xd) + '\x01';
    }
    *(char *)(param_1 + 0xd) = cVar2;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
switchD_08063a4c_caseD_1:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
LAB_08063cae:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_08063a4c_caseD_5:
    return in_lr;
  case 1:
  case 10:
    goto switchD_08063a4c_caseD_1;
  case 2:
    sub_08017528(param_1);
    sub_08017700(param_1,0x1406);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    sub_080B6304(param_1);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    sub_080177F4(param_1);
    bVar1 = *(byte *)(param_1 + 0x12);
    iVar5 = (uint)(bVar1 >> 5) + (uint)*(byte *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = (char)iVar5;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         ((int)*(short *)((int)&DAT_080fe64c + (((uint)bVar1 + iVar5) * 0x1000000 >> 0x17)) -
         (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)]) * -10;
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(byte *)(param_1 + 0x24) = bVar1;
      uVar6 = (uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x13);
      local_18 = *(int *)(param_1 + 0x54) +
                 ((int)*(short *)((int)&DAT_080fe64c + ((uVar6 + 0x40) * 0x1000000 >> 0x17)) -
                 (int)*(short *)((int)&DAT_080fe64c +
                                ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))) * 10;
      *(int *)(param_1 + 0x54) = local_18;
      *(char *)(param_1 + 0x12) = (char)uVar6;
      if ((uVar6 & 0xff) < 0x40) {
        return in_lr;
      }
      iVar5 = -0xa00;
    }
    else {
      *(byte *)(param_1 + 0x24) = bVar1;
      uVar6 = (uint)*(byte *)(param_1 + 0x12) + (uint)*(byte *)(param_1 + 0x13);
      local_18 = *(int *)(param_1 + 0x54) +
                 ((int)*(short *)((int)&DAT_080fe64c + ((uVar6 + 0x40) * 0x1000000 >> 0x17)) -
                 (int)*(short *)((int)&DAT_080fe64c +
                                ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17))) * -10;
      *(int *)(param_1 + 0x54) = local_18;
      *(char *)(param_1 + 0x12) = (char)uVar6;
      if ((uVar6 & 0xff) < 0x40) {
        return in_lr;
      }
      iVar5 = 0xa00;
    }
    local_18 = local_18 + iVar5;
    local_14 = *(undefined4 *)(param_1 + 0x58);
    sub_080B2484(1,&local_18);
    sub_0800471C(0x2a);
    goto LAB_08063cae;
  case 4:
    break;
  default:
    goto switchD_08063a4c_caseD_5;
  case 0xb:
    local_18 = *(int *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + -0xa00;
    sub_080B2484(1,&local_18);
    local_14 = local_14 + -0xc00;
    sub_080B2484(2,&local_18);
    sub_0800471C(0x2a);
    sub_080B634C(param_1,&local_18);
  }
  sub_08024FE4(4,param_1 + 0x54);
  if (DAT_0203016c < 9999) {
    DAT_0203016c = DAT_0203016c + 1;
  }
  sub_080250C4(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0xc) = 4;
  uVar4 = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_08063d28:
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}

