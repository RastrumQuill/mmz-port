// sub_080447D0 at 0x080447D0 (thumb)

undefined4 sub_080447D0(int param_1)

{
  short sVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined *puVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x28);
  bVar3 = *(byte *)(iVar10 + 10) >> 4;
  uVar8 = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = (char)uVar8;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar8 << 4);
  uVar6 = *(undefined4 *)(iVar10 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar10 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  if ((*(char *)(param_1 + 0xe) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined *)(iVar10 + 0x155) = 1;
    sVar9 = CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70));
    if (sVar9 == 0x1401) {
      sVar9 = *(short *)(param_1 + 0xbe);
    }
    else if (sVar9 == 0x1903) {
      sVar9 = *(short *)(param_1 + 0xbe) + 3;
    }
    else {
      if (sVar9 != 0x1c03) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        goto LAB_08044dfa;
      }
      sVar9 = *(short *)(param_1 + 0xbe) + 6;
    }
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != sVar9) {
      sub_0801CFC8(param_1,sVar9,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 != -1) goto LAB_08044e84;
    if (*(byte *)(iVar10 + 199) < 4) {
      sVar1 = CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70));
      if (sVar1 == 0x1c03) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08005760(param_1 + 0x74,
                     **(undefined4 **)(&DAT_088535f8 + (uint)*(byte *)(param_1 + 0x10) * 4),
                     param_1 + 0x54,8);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      else if (sVar1 == 0x1903) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08005760(param_1 + 0x74,
                     **(undefined4 **)(&DAT_088535e4 + (uint)*(byte *)(param_1 + 0x10) * 4),
                     param_1 + 0x54,8);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08005760(param_1 + 0x74,
                     **(undefined4 **)(&DAT_088535d0 + (uint)*(byte *)(param_1 + 0x10) * 4),
                     param_1 + 0x54,8);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_08853450,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = 0x8044ecd;
    *(undefined *)(iVar10 + 0x155) = 2;
    *(undefined *)(param_1 + 0x12) = (&DAT_08852909)[*(byte *)(param_1 + 0x10)];
    sub_0801CF00(param_1,sVar9 + 1);
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_08002B10(0x41);
    }
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      if ((*(char *)(param_1 + 0xe) == '\x02') && (*(char *)(param_1 + 0x10) == '\x03')) {
        sVar9 = CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70));
        if (sVar9 == 0x1403) {
          sVar9 = -0x7daf;
        }
        else if (sVar9 == 0x1905) {
          sVar9 = -0x7dae;
        }
        else {
          if (sVar9 != 0x1c05) {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
            *(undefined4 *)(param_1 + 0x8c) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined *)(param_1 + 0x94) = 0;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
            bVar3 = *(byte *)(param_1 + 9);
            *(undefined4 *)(param_1 + 0xc) = 3;
            goto LAB_08044e0e;
          }
          sVar9 = -0x7dad;
        }
      }
      else {
        sVar9 = CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70));
        if (sVar9 == 0x1403) {
          sVar9 = *(short *)(param_1 + 0xbe) + 2;
        }
        else if (sVar9 == 0x1905) {
          sVar9 = *(short *)(param_1 + 0xbe) + 5;
        }
        else {
          if (sVar9 != 0x1c05) {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
            *(undefined4 *)(param_1 + 0x8c) = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined *)(param_1 + 0x94) = 0;
            goto LAB_08044dfa;
          }
          sVar9 = *(short *)(param_1 + 0xbe) + 8;
        }
      }
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != sVar9) {
        sub_0801CFC8(param_1,sVar9,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72)
                    );
      }
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
        sub_08044E98(param_1);
        return in_lr;
      }
      goto LAB_08044e84;
    }
    puVar7 = (undefined *)(iVar10 + 0x155);
    *puVar7 = 2;
    if (*(byte *)(iVar10 + 199) < 4) {
      sVar9 = CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70));
      if (sVar9 == 0x1402) {
        sub_08005784(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)(&DAT_088535d0 + (uint)*(byte *)(param_1 + 0x10) * 4)));
        sVar9 = *(short *)(param_1 + 0xbe) + 1;
      }
      else if (sVar9 == 0x1904) {
        sub_08005784(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)(&DAT_088535e4 + (uint)*(byte *)(param_1 + 0x10) * 4)));
        sVar9 = *(short *)(param_1 + 0xbe) + 4;
      }
      else {
        if (sVar9 != 0x1c04) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          goto LAB_08044dfa;
        }
        sub_08005784(param_1 + 0x74,
                     *(undefined4 *)
                      (*(char *)(param_1 + 0x71) * 4 +
                      *(int *)(&DAT_088535f8 + (uint)*(byte *)(param_1 + 0x10) * 4)));
LAB_08044bb2:
        sVar9 = *(short *)(param_1 + 0xbe) + 7;
      }
    }
    else {
      pcVar5 = (char *)(param_1 + 0x71);
      bVar2 = '\0' < *pcVar5;
      sVar9 = CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70));
      if (sVar9 == 0x1402) {
        if (bVar2) {
          sub_08005784(param_1 + 0x74,
                       *(undefined4 *)
                        (*pcVar5 * 4 + *(int *)(&DAT_088535d0 + (uint)*(byte *)(param_1 + 0x10) * 4)
                        ));
        }
        sVar9 = *(short *)(param_1 + 0xbe) + 1;
      }
      else {
        if (sVar9 != 0x1904) {
          if (sVar9 == 0x1c04) {
            if (bVar2) {
              sub_08005784(param_1 + 0x74,
                           *(undefined4 *)
                            (*pcVar5 * 4 +
                            *(int *)(&DAT_088535f8 + (uint)*(byte *)(param_1 + 0x10) * 4)));
            }
            goto LAB_08044bb2;
          }
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *(undefined4 *)(param_1 + 0x8c) = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
LAB_08044dfa:
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          bVar3 = *(byte *)(param_1 + 9);
          *(undefined4 *)(param_1 + 0xc) = 3;
LAB_08044e0e:
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[bVar3] + 0xc);
          return in_lr;
        }
        if (bVar2) {
          sub_08005784(param_1 + 0x74,
                       *(undefined4 *)
                        (*pcVar5 * 4 + *(int *)(&DAT_088535e4 + (uint)*(byte *)(param_1 + 0x10) * 4)
                        ));
        }
        sVar9 = *(short *)(param_1 + 0xbe) + 4;
      }
    }
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != sVar9) {
      sub_0801CFC8(param_1,sVar9,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    }
    if (*(byte *)(iVar10 + 199) < 4) {
      if ((*(char *)(param_1 + 0x73) != '\x03') ||
         (cVar4 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar4, cVar4 != -1))
      goto LAB_08044e84;
      if ((*(char *)(param_1 + 0xe) != '\0') && (cVar4 = sub_0803AAD8(iVar10), cVar4 != '\0')) {
        *(undefined *)(param_1 + 0xe) = 2;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *puVar7 = 3;
      if ((*(char *)(param_1 + 0xe) != '\x02') || (*(char *)(param_1 + 0x10) != '\x03')) {
        sub_0801CF00(param_1,sVar9 + 1);
        goto LAB_08044d16;
      }
      sVar1 = CONCAT11(*(undefined *)(iVar10 + 0x1e),*(undefined *)(iVar10 + 0x70));
      if (sVar1 == 0x1402) {
        sVar9 = -0x7daf;
      }
      else if (sVar1 == 0x1904) {
        sVar9 = -0x7dae;
      }
      else {
        if (sVar1 != 0x1c04) goto LAB_08044d0a;
        sVar9 = -0x7dad;
      }
    }
    else {
      if (((*(char *)(iVar10 + 0x166) != '\0') || (*(char *)(param_1 + 0x73) != '\x03')) ||
         (cVar4 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar4, cVar4 != -1))
      goto LAB_08044e84;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *puVar7 = 3;
LAB_08044d0a:
      sVar9 = sVar9 + 1;
    }
    sub_0801CF00(param_1,sVar9);
  }
LAB_08044d16:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08044e84:
  sub_0801CFF0(param_1);
  return in_lr;
}

