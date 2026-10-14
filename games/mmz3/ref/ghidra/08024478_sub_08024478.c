// sub_08024478 at 0x08024478 (thumb)

undefined8 sub_08024478(int param_1)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  bool bVar5;
  
  bVar5 = (DAT_02002130 & 0xb) != 0;
  if (bVar5) {
    *(undefined2 *)(param_1 + 4) = 0x4e21;
  }
  switch(*(undefined *)(param_1 + 1)) {
  case 0:
    sub_08024BFC(DAT_02030167 * 5,0x10,2);
    if (!bVar5) {
      sub_0800471C(0x34);
    }
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_080244a2_caseD_2;
  case 3:
    goto switchD_080244a2_caseD_3;
  case 4:
    goto switchD_080244a2_caseD_4;
  case 5:
    goto switchD_080244a2_caseD_5;
  case 6:
    goto switchD_080244a2_caseD_6;
  case 7:
    goto switchD_080244a2_caseD_7;
  case 8:
    goto switchD_080244a2_caseD_8;
  case 9:
    goto switchD_080244a2_caseD_9;
  case 10:
    goto switchD_080244a2_caseD_a;
  case 0xb:
    goto switchD_080244a2_caseD_b;
  case 0xc:
    goto switchD_080244a2_caseD_c;
  case 0xd:
    goto switchD_080244a2_caseD_d;
  case 0xe:
    goto switchD_080244a2_caseD_e;
  case 0xf:
    goto switchD_080244a2_caseD_f;
  case 0x10:
    goto switchD_080244a2_caseD_10;
  case 0x11:
    goto switchD_080244a2_caseD_11;
  case 0x12:
    goto switchD_080244a2_caseD_12;
  case 0x13:
    goto switchD_080244a2_caseD_13;
  case 0x14:
    goto switchD_080244a2_caseD_14;
  case 0x15:
    goto switchD_080244a2_caseD_15;
  case 0x16:
    goto switchD_080244a2_caseD_16;
  case 0x17:
    goto switchD_080244a2_caseD_17;
  default:
    goto switchD_080244a2_caseD_18;
  }
  sVar2 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar2;
  if (7 < sVar2) {
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_2:
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    iVar3 = sub_08024E9C(DAT_02030176,(int)*(short *)(param_1 + 4),3,0x18,2);
    if (iVar3 != 1) {
      *(undefined2 *)(param_1 + 4) = 0;
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_3:
      sVar2 = *(short *)(param_1 + 4) + 1;
      *(short *)(param_1 + 4) = sVar2;
      if (0xe < sVar2) {
        uVar4 = sub_080FE460(DAT_02030168,0xe10);
        sub_08024BFC(uVar4,0xe,3);
        uVar4 = sub_080FE460(DAT_02030168,0x3c);
        uVar4 = sub_080FE4D8(uVar4,0x3c);
        sub_08024BFC(uVar4,0x11,3);
        sub_08024BFC(0,0x10,3);
        if (!bVar5) {
          sub_0800471C(0x34);
        }
        *(undefined2 *)(param_1 + 4) = 0;
        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_4:
        sVar2 = *(short *)(param_1 + 4) + 1;
        *(short *)(param_1 + 4) = sVar2;
        if (7 < sVar2) {
          *(undefined2 *)(param_1 + 4) = 0;
          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_5:
          *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
          iVar3 = sub_08024E9C(DAT_02030177,(int)*(short *)(param_1 + 4),3,0x18,3);
          if (iVar3 != 1) {
            *(undefined2 *)(param_1 + 4) = 0;
            *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_6:
            sVar2 = *(short *)(param_1 + 4) + 1;
            *(short *)(param_1 + 4) = sVar2;
            if (0xe < sVar2) {
              sub_08024BFC(DAT_0203016c,0x11,4);
              if (!bVar5) {
                sub_0800471C(0x34);
              }
              *(undefined2 *)(param_1 + 4) = 0;
              *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_7:
              sVar2 = *(short *)(param_1 + 4) + 1;
              *(short *)(param_1 + 4) = sVar2;
              if (7 < sVar2) {
                *(undefined2 *)(param_1 + 4) = 0;
                *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_8:
                *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                iVar3 = sub_08024E9C(DAT_02030178,(int)*(short *)(param_1 + 4),3,0x18,4);
                if (iVar3 != 1) {
                  *(undefined2 *)(param_1 + 4) = 0;
                  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_9:
                  sVar2 = *(short *)(param_1 + 4) + 1;
                  *(short *)(param_1 + 4) = sVar2;
                  if (0xe < sVar2) {
                    sub_08024BFC(DAT_0203016e,0x11,5);
                    if (!bVar5) {
                      sub_0800471C(0x34);
                    }
                    *(undefined2 *)(param_1 + 4) = 0;
                    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_a:
                    sVar2 = *(short *)(param_1 + 4) + 1;
                    *(short *)(param_1 + 4) = sVar2;
                    if (7 < sVar2) {
                      *(undefined2 *)(param_1 + 4) = 0;
                      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_b:
                      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                      iVar3 = sub_08024E9C(DAT_02030179,(int)*(short *)(param_1 + 4),3,0x18,5);
                      if (iVar3 != 1) {
                        *(undefined2 *)(param_1 + 4) = 0;
                        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_c:
                        sVar2 = *(short *)(param_1 + 4) + 1;
                        *(short *)(param_1 + 4) = sVar2;
                        if (0xe < sVar2) {
                          sub_08024BFC(DAT_02030174,0x11,6);
                          if (!bVar5) {
                            sub_0800471C(0x34);
                          }
                          *(undefined2 *)(param_1 + 4) = 0;
                          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_d:
                          sVar2 = *(short *)(param_1 + 4) + 1;
                          *(short *)(param_1 + 4) = sVar2;
                          if (7 < sVar2) {
                            *(undefined2 *)(param_1 + 4) = 0;
                            *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_e:
                            *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                            iVar3 = sub_08024E9C(DAT_0203017a,(int)*(short *)(param_1 + 4),3,0x18,6)
                            ;
                            if (iVar3 != 1) {
                              *(undefined2 *)(param_1 + 4) = 0;
                              *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_f:
                              sVar2 = *(short *)(param_1 + 4) + 1;
                              *(short *)(param_1 + 4) = sVar2;
                              if (0xe < sVar2) {
                                sub_08024BFC(*(undefined *)(DAT_02030160 + 0x4c),0x11,7);
                                if (!bVar5) {
                                  sub_0800471C(0x34);
                                }
                                *(undefined2 *)(param_1 + 4) = 0;
                                *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_10:
                                sVar2 = *(short *)(param_1 + 4) + 1;
                                *(short *)(param_1 + 4) = sVar2;
                                if (7 < sVar2) {
                                  *(undefined2 *)(param_1 + 4) = 0;
                                  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_11:
                                  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                                  iVar3 = sub_08024E9C((int)DAT_0203017b,
                                                       (int)*(short *)(param_1 + 4),3,0x18,7);
                                  if (iVar3 != 1) {
                                    *(undefined2 *)(param_1 + 4) = 0;
                                    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_12:
                                    sVar2 = *(short *)(param_1 + 4) + 1;
                                    *(short *)(param_1 + 4) = sVar2;
                                    if (0xe < sVar2) {
                                      *(undefined2 *)(param_1 + 4) = 0;
                                      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_13:
                                      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                                      iVar3 = sub_08024E9C((int)DAT_02030165,
                                                           (int)*(short *)(param_1 + 4),3,0x18,9);
                                      if (iVar3 != 1) {
                                        *(undefined2 *)(param_1 + 4) = 0;
                                        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_14:
                                        sVar2 = *(short *)(param_1 + 4) + 1;
                                        *(short *)(param_1 + 4) = sVar2;
                                        if (0xe < sVar2) {
                                          *(undefined2 *)(param_1 + 4) = 0;
                                          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_15:
                                          *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                                          uVar4 = FUN_080fe2f8((int)*(short *)(DAT_02030160 + 10),
                                                               *(undefined *)(DAT_02030160 + 0x10));
                                          iVar3 = sub_08024E9C(uVar4,(int)*(short *)(param_1 + 4),3,
                                                               0x18,10);
                                          if (iVar3 != 1) {
                                            *(undefined2 *)(param_1 + 4) = 0;
                                            *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01'
                                            ;
switchD_080244a2_caseD_16:
                                            sVar2 = *(short *)(param_1 + 4) + 1;
                                            *(short *)(param_1 + 4) = sVar2;
                                            if (0x1d < sVar2) {
                                              sub_08024CDC(*(undefined *)(DAT_02030160 + 1));
                                              sub_0800471C(0x1d);
                                              *(undefined2 *)(param_1 + 6) = 0;
                                              *(char *)(param_1 + 1) =
                                                   *(char *)(param_1 + 1) + '\x01';
switchD_080244a2_caseD_17:
                                              sVar2 = *(short *)(param_1 + 6) + 1;
                                              *(short *)(param_1 + 6) = sVar2;
                                              iVar3 = DAT_02030160;
                                              if (0x3b < sVar2) {
                                                if (DAT_020301a0 == 0x10) {
                                                  *(undefined *)(param_1 + 0x18) =
                                                       *(undefined *)(DAT_02030160 + 9);
                                                  uVar1 = *(undefined *)(iVar3 + 8);
                                                }
                                                else {
                                                  *(undefined *)(param_1 + 0x18) =
                                                       *(undefined *)(DAT_02030160 + 4);
                                                  uVar1 = *(undefined *)(iVar3 + 2);
                                                }
                                                *(undefined *)(param_1 + 0x19) = uVar1;
                                                sub_08024D20(param_1);
                                                sub_08024DD0(param_1);
                                                sub_0800471C(199);
                                                uVar4 = 0;
                                                goto LAB_080248fe;
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
    }
  }
switchD_080244a2_caseD_18:
  uVar4 = 1;
LAB_080248fe:
  return CONCAT44(in_lr,uVar4);
}

