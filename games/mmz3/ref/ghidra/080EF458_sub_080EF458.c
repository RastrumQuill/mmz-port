// sub_080EF458 at 0x080EF458 (thumb)

undefined4 sub_080EF458(int param_1)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = 0;
    sub_08003F54();
    DAT_02002400 = 0;
    DAT_02002410 = 0;
    DAT_0200241e = 0xff;
    DAT_02002420 = 0;
    DAT_03002ac0 = 0;
    DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x100;
    sub_080E9250();
    sub_080E933C();
    sub_080EA120(&DAT_02030eb0);
    if (DAT_02002448 != '1') {
      sub_0800471C(6);
      DAT_02002448 = '1';
      sub_08008500();
      sub_080EA1B8(0xd9);
    }
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_080ef46c_caseD_2;
  case 3:
    goto switchD_080ef46c_caseD_3;
  case 4:
    goto switchD_080ef46c_caseD_4;
  case 5:
    goto switchD_080ef46c_caseD_5;
  case 6:
    goto switchD_080ef46c_caseD_6;
  case 7:
    goto switchD_080ef46c_caseD_7;
  case 8:
    goto switchD_080ef46c_caseD_8;
  case 9:
    goto switchD_080ef46c_caseD_9;
  default:
    goto switchD_080ef46c_caseD_a;
  }
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  if ((DAT_02002449 != '8') && (cVar2 = sub_080F88B8(), cVar2 != '\0')) {
    sub_0800471C(6);
    DAT_02002449 = '8';
    sub_08008500();
    sub_080EA1B8(0xda);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef46c_caseD_2:
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  if (DAT_0200244a != '>') {
    sub_0800471C(6);
    DAT_0200244a = '>';
    sub_08008500();
    sub_080EA1B8(0xd2);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef46c_caseD_3:
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  if ((DAT_0200244b != 'D') && (DAT_02030160[1] == '\x06')) {
    sub_0800471C(6);
    DAT_0200244b = 'D';
    sub_08008500();
    sub_080EA1B8(0xd3);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef46c_caseD_4:
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  if ((DAT_0200244c != 'J') && (*(short *)(param_1 + 0x625e) == 1)) {
    sub_0800471C(6);
    DAT_0200244c = 'J';
    sub_08008500();
    sub_080EA1B8(0xd4);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef46c_caseD_5:
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  if ((DAT_0200244e != 'V') &&
     (iVar5 = FUN_080fe2f8((int)*(short *)(DAT_02030160 + 10),DAT_02030160[0x10]), iVar5 == 100)) {
    sub_0800471C(6);
    DAT_0200244e = 'V';
    sub_08008500();
    sub_080EA1B8(0xd6);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef46c_caseD_6:
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  if ((DAT_0200244f != '\\') &&
     (iVar5 = FUN_080fe2f8((int)*(short *)(DAT_02030160 + 10),DAT_02030160[0x10]), iVar5 == 100)) {
    sub_0800471C(6);
    DAT_0200244f = '\\';
    sub_08008500();
    sub_080EA1B8(0xd7);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef46c_caseD_7:
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  if (((DAT_0200244d != 'P') && (DAT_02030160[1] == '\x06')) && ((DAT_0203010a & 8) != 0)) {
    sub_0800471C(6);
    DAT_0200244d = 'P';
    sub_08008500();
    sub_080EA1B8(0xd5);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef46c_caseD_8:
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  if (((DAT_02002450 != 'a') && (DAT_02030160[1] == '\x06')) && ((DAT_0203010a & 4) != 0)) {
    sub_0800471C(6);
    DAT_02002450 = 'a';
    sub_08008500();
    sub_080EA1B8(0xd8);
  }
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_080ef46c_caseD_9:
  if (DAT_02030c1a != 0) goto switchD_080ef46c_caseD_a;
  uVar1 = *(ushort *)(param_1 + 0x625c);
  if (uVar1 < 99) {
    *(ushort *)(param_1 + 0x625c) = uVar1 + 1;
  }
  pbVar6 = (byte *)(param_1 + 0x6270);
  sub_08019810(pbVar6);
  if (*(short *)(param_1 + 0x625e) == 1) {
    bVar4 = *pbVar6;
    bVar3 = 1;
LAB_080ef78c:
    *pbVar6 = bVar3 | bVar4;
  }
  else if (*(short *)(param_1 + 0x625e) == 2) {
    bVar4 = *pbVar6;
    bVar3 = 2;
    goto LAB_080ef78c;
  }
  if ((DAT_02030108 & 1) != 0) {
    *(byte *)(param_1 + 0x6274) = *(byte *)(param_1 + 0x6274) | 1;
  }
  bVar4 = DAT_02030108;
  if ((DAT_02030108 & 0x20) != 0) {
    *(byte *)(param_1 + 0x6274) = *(byte *)(param_1 + 0x6274) | 0x20;
  }
  if ((bVar4 & 0x80) != 0) {
    *(byte *)(param_1 + 0x6274) = *(byte *)(param_1 + 0x6274) | 0x80;
  }
  sub_0801978C(1,param_1 + 0x6270);
  uVar7 = *(undefined4 *)(param_1 + 0x641c);
  sub_0801987C(param_1 + 0x6410);
  *(undefined4 *)(param_1 + 0x641c) = uVar7;
  *DAT_02030160 = 2;
  iVar5 = param_1 + 0x6460;
  sub_080324DC(*(undefined4 *)(param_1 + 0x64ac),iVar5);
  sub_0803243C(iVar5);
  sub_080324A8(*(undefined4 *)(param_1 + 0x64ac),iVar5);
  sub_080EDB10(param_1,0xc00);
switchD_080ef46c_caseD_a:
  sub_080EA16C();
  return in_lr;
}

