// sub_08016528 at 0x08016528 (thumb)

undefined4 sub_08016528(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_0801653c_caseD_1;
  case 2:
    goto switchD_0801653c_caseD_2;
  case 3:
    goto switchD_0801653c_caseD_3;
  case 4:
    sVar2 = *(short *)(param_1 + 0x12) + -1;
    *(short *)(param_1 + 0x12) = sVar2;
    if (sVar2 != 0) goto switchD_0801653c_caseD_5;
    DAT_0202f4a4 = '\0';
    cVar1 = '\x01';
    goto LAB_08016668;
  default:
    goto switchD_0801653c_caseD_5;
  }
  (&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] =
       (&DAT_020023c4)[*(uint *)(param_1 + 0x5c) >> 4] & 0xfffc | 3;
  DAT_0202f4a5 = 0;
  DAT_02002400 = 0x3f40;
  sub_080040A8(0x6b,0);
  sub_080040A8(0x6c,0);
  sub_080040A8(0x6d,0);
  sub_080040A8(0x6e,0);
  sub_080040A8(0x6f,0);
  sub_080040A8(0x70,0);
  sub_080040A8(0x74,0);
  sub_080040A8(0x75,0);
  sub_080040A8(0x76,0);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0801653c_caseD_1:
  if (DAT_0202f4a4 != '\0') {
    sub_080040A8(0x72,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0801653c_caseD_2:
    cVar1 = sub_080041E4(0x72);
    if ((cVar1 == '\x04') && (DAT_0202f4a4 == '\x02')) {
      sub_08004230(0x72);
      sub_080040A8(0x73,0);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_0801653c_caseD_3:
      cVar1 = sub_080041E4(0x73);
      if (cVar1 == '\x03') {
        sub_08004230(0x73);
        *(undefined2 *)(param_1 + 0x12) = 0x78;
        cVar1 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08016668:
        *(char *)(param_1 + 0xe) = cVar1;
      }
    }
  }
switchD_0801653c_caseD_5:
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  sub_080041E4(0x6b);
  sub_080041E4(0x6c);
  sub_080041E4(0x6d);
  sub_080041E4(0x6e);
  sub_080041E4(0x6f);
  sub_080041E4(0x70);
  sub_080041E4(0x74);
  sub_080041E4(0x75);
  sub_080041E4(0x76);
  return in_lr;
}

