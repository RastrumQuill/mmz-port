// sub_08024194 at 0x08024194 (thumb)

undefined8 sub_08024194(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  switch(*param_1) {
  case '\0':
    *(uint *)(param_1 + 0x10) = (uint)*(byte *)(DAT_02030160 + 1);
    cVar1 = sub_080E1344(DAT_0203734c);
    if (cVar1 != '\0') {
      *(undefined *)(DAT_02030160 + 6) = 1;
      cVar1 = sub_080E1378(DAT_0203734c);
      if (cVar1 != '\0') {
        *(byte *)(DAT_02030160 + 7) = *(byte *)(DAT_02030160 + 7) & 0xf0 | 1;
      }
    }
    cVar1 = sub_080F88B8();
    if (cVar1 != '\0') {
      *(byte *)(DAT_02030160 + 7) = *(byte *)(DAT_02030160 + 7) & 0xf | 0x10;
    }
    uVar2 = sub_080E13CC(DAT_0203734c);
    DAT_02030170 = DAT_02030170 + (uVar2 & 0xff);
    sub_0801992C();
    DAT_020023c6 = 0x204;
    DAT_020023d0 = 0;
    DAT_020023c0 = DAT_020023c0 & 0xf0ff | 0x1300;
    sub_0800393C(&DAT_08547438,0x4000);
    sub_08003E14(&DAT_08547444,0);
    sub_0800393C(&DAT_085475dc,(DAT_020023c6 & 0xc) * 0x1000);
    sub_08003E14(&DAT_085475e8,0);
    sub_080F381C((DAT_020023c6 & 0x1f00) * 8 + 0x6000000,&DAT_0853d918,0,0);
    sub_08004048();
    sub_080040A8(0x40,0);
    DAT_02002410 = DAT_02002410 & 0xbfff;
    if (DAT_02030308 != 0xbe) {
      if (DAT_02030308 != 0xffffffff) {
        sub_080046A4(DAT_02030308 & 0xffff);
        DAT_02030308 = 0xffffffff;
      }
      sub_08004694(0xbe);
      DAT_02030308 = 0xbe;
    }
    DAT_020302f4 = 9;
    *param_1 = *param_1 + '\x01';
  case '\x01':
    sub_080041E4(0x40);
    if (DAT_020302f4 == 0) {
      DAT_03002ac0 = 0;
      param_1[1] = '\0';
LAB_080243e2:
      *param_1 = *param_1 + '\x01';
    }
    break;
  case '\x02':
    sub_080041E4(0x40);
    iVar3 = sub_08024478(param_1);
    if (iVar3 != 1) {
      param_1[1] = '\0';
      goto LAB_080243e2;
    }
    break;
  case '\x03':
    sub_080041E4(0x40);
    iVar3 = sub_08024908(param_1);
    if (iVar3 != 1) {
      param_1[1] = '\0';
      goto LAB_080243e2;
    }
    break;
  case '\x04':
    sub_080041E4(0x40);
    iVar3 = sub_080249EC(param_1);
    if (iVar3 != 1) {
      param_1[1] = '\0';
      goto LAB_080243e2;
    }
    break;
  case '\x05':
    sub_080041E4(0x40);
    iVar3 = sub_08024A78(param_1);
    if (iVar3 != 1) {
      param_1[1] = '\0';
      goto LAB_080243e2;
    }
    break;
  case '\x06':
    sub_080041E4(0x40);
    if (DAT_02030308 != 0xffffffff) {
      sub_080046A4(DAT_02030308 & 0xffff);
      DAT_02030308 = 0xffffffff;
    }
    DAT_020302f4 = 10;
    goto LAB_080243e2;
  case '\a':
    sub_080041E4(0x40);
    if (DAT_020302f4 == 0) {
      DAT_020023c0 = DAT_020023c0 & 0xedff;
      sub_08004230(0x40);
      sub_08004070();
      *(undefined2 *)(param_1 + 4) = 0x3c;
      *param_1 = *param_1 + '\x01';
      goto switchD_080241a8_caseD_8;
    }
    break;
  case '\b':
switchD_080241a8_caseD_8:
    if (*(short *)(param_1 + 4) == 0) {
      *(undefined *)(DAT_02030160 + 0x4c) = 0;
      sub_080324DC(DAT_0203734c,&DAT_02037300);
      sub_08024F94();
      uVar4 = 0;
      goto LAB_08024472;
    }
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
  }
  sub_08024F94();
  uVar4 = 1;
LAB_08024472:
  return CONCAT44(in_lr,uVar4);
}

