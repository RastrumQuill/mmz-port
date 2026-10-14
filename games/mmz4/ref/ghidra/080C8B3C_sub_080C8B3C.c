// sub_080C8B3C at 0x080C8B3C (thumb)

undefined4 sub_080C8B3C(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  iVar5 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(iVar5 + 0xd) < 0xe) || (*(byte *)(iVar5 + 0xd) == 0xf)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  bVar2 = *(byte *)(iVar5 + 10) >> 4;
  uVar9 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar9;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar9 << 4);
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar6 = *(int *)(iVar5 + 0x54) + *(int *)(&DAT_08862c10 + *(char *)(iVar5 + 0x71) * 4);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x54) - *(int *)(&DAT_08862c10 + *(char *)(iVar5 + 0x71) * 4);
    }
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar5 + 0x58) + *(int *)(&DAT_08862c24 + *(char *)(iVar5 + 0x71) * 4);
    if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) break;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar6 = *(int *)(iVar5 + 0x54) + -0x4b00;
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x54) + 0x4b00;
    }
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + 0x400;
    if (CONCAT11(*(undefined *)(iVar5 + 0x1e),*(undefined *)(iVar5 + 0x70)) == -0x56ef) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c8bdc_caseD_2:
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar6 = *(int *)(iVar5 + 0x54) + *(int *)(&DAT_08862c38 + *(char *)(iVar5 + 0x71) * 4);
      }
      else {
        iVar6 = *(int *)(iVar5 + 0x54) - *(int *)(&DAT_08862c38 + *(char *)(iVar5 + 0x71) * 4);
      }
      *(int *)(param_1 + 0x54) = iVar6;
      *(int *)(param_1 + 0x58) =
           *(int *)(iVar5 + 0x58) + *(int *)(&DAT_08862c4c + *(char *)(iVar5 + 0x71) * 4);
      if (CONCAT11(*(undefined *)(iVar5 + 0x1e),*(undefined *)(iVar5 + 0x70)) == -0x56ee) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c8bdc_caseD_3:
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar6 = *(int *)(iVar5 + 0x54) +
                  *(int *)(&DAT_08862c38 + (uint)(byte)(&DAT_08862c60)[*(char *)(iVar5 + 0x71)] * 4)
          ;
        }
        else {
          iVar6 = *(int *)(iVar5 + 0x54) -
                  *(int *)(&DAT_08862c38 + (uint)(byte)(&DAT_08862c60)[*(char *)(iVar5 + 0x71)] * 4)
          ;
        }
        *(int *)(param_1 + 0x54) = iVar6;
        *(int *)(param_1 + 0x58) =
             *(int *)(iVar5 + 0x58) +
             *(int *)(&DAT_08862c4c + (uint)(byte)(&DAT_08862c60)[*(char *)(iVar5 + 0x71)] * 4);
        if (('\x02' < *(char *)(iVar5 + 0x71)) && (*(char *)(iVar5 + 0x72) < '\x02')) {
          *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
          if (*(char *)(iVar5 + 0xdd) == '\0') {
            uVar3 = 0x15;
          }
          else {
            uVar3 = 0x1c;
          }
          *(undefined *)(param_1 + 0x12) = uVar3;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_080c8bdc_caseD_4:
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
          iVar8 = *(int *)(param_1 + 0x60) + 0x40;
          *(int *)(param_1 + 0x60) = iVar8;
          iVar6 = (uint)*(byte *)(param_1 + 0x12) * 0x40;
          if (iVar8 != iVar6 &&
              (int)(iVar8 + (uint)*(byte *)(param_1 + 0x12) * -0x40) < 0 == SBORROW4(iVar8,iVar6)) {
            *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
            if ((*(byte *)(iVar5 + 10) & 0x10) == 0) {
              uVar7 = 0xfffff800;
            }
            else {
              uVar7 = 0x800;
            }
            *(undefined4 *)(param_1 + 0x5c) = uVar7;
            *(undefined4 *)(param_1 + 100) = uVar7;
            *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          }
        }
      }
    }
    break;
  case 2:
    goto switchD_080c8bdc_caseD_2;
  case 3:
    goto switchD_080c8bdc_caseD_3;
  case 4:
    goto switchD_080c8bdc_caseD_4;
  case 5:
    iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar4 = sub_08007C7C(iVar5 + *(int *)(param_1 + 100));
    if (sVar4 != 0) {
      sub_08005784(param_1 + 0x74,&DAT_08862b78);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  if ((*(char *)(param_1 + 0xd) != '\0') && (iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(iVar1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1400;
  }
  return in_lr;
}

