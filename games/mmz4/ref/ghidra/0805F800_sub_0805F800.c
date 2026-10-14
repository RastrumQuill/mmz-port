// sub_0805F800 at 0x0805F800 (thumb)

undefined4 sub_0805F800(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined uVar4;
  int iVar5;
  undefined4 in_lr;
  
  sub_0801CFF0();
  if ((DAT_0202e918 & 8) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202dbf0 + 0x54);
    if (iVar3 < 0) {
      iVar3 = *(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54);
    }
    iVar5 = 2;
    if ((0x17 < *(short *)(param_1 + 0xa4)) && (iVar5 = 0, *(short *)(param_1 + 0xa4) < 0x30)) {
      iVar5 = 1;
    }
    if (iVar3 < 0x3f00) {
      iVar3 = 0;
    }
    else if (iVar3 < 0x6f00) {
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
    if (DAT_0202e910 == 0xb) {
      do {
        uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar1 & 0x7fffffff;
        uVar1 = uVar1 * 2 >> 0x11 & 0x1f;
        if (iVar3 == 0) {
          if (iVar5 == 0) {
            if (uVar1 < 4) goto LAB_0805fa12;
            if (uVar1 < 8) {
LAB_0805f9a8:
              *(undefined *)(param_1 + 0xd) = 6;
            }
            else if (uVar1 < 0x11) {
              uVar4 = 0xe;
LAB_0805fa44:
              *(undefined *)(param_1 + 0xd) = uVar4;
            }
            else {
              if (0x13 < uVar1) {
                if (0x16 < uVar1) {
joined_r0x0805f964:
                  if (0x1b < uVar1) goto LAB_0805fa3e;
                  goto LAB_0805fa36;
                }
                goto LAB_0805fa2e;
              }
LAB_0805f9ba:
              *(undefined *)(param_1 + 0xd) = 8;
            }
          }
          else if (iVar5 == 1) {
            if (uVar1 < 3) {
LAB_0805fa12:
              *(undefined *)(param_1 + 0xd) = 4;
            }
            else if (uVar1 < 6) {
LAB_0805f976:
              *(undefined *)(param_1 + 0xd) = 6;
            }
            else if (uVar1 < 0xd) {
LAB_0805f980:
              *(undefined *)(param_1 + 0xd) = 0xe;
            }
            else {
              if (uVar1 < 0x10) {
                uVar4 = 8;
                goto LAB_0805fa44;
              }
              if (uVar1 < 0x13) goto LAB_0805fa2e;
              if (uVar1 < 0x17) goto LAB_0805fa36;
LAB_0805f996:
              if (uVar1 < 0x1a) goto LAB_0805fa3e;
              *(undefined *)(param_1 + 0xd) = 0x1b;
            }
          }
          else {
            if (uVar1 < 2) goto LAB_0805fa12;
            if (uVar1 < 5) goto LAB_0805f9a8;
            if (uVar1 < 0xc) {
              uVar4 = 0xe;
              goto LAB_0805fa44;
            }
            if (uVar1 < 0xf) goto LAB_0805f9ba;
            if (uVar1 < 0x12) goto LAB_0805fa2e;
            if (uVar1 < 0x15) goto LAB_0805fa36;
LAB_0805f9c8:
            if (uVar1 < 0x18) goto LAB_0805fa3e;
            *(undefined *)(param_1 + 0xd) = 0x1b;
          }
        }
        else {
          if (iVar3 == 1) {
            if (iVar5 == 0) {
              if (uVar1 < 4) goto LAB_0805fa12;
              if (uVar1 < 6) goto LAB_0805f9a8;
              if (uVar1 < 0xc) {
                uVar4 = 0xe;
                goto LAB_0805fa44;
              }
              if (uVar1 < 0x12) goto LAB_0805f9ba;
              if (0x15 < uVar1) goto joined_r0x0805f964;
            }
            else if (iVar5 == 1) {
              if (uVar1 < 3) goto LAB_0805fa12;
              if (uVar1 < 5) goto LAB_0805f976;
              if (uVar1 < 10) goto LAB_0805f980;
              if (uVar1 < 0xe) {
                uVar4 = 8;
                goto LAB_0805fa44;
              }
              if (0x11 < uVar1) {
                if (0x15 < uVar1) goto LAB_0805f996;
                goto LAB_0805fa36;
              }
            }
            else {
              if (uVar1 < 3) goto LAB_0805fa12;
              if (uVar1 < 5) goto LAB_0805f9a8;
              if (uVar1 < 8) {
                uVar4 = 0xe;
                goto LAB_0805fa44;
              }
              if (uVar1 < 0xc) goto LAB_0805f9ba;
              if (0xf < uVar1) {
                if (0x13 < uVar1) goto LAB_0805f9c8;
                goto LAB_0805fa36;
              }
            }
          }
          else if (iVar5 == 0) {
            if (uVar1 < 6) goto LAB_0805fa12;
            if (uVar1 < 9) goto LAB_0805fa1a;
            if (uVar1 < 0xd) goto LAB_0805fa24;
            if (0x14 < uVar1) {
              if (0x19 < uVar1) goto LAB_0805fa3e;
              goto LAB_0805fa36;
            }
          }
          else if (iVar5 == 1) {
            if (uVar1 < 4) goto LAB_0805fa12;
            if (uVar1 < 6) {
LAB_0805fa1a:
              *(undefined *)(param_1 + 0xd) = 0xe;
              goto LAB_0805fa46;
            }
            if (uVar1 < 10) {
LAB_0805fa24:
              *(undefined *)(param_1 + 0xd) = 8;
              goto LAB_0805fa46;
            }
            if (0xf < uVar1) {
              if (0x14 < uVar1) {
                if (0x19 < uVar1) {
LAB_0805fa42:
                  uVar4 = 0x1b;
                  goto LAB_0805fa44;
                }
LAB_0805fa3e:
                *(undefined *)(param_1 + 0xd) = 0x18;
                goto LAB_0805fa46;
              }
LAB_0805fa36:
              *(undefined *)(param_1 + 0xd) = 0x14;
              goto LAB_0805fa46;
            }
          }
          else {
            if (uVar1 < 4) goto LAB_0805fa12;
            if (uVar1 < 6) goto LAB_0805fa1a;
            if (uVar1 < 9) goto LAB_0805fa24;
            if (0xe < uVar1) {
              if (0x12 < uVar1) {
                if (0x17 < uVar1) goto LAB_0805fa42;
                goto LAB_0805fa3e;
              }
              goto LAB_0805fa36;
            }
          }
LAB_0805fa2e:
          *(undefined *)(param_1 + 0xd) = 0xb;
        }
LAB_0805fa46:
      } while ((((*(byte *)(DAT_0202e8e0 + 1) < 5) ||
                (cVar2 = *(char *)(param_1 + 0xd), (DAT_0202e8b4 & 4) != 0)) &&
               (cVar2 = *(char *)(param_1 + 0xd), cVar2 == '\x1b')) ||
              (cVar2 == *(char *)(param_1 + 0xd0)));
    }
    else {
      do {
        uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar1 & 0x7fffffff;
        uVar1 = uVar1 * 2 >> 0x11 & 0x1f;
        if (iVar3 == 0) {
          if (iVar5 == 0) {
            if (uVar1 < 3) goto LAB_0805fc40;
            if (uVar1 < 6) {
LAB_0805fb5c:
              *(undefined *)(param_1 + 0xd) = 6;
              goto LAB_0805fc7c;
            }
            if (0xd < uVar1) {
              if (uVar1 < 0x12) goto LAB_0805fc50;
              if (uVar1 < 0x15) goto LAB_0805fc5a;
              if (0x18 < uVar1) goto joined_r0x0805fb78;
LAB_0805fc64:
              *(undefined *)(param_1 + 0xd) = 0x14;
              goto LAB_0805fc7c;
            }
            uVar4 = 0xe;
          }
          else if (iVar5 == 1) {
            if (uVar1 < 2) goto LAB_0805fc40;
            if (uVar1 < 6) {
LAB_0805fb8a:
              *(undefined *)(param_1 + 0xd) = 6;
              goto LAB_0805fc7c;
            }
            if (uVar1 < 0xe) goto LAB_0805fc12;
            if (0x10 < uVar1) {
              if (uVar1 < 0x14) goto LAB_0805fc24;
              if (0x15 < uVar1) {
LAB_0805fb14:
                if (uVar1 < 0x19) goto LAB_0805fc6c;
                if (uVar1 < 0x1c) goto LAB_0805fc74;
LAB_0805fc36:
                *(undefined *)(param_1 + 0xd) = 0x1f;
                goto LAB_0805fc7c;
              }
              goto LAB_0805fc64;
            }
            uVar4 = 8;
          }
          else {
            if (uVar1 < 3) goto LAB_0805fc40;
            if (uVar1 < 7) {
              uVar4 = 6;
            }
            else {
              if (uVar1 < 0xe) goto LAB_0805fbe2;
              if (uVar1 < 0x10) goto LAB_0805fbec;
              if (0x11 < uVar1) {
                if (0x14 < uVar1) {
LAB_0805fbc6:
                  if (uVar1 < 0x17) goto LAB_0805fc6c;
                  if (uVar1 < 0x1a) goto LAB_0805fc74;
                  *(undefined *)(param_1 + 0xd) = 0x1f;
                  goto LAB_0805fc7c;
                }
                goto LAB_0805fc64;
              }
              uVar4 = 0xb;
            }
          }
LAB_0805fc7a:
          *(undefined *)(param_1 + 0xd) = uVar4;
        }
        else {
          if (iVar3 == 1) {
            if (iVar5 == 0) {
              if (uVar1 < 3) goto LAB_0805fc40;
              if (uVar1 < 5) goto LAB_0805fb5c;
              if (8 < uVar1) {
                if (uVar1 < 0xe) goto LAB_0805fc50;
                if (uVar1 < 0x13) goto LAB_0805fc5a;
                if (0x17 < uVar1) goto joined_r0x0805fb78;
                goto LAB_0805fc64;
              }
              uVar4 = 0xe;
            }
            else if (iVar5 == 1) {
              if (uVar1 < 3) goto LAB_0805fc40;
              if (uVar1 < 5) goto LAB_0805fb8a;
              if (uVar1 < 9) goto LAB_0805fc12;
              if (0xc < uVar1) {
                if (uVar1 < 0x11) goto LAB_0805fc24;
                if (0x14 < uVar1) goto LAB_0805fb14;
                goto LAB_0805fc64;
              }
              uVar4 = 8;
            }
            else {
              if (uVar1 < 3) goto LAB_0805fc40;
              if (uVar1 < 6) {
                uVar4 = 6;
              }
              else {
                if (uVar1 < 9) goto LAB_0805fbe2;
                if (uVar1 < 0xc) goto LAB_0805fbec;
                if (0xf < uVar1) {
                  if (0x12 < uVar1) goto LAB_0805fbc6;
                  goto LAB_0805fc64;
                }
                uVar4 = 0xb;
              }
            }
            goto LAB_0805fc7a;
          }
          if (iVar5 == 0) {
            if (3 < uVar1) {
              if (uVar1 < 6) {
LAB_0805fbe2:
                *(undefined *)(param_1 + 0xd) = 0xe;
              }
              else if (uVar1 < 10) {
LAB_0805fbec:
                *(undefined *)(param_1 + 0xd) = 8;
              }
              else {
                if (uVar1 < 0x11) {
                  uVar4 = 0xb;
                  goto LAB_0805fc7a;
                }
                if (uVar1 < 0x17) goto LAB_0805fc64;
joined_r0x0805fb78:
                if (0x1c < uVar1) {
LAB_0805fc74:
                  *(undefined *)(param_1 + 0xd) = 0x1b;
                  goto LAB_0805fc7c;
                }
LAB_0805fc6c:
                *(undefined *)(param_1 + 0xd) = 0x18;
              }
              goto LAB_0805fc7c;
            }
LAB_0805fc40:
            *(undefined *)(param_1 + 0xd) = 4;
          }
          else {
            if (iVar5 == 1) {
              if (4 < uVar1) {
                if (6 < uVar1) {
                  if (9 < uVar1) {
                    if (uVar1 < 0x10) {
LAB_0805fc24:
                      *(undefined *)(param_1 + 0xd) = 0xb;
                      goto LAB_0805fc7c;
                    }
                    if (0x13 < uVar1) {
                      if (0x18 < uVar1) {
                        if (0x1a < uVar1) goto LAB_0805fc36;
                        goto LAB_0805fc74;
                      }
                      goto LAB_0805fc6c;
                    }
                    goto LAB_0805fc64;
                  }
                  uVar4 = 8;
                  goto LAB_0805fc7a;
                }
LAB_0805fc12:
                *(undefined *)(param_1 + 0xd) = 0xe;
                goto LAB_0805fc7c;
              }
              goto LAB_0805fc40;
            }
            if (uVar1 < 5) goto LAB_0805fc40;
            if (uVar1 < 7) {
              uVar4 = 0xe;
              goto LAB_0805fc7a;
            }
            if (uVar1 < 9) {
LAB_0805fc50:
              *(undefined *)(param_1 + 0xd) = 8;
            }
            else {
              if (0xe < uVar1) {
                if (uVar1 < 0x13) goto LAB_0805fc64;
                if (uVar1 < 0x17) goto LAB_0805fc6c;
                if (uVar1 < 0x1a) goto LAB_0805fc74;
                uVar4 = 0x1f;
                goto LAB_0805fc7a;
              }
LAB_0805fc5a:
              *(undefined *)(param_1 + 0xd) = 0xb;
            }
          }
        }
LAB_0805fc7c:
      } while ((((*(byte *)(DAT_0202e8e0 + 1) < 5) ||
                (cVar2 = *(char *)(param_1 + 0xd), (DAT_0202e8b4 & 4) != 0)) &&
               (cVar2 = *(char *)(param_1 + 0xd), cVar2 == '\x1f')) ||
              (cVar2 == *(char *)(param_1 + 0xd0)));
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

