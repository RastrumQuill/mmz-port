// sub_080330DC at 0x080330DC (thumb)

undefined4 sub_080330DC(int param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  undefined uVar8;
  ushort *puVar9;
  undefined *puVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 in_lr;
  
  puVar9 = (ushort *)(param_1 + 0x216);
  uVar4 = *puVar9;
  cVar1 = *(char *)(param_1 + 0xdc);
  cVar2 = *(char *)(param_1 + 0xdd);
  sub_08029184(param_1);
  *(char *)(param_1 + 0x131) = *(char *)(param_1 + 0xdc);
  *(char *)(param_1 + 0x132) = *(char *)(param_1 + 0xdd);
  puVar14 = (uint *)(param_1 + 0x218);
  uVar12 = *puVar14;
  *puVar14 = 0;
  *puVar14 = *puVar9 & 0xf0;
  uVar13 = (*(ushort *)(param_1 + 0x214) & 0xf0) << 4 | *puVar9 & 0xf0;
  *puVar14 = uVar13;
  if (((*(ushort *)(param_1 + 0x21c) & *puVar9) != 0) &&
     (*puVar14 = uVar13 | 2, (*(ushort *)(param_1 + 0x21c) & *(ushort *)(param_1 + 0x214)) != 0)) {
    *puVar14 = uVar13 | 3;
  }
  puVar9 = (ushort *)(param_1 + 0x216);
  if ((*(ushort *)(param_1 + 0x21e) & *puVar9) != 0) {
    puVar14 = (uint *)(param_1 + 0x218);
    uVar13 = *puVar14;
    *puVar14 = uVar13 | 8;
    if ((*(ushort *)(param_1 + 0x21e) & *(ushort *)(param_1 + 0x214)) != 0) {
      *puVar14 = uVar13 | 0xc;
    }
  }
  uVar5 = *puVar9;
  if ((uVar5 & 0x8000) == 0) {
    if ((uVar4 & 0x8000) == 0) {
      if (*(char *)(param_1 + 0xd9) != '\0') {
        if (*(char *)(param_1 + 0xd9) != '\x01') {
          if ((*(byte *)(param_1 + 0xd) < 9) &&
             ((*(ushort *)(param_1 + 0x222) & *(ushort *)(param_1 + 0x214)) != 0)) {
            sub_0800471C(5);
            *(byte *)(param_1 + 0xda) = *(byte *)(param_1 + 0xda) ^ 1;
          }
          uVar5 = *(ushort *)(param_1 + 0x220);
          if ((uVar5 & *(ushort *)(param_1 + 0x214)) == 0) {
            if ((*puVar9 & uVar5) != 0) {
              if (*(char *)(param_1 + 0xda) == '\0') {
                uVar12 = *(uint *)(param_1 + 0x218);
                uVar13 = 0x2000;
              }
              else {
                uVar12 = *(uint *)(param_1 + 0x218);
                uVar13 = 0x8000;
              }
              *(uint *)(param_1 + 0x218) = uVar12 | uVar13;
              if ((*(byte *)(param_1 + 0x124) & 0x10) == 0) {
                cVar7 = *(char *)(param_1 + 0xdc) + '\x01';
              }
              else {
                cVar7 = '\0';
              }
              *(char *)(param_1 + 0xdc) = cVar7;
              bVar3 = *(byte *)(param_1 + 0x124);
              goto joined_r0x0803376e;
            }
            if (*(char *)(param_1 + 0xc3) != '\x02') {
              if (*(char *)(param_1 + 0xda) != '\0') {
                cVar7 = sub_08034598(param_1,1);
                if (cVar7 != '\0') {
                  uVar12 = *(uint *)(param_1 + 0x218);
                  uVar13 = 0x4000;
                  goto LAB_0803382e;
                }
                goto LAB_08033832;
              }
              cVar7 = sub_08034598(param_1,0);
              goto joined_r0x08033504;
            }
            if ((uVar4 & *(ushort *)(param_1 + 0x220)) != 0) {
              if (*(char *)(param_1 + 0xda) == '\0') {
                cVar7 = sub_08034598(param_1,0);
                if (cVar7 != '\0') {
                  *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x1000;
                  *(undefined *)(param_1 + 0xdc) = 0;
                }
              }
              else {
                cVar7 = sub_08034598(param_1,1);
                if (cVar7 != '\0') {
                  *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x4000;
                  *(undefined *)(param_1 + 0xdd) = 0;
                }
              }
            }
            goto LAB_0803383e;
          }
          if (*(char *)(param_1 + 0xda) == '\0') {
            *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x1000;
            *(undefined *)(param_1 + 0xdc) = 0;
          }
          else {
            *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x4000;
            *(undefined *)(param_1 + 0xdd) = 0;
          }
          cVar7 = *(char *)(param_1 + 0xc3);
          goto LAB_080333e6;
        }
        uVar6 = *(ushort *)(param_1 + 0x220);
        if ((uVar6 & *(ushort *)(param_1 + 0x214)) == 0) {
          if ((uVar5 & uVar6) == 0) {
            if (*(char *)(param_1 + 0xc3) == '\x02') {
              if (((*(ushort *)(param_1 + 0x220) & uVar4) == 0) ||
                 (cVar7 = sub_08034598(param_1,0), cVar7 == '\0')) goto LAB_080335d8;
              *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x1000;
            }
            else {
              cVar7 = sub_08034598(param_1,0);
              if (cVar7 != '\0') {
                *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x1000;
              }
            }
            *(undefined *)(param_1 + 0xdc) = 0;
          }
          else {
            *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x2000;
            if ((*(byte *)(param_1 + 0x124) & 0x10) == 0) {
              *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xdc) + '\x01';
            }
            else {
              *(undefined *)(param_1 + 0xdc) = 0;
            }
          }
        }
        else {
          *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x1000;
          *(undefined *)(param_1 + 0xdc) = 0;
        }
LAB_080335d8:
        uVar5 = *(ushort *)(param_1 + 0x222);
        if ((uVar5 & *(ushort *)(param_1 + 0x214)) == 0) {
          if ((*puVar9 & uVar5) == 0) {
            if (*(char *)(param_1 + 0xc3) == '\x02') {
              if (((uVar4 & *(ushort *)(param_1 + 0x222)) == 0) ||
                 (cVar7 = sub_08034598(param_1,1), cVar7 == '\0')) goto LAB_0803383e;
LAB_08033676:
              *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x4000;
            }
            else {
              cVar7 = sub_08034598(param_1,1);
              if (cVar7 != '\0') goto LAB_08033676;
            }
            *(undefined *)(param_1 + 0xdd) = 0;
          }
          else {
            *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x8000;
            if ((*(byte *)(param_1 + 0x124) & 0x20) == 0) goto LAB_08033770;
            *(undefined *)(param_1 + 0xdd) = 0;
          }
          goto LAB_0803383e;
        }
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x4000;
        goto LAB_0803377c;
      }
      uVar6 = *(ushort *)(param_1 + 0x220);
      if ((uVar6 & *(ushort *)(param_1 + 0x214)) == 0) {
        if ((uVar6 & uVar5) == 0) {
          if (*(char *)(param_1 + 0xc3) == '\x02') {
            if ((uVar4 & *(ushort *)(param_1 + 0x220)) != 0) {
              if ((*(ushort *)(param_1 + 0x222) & uVar5) == 0) {
                cVar7 = sub_08034598(param_1,0);
                if (cVar7 != '\0') {
                  *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x1000;
                  *(undefined *)(param_1 + 0xdc) = 0;
                }
              }
              else {
                cVar7 = sub_08034598(param_1,1);
                if (cVar7 != '\0') {
                  *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x4000;
                  *(undefined *)(param_1 + 0xdd) = 0;
                }
              }
            }
            goto LAB_0803383e;
          }
          if ((*(ushort *)(param_1 + 0x222) & uVar5) == 0) {
            cVar7 = sub_08034598(param_1,0);
joined_r0x08033504:
            if (cVar7 != '\0') {
              uVar12 = *(uint *)(param_1 + 0x218);
              uVar13 = 0x1000;
              goto LAB_0803382e;
            }
          }
          else {
            cVar7 = sub_08034598(param_1,1);
            if (cVar7 != '\0') {
              uVar12 = *(uint *)(param_1 + 0x218);
              uVar13 = 0x4000;
LAB_0803382e:
              *(uint *)(param_1 + 0x218) = uVar12 | uVar13;
            }
          }
          goto LAB_08033832;
        }
        if ((*(ushort *)(param_1 + 0x222) & uVar5) == 0) {
          *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x2000;
        }
        else {
          *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x8000;
        }
        if ((*(byte *)(param_1 + 0x124) & 0x10) == 0) {
          cVar7 = *(char *)(param_1 + 0xdc) + '\x01';
        }
        else {
          cVar7 = '\0';
        }
        *(char *)(param_1 + 0xdc) = cVar7;
        bVar3 = *(byte *)(param_1 + 0x124);
joined_r0x0803376e:
        if ((bVar3 & 0x20) != 0) goto LAB_0803377c;
        goto LAB_08033770;
      }
      if ((*(ushort *)(param_1 + 0x222) & uVar5) == 0) {
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x1000;
        puVar10 = (undefined *)(param_1 + 0xdc);
      }
      else {
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x4000;
        puVar10 = (undefined *)(param_1 + 0xdd);
      }
      *puVar10 = 0;
      cVar7 = *(char *)(param_1 + 0xc3);
LAB_080333e6:
      if (cVar7 != '\x02') {
LAB_08033832:
        *(undefined *)(param_1 + 0xdc) = 0;
        *(undefined *)(param_1 + 0xdd) = 0;
      }
    }
    else {
      if (((*(byte *)(param_1 + 0x124) & 0x10) == 0) && ((uVar12 & 0x2000) != 0)) {
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x2000;
        *(char *)(param_1 + 0xdd) = *(char *)(param_1 + 0xdd) + '\x01';
        *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xdc) + '\x01';
      }
      if (((*(byte *)(param_1 + 0x124) & 0x20) != 0) || ((uVar12 & 0x8000) == 0)) goto LAB_0803383e;
      *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x8000;
      *(char *)(param_1 + 0xdd) = *(char *)(param_1 + 0xdd) + '\x01';
      pcVar11 = (char *)(param_1 + 0xdc);
LAB_08033774:
      *pcVar11 = *pcVar11 + '\x01';
    }
  }
  else {
    if ((uVar5 & 0x1000) != 0) {
      *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x9000;
    }
    if ((*puVar9 & 0x4000) != 0) {
      *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0xc;
      if (*(char *)(param_1 + 0x22f) == '\0') {
        *(char *)(param_1 + 0x22f) = '\x1c';
      }
    }
    if ((*puVar9 & 0x2000) != 0) {
      *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 3;
    }
    if (*(char *)(param_1 + 0xd9) != '\x01') {
      if (((*(byte *)(param_1 + 0x124) & 0x10) == 0) && ((uVar12 & 0x2000) != 0)) {
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x2000;
        *(char *)(param_1 + 0xdd) = *(char *)(param_1 + 0xdd) + '\x01';
        *(char *)(param_1 + 0xdc) = *(char *)(param_1 + 0xdc) + '\x01';
      }
      if (((*(byte *)(param_1 + 0x124) & 0x20) == 0) && ((uVar12 & 0x8000) != 0)) {
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x8000;
        *(char *)(param_1 + 0xdd) = *(char *)(param_1 + 0xdd) + '\x01';
        pcVar11 = (char *)(param_1 + 0xdc);
        goto LAB_08033774;
      }
      goto LAB_0803383e;
    }
    if ((*(byte *)(param_1 + 0x124) & 0x10) == 0) {
      if ((uVar12 & 0x2000) != 0) {
        *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x2000;
        cVar7 = *(char *)(param_1 + 0xdc) + '\x01';
        goto LAB_08033272;
      }
    }
    else {
      cVar7 = '\0';
LAB_08033272:
      *(char *)(param_1 + 0xdc) = cVar7;
    }
    if ((*(byte *)(param_1 + 0x124) & 0x20) == 0) {
      if ((uVar12 & 0x8000) == 0) goto LAB_0803383e;
      *(uint *)(param_1 + 0x218) = *(uint *)(param_1 + 0x218) | 0x8000;
LAB_08033770:
      pcVar11 = (char *)(param_1 + 0xdd);
      goto LAB_08033774;
    }
LAB_0803377c:
    *(undefined *)(param_1 + 0xdd) = 0;
  }
LAB_0803383e:
  sub_0803397C(param_1);
  if (*(char *)(param_1 + 0xce) == '\x02') {
    sub_08033C1C(param_1);
    sub_08033D4C(param_1);
    sub_08033F00(param_1);
    sub_08034014(param_1);
  }
  if (((*puVar9 & 0x8000) == 0) && (*(char *)(param_1 + 0xc3) == '\x02')) {
    cVar7 = *(char *)(param_1 + 0xdc);
    if ((cVar1 == cVar7) && ((*(byte *)(param_1 + 0x124) & 0x10) == 0)) {
      *(char *)(param_1 + 0xdc) = cVar7 + '\x01';
    }
    cVar1 = *(char *)(param_1 + 0xdd);
    if ((cVar2 == cVar1) && ((*(byte *)(param_1 + 0x124) & 0x20) == 0)) {
      *(char *)(param_1 + 0xdd) = cVar1 + '\x01';
    }
  }
  if (*(char *)(param_1 + 0xd) == '\t') {
    *(undefined *)(param_1 + 0xdc) = 0;
    *(undefined *)(param_1 + 0xdd) = 0;
    goto LAB_08033958;
  }
  if (*(char *)(param_1 + 0xce) == '\x01') {
    bVar3 = *(byte *)(param_1 + 0xc0);
    if (bVar3 == 1) {
      uVar8 = 0;
LAB_0803390c:
      *(undefined *)(param_1 + 0xdc) = uVar8;
    }
    else if (bVar3 < 2) {
      if ((bVar3 == 0) && (0x28 < *(byte *)(param_1 + 0xdc))) {
        uVar8 = 0x28;
        goto LAB_0803390c;
      }
    }
    else if ((bVar3 < 4) && (200 < *(byte *)(param_1 + 0xdc))) {
      uVar8 = 200;
      goto LAB_0803390c;
    }
    bVar3 = *(byte *)(param_1 + 0xc1);
    if (bVar3 == 1) {
      uVar8 = 0;
    }
    else {
      if (1 < bVar3) {
        if (3 < bVar3) goto LAB_08033958;
        goto LAB_0803394a;
      }
      if ((bVar3 != 0) || (*(byte *)(param_1 + 0xdd) < 0x29)) goto LAB_08033958;
      uVar8 = 0x28;
    }
  }
  else {
    if (200 < *(byte *)(param_1 + 0xdc)) {
      *(byte *)(param_1 + 0xdc) = 200;
    }
LAB_0803394a:
    if (*(byte *)(param_1 + 0xdd) < 0xc9) goto LAB_08033958;
    uVar8 = 200;
  }
  *(undefined *)(param_1 + 0xdd) = uVar8;
LAB_08033958:
  if (*(char *)(param_1 + 0xc0) == *(char *)(param_1 + 0xc1)) {
    *(undefined *)(param_1 + 0xdd) = 0;
  }
  return in_lr;
}

