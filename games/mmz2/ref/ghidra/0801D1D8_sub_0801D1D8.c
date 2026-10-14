// sub_0801D1D8 at 0x0801D1D8 (thumb)

undefined8 sub_0801D1D8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  bool bVar4;
  
  bVar4 = (DAT_02000d10 & 0xb) != 0;
  if (bVar4) {
    *(undefined2 *)(param_1 + 4) = 0x4e21;
  }
  switch(*(undefined *)(param_1 + 1)) {
  case 0:
    sub_0801DAAC(DAT_0202ebf7 * 5,0x13,4);
    if (!bVar4) {
      sub_080032EC(0xfb);
    }
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_0801d202_caseD_2;
  case 3:
    goto switchD_0801d202_caseD_3;
  case 4:
    goto switchD_0801d202_caseD_4;
  case 5:
    goto switchD_0801d202_caseD_5;
  case 6:
    goto switchD_0801d202_caseD_6;
  case 7:
    goto switchD_0801d202_caseD_7;
  case 8:
    goto switchD_0801d202_caseD_8;
  case 9:
    goto switchD_0801d202_caseD_9;
  case 10:
    goto switchD_0801d202_caseD_a;
  case 0xb:
    goto switchD_0801d202_caseD_b;
  case 0xc:
    goto switchD_0801d202_caseD_c;
  case 0xd:
    goto switchD_0801d202_caseD_d;
  case 0xe:
    goto switchD_0801d202_caseD_e;
  case 0xf:
    goto switchD_0801d202_caseD_f;
  case 0x10:
    goto switchD_0801d202_caseD_10;
  case 0x11:
    goto switchD_0801d202_caseD_11;
  case 0x12:
    goto switchD_0801d202_caseD_12;
  case 0x13:
    goto switchD_0801d202_caseD_13;
  case 0x14:
    goto switchD_0801d202_caseD_14;
  case 0x15:
    goto switchD_0801d202_caseD_15;
  default:
    goto switchD_0801d202_caseD_16;
  }
  sVar1 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar1;
  if (7 < sVar1) {
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_2:
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    iVar2 = sub_0801DC8C(DAT_0202ec06,(int)*(short *)(param_1 + 4),3,0x18,4);
    if (iVar2 != 1) {
      *(undefined2 *)(param_1 + 4) = 0;
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_3:
      sVar1 = *(short *)(param_1 + 4) + 1;
      *(short *)(param_1 + 4) = sVar1;
      if (0xe < sVar1) {
        uVar3 = sub_080EF2B8(DAT_0202ebf8,0xe10);
        sub_0801DAAC(uVar3,0x11,5);
        uVar3 = sub_080EF2B8(DAT_0202ebf8,0x3c);
        uVar3 = sub_080EF330(uVar3,0x3c);
        sub_0801DAAC(uVar3,0x14,5);
        sub_0801DAAC(0,0x13,5);
        if (!bVar4) {
          sub_080032EC(0xfb);
        }
        *(undefined2 *)(param_1 + 4) = 0;
        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_4:
        sVar1 = *(short *)(param_1 + 4) + 1;
        *(short *)(param_1 + 4) = sVar1;
        if (7 < sVar1) {
          *(undefined2 *)(param_1 + 4) = 0;
          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_5:
          *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
          iVar2 = sub_0801DC8C(DAT_0202ec07,(int)*(short *)(param_1 + 4),3,0x18,5);
          if (iVar2 != 1) {
            *(undefined2 *)(param_1 + 4) = 0;
            *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_6:
            sVar1 = *(short *)(param_1 + 4) + 1;
            *(short *)(param_1 + 4) = sVar1;
            if (0xe < sVar1) {
              sub_0801DAAC(DAT_0202ebfc,0x14,6);
              if (!bVar4) {
                sub_080032EC(0xfb);
              }
              *(undefined2 *)(param_1 + 4) = 0;
              *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_7:
              sVar1 = *(short *)(param_1 + 4) + 1;
              *(short *)(param_1 + 4) = sVar1;
              if (7 < sVar1) {
                *(undefined2 *)(param_1 + 4) = 0;
                *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_8:
                *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                iVar2 = sub_0801DC8C(DAT_0202ec08,(int)*(short *)(param_1 + 4),3,0x18,6);
                if (iVar2 != 1) {
                  *(undefined2 *)(param_1 + 4) = 0;
                  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_9:
                  sVar1 = *(short *)(param_1 + 4) + 1;
                  *(short *)(param_1 + 4) = sVar1;
                  if (0xe < sVar1) {
                    sub_0801DAAC(DAT_0202ebfe,0x14,7);
                    if (!bVar4) {
                      sub_080032EC(0xfb);
                    }
                    *(undefined2 *)(param_1 + 4) = 0;
                    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_a:
                    sVar1 = *(short *)(param_1 + 4) + 1;
                    *(short *)(param_1 + 4) = sVar1;
                    if (7 < sVar1) {
                      *(undefined2 *)(param_1 + 4) = 0;
                      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_b:
                      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                      iVar2 = sub_0801DC8C(DAT_0202ec09,(int)*(short *)(param_1 + 4),3,0x18,7);
                      if (iVar2 != 1) {
                        *(undefined2 *)(param_1 + 4) = 0;
                        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_c:
                        sVar1 = *(short *)(param_1 + 4) + 1;
                        *(short *)(param_1 + 4) = sVar1;
                        if (0xe < sVar1) {
                          sub_0801DAAC(DAT_0202ec04,0x14,8);
                          if (!bVar4) {
                            sub_080032EC(0xfb);
                          }
                          *(undefined2 *)(param_1 + 4) = 0;
                          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_d:
                          sVar1 = *(short *)(param_1 + 4) + 1;
                          *(short *)(param_1 + 4) = sVar1;
                          if (7 < sVar1) {
                            *(undefined2 *)(param_1 + 4) = 0;
                            *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_e:
                            *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                            iVar2 = sub_0801DC8C(DAT_0202ec0a,(int)*(short *)(param_1 + 4),3,0x18,8)
                            ;
                            if (iVar2 != 1) {
                              *(undefined2 *)(param_1 + 4) = 0;
                              *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_f:
                              sVar1 = *(short *)(param_1 + 4) + 1;
                              *(short *)(param_1 + 4) = sVar1;
                              if (0xe < sVar1) {
                                sub_0801DAAC(*(undefined *)(DAT_0202ebf0 + 0x4c),0x14,9);
                                if (!bVar4) {
                                  sub_080032EC(0xfb);
                                }
                                *(undefined2 *)(param_1 + 4) = 0;
                                *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_10:
                                sVar1 = *(short *)(param_1 + 4) + 1;
                                *(short *)(param_1 + 4) = sVar1;
                                if (7 < sVar1) {
                                  *(undefined2 *)(param_1 + 4) = 0;
                                  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_11:
                                  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                                  iVar2 = sub_0801DC8C((int)DAT_0202ec0b,
                                                       (int)*(short *)(param_1 + 4),3,0x18,9);
                                  if (iVar2 != 1) {
                                    *(undefined2 *)(param_1 + 4) = 0;
                                    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_12:
                                    sVar1 = *(short *)(param_1 + 4) + 1;
                                    *(short *)(param_1 + 4) = sVar1;
                                    if (0xe < sVar1) {
                                      *(undefined2 *)(param_1 + 4) = 0;
                                      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_13:
                                      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                                      iVar2 = sub_0801DC8C((int)DAT_0202ebf5,
                                                           (int)*(short *)(param_1 + 4),3,0x18,0xb);
                                      if (iVar2 != 1) {
                                        *(undefined2 *)(param_1 + 4) = 0;
                                        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_14:
                                        sVar1 = *(short *)(param_1 + 4) + 1;
                                        *(short *)(param_1 + 4) = sVar1;
                                        if (0x1d < sVar1) {
                                          sub_0801DB8C(*(undefined *)(DAT_0202ebf0 + 1));
                                          sub_080032EC(199);
                                          *(undefined2 *)(param_1 + 6) = 0;
                                          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0801d202_caseD_15:
                                          sVar1 = *(short *)(param_1 + 6) + 1;
                                          *(short *)(param_1 + 6) = sVar1;
                                          if (0x3b < sVar1) {
                                            if (DAT_0202ec30 == 0x10) {
                                              sub_0801DBD0(*(undefined *)(DAT_0202ebf0 + 9));
                                              sub_0801DC2C(*(undefined *)(DAT_0202ebf0 + 8));
                                            }
                                            else {
                                              sub_0801DBD0(*(undefined *)(DAT_0202ebf0 + 4));
                                              sub_0801DC2C(*(undefined *)(DAT_0202ebf0 + 2));
                                            }
                                            sub_080032EC(0x1c);
                                            uVar3 = 0;
                                            goto LAB_0801d602;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
switchD_0801d202_caseD_16:
  uVar3 = 1;
LAB_0801d602:
  return CONCAT44(in_lr,uVar3);
}

