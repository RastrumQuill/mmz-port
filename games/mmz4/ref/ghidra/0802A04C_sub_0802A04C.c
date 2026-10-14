// sub_0802A04C at 0x0802A04C (thumb)

undefined8 sub_0802A04C(int param_1)

{
  undefined uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  bool bVar5;
  
  bVar5 = (DAT_02000760 & 0xb) != 0;
  if (bVar5) {
    *(undefined2 *)(param_1 + 4) = 0x4e21;
  }
  switch(*(undefined *)(param_1 + 1)) {
  case 0:
    sub_0802A68C(DAT_0202e8e7 * 5,0x10,3);
    if (!bVar5) {
      sub_08002B10(0x34);
    }
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    break;
  case 1:
    break;
  case 2:
    goto switchD_0802a076_caseD_2;
  case 3:
    goto switchD_0802a076_caseD_3;
  case 4:
    goto switchD_0802a076_caseD_4;
  case 5:
    goto switchD_0802a076_caseD_5;
  case 6:
    goto switchD_0802a076_caseD_6;
  case 7:
    goto switchD_0802a076_caseD_7;
  case 8:
    goto switchD_0802a076_caseD_8;
  case 9:
    goto switchD_0802a076_caseD_9;
  case 10:
    goto switchD_0802a076_caseD_a;
  case 0xb:
    goto switchD_0802a076_caseD_b;
  case 0xc:
    goto switchD_0802a076_caseD_c;
  case 0xd:
    goto switchD_0802a076_caseD_d;
  case 0xe:
    goto switchD_0802a076_caseD_e;
  case 0xf:
    goto switchD_0802a076_caseD_f;
  case 0x10:
    goto switchD_0802a076_caseD_10;
  case 0x11:
    goto switchD_0802a076_caseD_11;
  case 0x12:
    goto switchD_0802a076_caseD_12;
  case 0x13:
    goto switchD_0802a076_caseD_13;
  case 0x14:
    goto switchD_0802a076_caseD_14;
  case 0x15:
    goto switchD_0802a076_caseD_15;
  case 0x16:
    goto switchD_0802a076_caseD_16;
  case 0x17:
    goto switchD_0802a076_caseD_17;
  case 0x18:
    goto switchD_0802a076_caseD_18;
  case 0x19:
    goto switchD_0802a076_caseD_19;
  case 0x1a:
    goto switchD_0802a076_caseD_1a;
  case 0x1b:
    goto switchD_0802a076_caseD_1b;
  default:
    goto switchD_0802a076_caseD_1c;
  }
  sVar2 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar2;
  if (7 < sVar2) {
    *(undefined2 *)(param_1 + 4) = 0;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_2:
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    iVar3 = sub_0802A914(DAT_0202e8f4,(int)*(short *)(param_1 + 4),3,0x18,3);
    if (iVar3 != 1) {
      *(undefined2 *)(param_1 + 4) = 0;
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_3:
      sVar2 = *(short *)(param_1 + 4) + 1;
      *(short *)(param_1 + 4) = sVar2;
      if (0xe < sVar2) {
        uVar4 = sub_08128A24(DAT_0202e8e8,0xe10);
        sub_0802A68C(uVar4,0xe,4);
        uVar4 = sub_08128A24(DAT_0202e8e8,0x3c);
        uVar4 = sub_08128A9C(uVar4,0x3c);
        sub_0802A68C(uVar4,0x11,4);
        sub_0802A68C(0,0x10,4);
        if (!bVar5) {
          sub_08002B10(0x34);
        }
        *(undefined2 *)(param_1 + 4) = 0;
        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_4:
        sVar2 = *(short *)(param_1 + 4) + 1;
        *(short *)(param_1 + 4) = sVar2;
        if (7 < sVar2) {
          *(undefined2 *)(param_1 + 4) = 0;
          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_5:
          *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
          iVar3 = sub_0802A914(DAT_0202e8f5,(int)*(short *)(param_1 + 4),3,0x18,4);
          if (iVar3 != 1) {
            *(undefined2 *)(param_1 + 4) = 0;
            *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_6:
            sVar2 = *(short *)(param_1 + 4) + 1;
            *(short *)(param_1 + 4) = sVar2;
            if (0xe < sVar2) {
              sub_0802A68C(DAT_0202e8ee,0x11,5);
              if (!bVar5) {
                sub_08002B10(0x34);
              }
              *(undefined2 *)(param_1 + 4) = 0;
              *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_7:
              sVar2 = *(short *)(param_1 + 4) + 1;
              *(short *)(param_1 + 4) = sVar2;
              if (7 < sVar2) {
                *(undefined2 *)(param_1 + 4) = 0;
                *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_8:
                *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                iVar3 = sub_0802A914(DAT_0202e8f7,(int)*(short *)(param_1 + 4),3,0x18,5);
                if (iVar3 != 1) {
                  *(undefined2 *)(param_1 + 4) = 0;
                  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_9:
                  sVar2 = *(short *)(param_1 + 4) + 1;
                  *(short *)(param_1 + 4) = sVar2;
                  if (0xe < sVar2) {
                    sub_0802A68C(DAT_0202e8ec,0x11,6);
                    if (!bVar5) {
                      sub_08002B10(0x34);
                    }
                    *(undefined2 *)(param_1 + 4) = 0;
                    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_a:
                    sVar2 = *(short *)(param_1 + 4) + 1;
                    *(short *)(param_1 + 4) = sVar2;
                    if (7 < sVar2) {
                      *(undefined2 *)(param_1 + 4) = 0;
                      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_b:
                      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                      iVar3 = sub_0802A914(DAT_0202e8f6,(int)*(short *)(param_1 + 4),3,0x18,6);
                      if (iVar3 != 1) {
                        *(undefined2 *)(param_1 + 4) = 0;
                        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_c:
                        sVar2 = *(short *)(param_1 + 4) + 1;
                        *(short *)(param_1 + 4) = sVar2;
                        if (0xe < sVar2) {
                          sub_0802A68C(DAT_0202e8f2,0x11,7);
                          if (!bVar5) {
                            sub_08002B10(0x34);
                          }
                          *(undefined2 *)(param_1 + 4) = 0;
                          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_d:
                          sVar2 = *(short *)(param_1 + 4) + 1;
                          *(short *)(param_1 + 4) = sVar2;
                          if (7 < sVar2) {
                            *(undefined2 *)(param_1 + 4) = 0;
                            *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_e:
                            *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                            iVar3 = sub_0802A914(DAT_0202e8f8,(int)*(short *)(param_1 + 4),3,0x18,7)
                            ;
                            if (iVar3 != 1) {
                              *(undefined2 *)(param_1 + 4) = 0;
                              *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_f:
                              sVar2 = *(short *)(param_1 + 4) + 1;
                              *(short *)(param_1 + 4) = sVar2;
                              if (0xe < sVar2) {
                                sub_0802A9B4();
                                if (!bVar5) {
                                  sub_08002B10(0x34);
                                }
                                *(undefined2 *)(param_1 + 4) = 0;
                                *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_10:
                                sVar2 = *(short *)(param_1 + 4) + 1;
                                *(short *)(param_1 + 4) = sVar2;
                                if (7 < sVar2) {
                                  *(undefined2 *)(param_1 + 4) = 0;
                                  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_11:
                                  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                                  iVar3 = sub_0802A914(DAT_0202e8f9,(int)*(short *)(param_1 + 4),3,
                                                       0x18,8);
                                  if (iVar3 != 1) {
                                    *(undefined2 *)(param_1 + 4) = 0;
                                    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_12:
                                    sVar2 = *(short *)(param_1 + 4) + 1;
                                    *(short *)(param_1 + 4) = sVar2;
                                    if (0xe < sVar2) {
                                      *(undefined2 *)(param_1 + 4) = 0;
                                      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_13:
                                      sVar2 = *(short *)(param_1 + 4) + 1;
                                      *(short *)(param_1 + 4) = sVar2;
                                      if (0xe < sVar2) {
                                        sub_0802A68C(DAT_0202e8f1,0xe,9);
                                        sub_0802A68C(DAT_0202e8f0,0x11,9);
                                        if (!bVar5) {
                                          sub_08002B10(0x34);
                                        }
                                        *(undefined2 *)(param_1 + 4) = 0;
                                        *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_14:
                                        sVar2 = *(short *)(param_1 + 4) + 1;
                                        *(short *)(param_1 + 4) = sVar2;
                                        if (7 < sVar2) {
                                          *(undefined2 *)(param_1 + 4) = 0;
                                          *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_15:
                                          *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                                          iVar3 = sub_0802A914((int)DAT_0202e8fa,
                                                               (int)*(short *)(param_1 + 4),3,0x18,9
                                                              );
                                          if (iVar3 != 1) {
                                            *(undefined2 *)(param_1 + 4) = 0;
                                            *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01'
                                            ;
switchD_0802a076_caseD_16:
                                            sVar2 = *(short *)(param_1 + 4) + 1;
                                            *(short *)(param_1 + 4) = sVar2;
                                            if (0xe < sVar2) {
                                              *(undefined2 *)(param_1 + 4) = 0;
                                              *(char *)(param_1 + 1) =
                                                   *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_17:
                                              *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
                                              iVar3 = sub_0802A914((int)DAT_0202e8e5,
                                                                   (int)*(short *)(param_1 + 4),3,
                                                                   0x18,0xb);
                                              if (iVar3 != 1) {
                                                *(undefined2 *)(param_1 + 4) = 0;
                                                *(char *)(param_1 + 1) =
                                                     *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_18:
                                                sVar2 = *(short *)(param_1 + 4) + 1;
                                                *(short *)(param_1 + 4) = sVar2;
                                                if (0xe < sVar2) {
                                                  *(undefined2 *)(param_1 + 4) = 0;
                                                  *(char *)(param_1 + 1) =
                                                       *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_19:
                                                  *(short *)(param_1 + 4) =
                                                       *(short *)(param_1 + 4) + 1;
                                                  uVar4 = FUN_081288bc((int)*(short *)(DAT_0202e8e0
                                                                                      + 0xc),
                                                                       *(undefined *)
                                                                        (DAT_0202e8e0 + 0x14));
                                                  iVar3 = sub_0802A914(uVar4,(int)*(short *)(param_1
                                                                                            + 4),3,
                                                                       0x18,0xc);
                                                  if (iVar3 != 1) {
                                                    *(undefined2 *)(param_1 + 4) = 0;
                                                    *(char *)(param_1 + 1) =
                                                         *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_1a:
                                                    sVar2 = *(short *)(param_1 + 4) + 1;
                                                    *(short *)(param_1 + 4) = sVar2;
                                                    if (0x1d < sVar2) {
                                                      sub_0802A76C(*(undefined *)(DAT_0202e8e0 + 1))
                                                      ;
                                                      sub_08002B10(0x1d);
                                                      *(undefined2 *)(param_1 + 6) = 0;
                                                      *(char *)(param_1 + 1) =
                                                           *(char *)(param_1 + 1) + '\x01';
switchD_0802a076_caseD_1b:
                                                      sVar2 = *(short *)(param_1 + 6) + 1;
                                                      *(short *)(param_1 + 6) = sVar2;
                                                      iVar3 = DAT_0202e8e0;
                                                      if (0x3b < sVar2) {
                                                        if (DAT_0202e910 == 0x10) {
                                                          *(undefined *)(param_1 + 0x18) =
                                                               *(undefined *)(DAT_0202e8e0 + 7);
                                                          uVar1 = *(undefined *)(iVar3 + 6);
                                                        }
                                                        else {
                                                          *(undefined *)(param_1 + 0x18) =
                                                               *(undefined *)(DAT_0202e8e0 + 4);
                                                          uVar1 = *(undefined *)(iVar3 + 2);
                                                        }
                                                        *(undefined *)(param_1 + 0x19) = uVar1;
                                                        sub_0802A7B0(param_1);
                                                        sub_0802A8A0(param_1);
                                                        sub_08002B10(0xb3);
                                                        uVar4 = 0;
                                                        goto LAB_0802a572;
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
        }
      }
    }
  }
switchD_0802a076_caseD_1c:
  uVar4 = 1;
LAB_0802a572:
  return CONCAT44(in_lr,uVar4);
}

