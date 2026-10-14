// sub_080BD630 at 0x080BD630 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_080BD630(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  byte *pbVar7;
  short sVar8;
  int iVar9;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x42) = *(char *)(param_1 + 0x42) + '\x01';
  switch(*(undefined *)(param_1 + 5)) {
  case 0:
    DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x1300;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(undefined *)(param_1 + 0x42) = 0;
  case 1:
    sub_080BDB0C(param_1);
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 6);
    if (bVar1 == 1) {
      DAT_02004f36 = 0x420d;
      _DAT_02004f40 = 0;
      DAT_02004f42 = 0xff90;
      sub_080014E8(&DAT_082f1168,0xc000);
      sub_0800179C(&DAT_082f1174,0);
      sub_080014E8(&DAT_082f117c,(DAT_02004f36 & 0xc) * 0x1000);
      sub_0800179C(&DAT_082f1188,0);
      FUN_080c88ec(&DAT_082e911c,(DAT_02004f36 & 0x1f00) * 8 + 0x6000000,0x200);
      if (*(int *)(param_1 + 0x10) == 0) {
        psVar6 = &DAT_06000800 + (DAT_02004f36 & 0x1f00) * 4;
        psVar4 = &DAT_082c9588;
        iVar9 = 0x3f;
        do {
          *psVar6 = (*psVar4 + 0x40U & 0xfff) + 0xe000;
          psVar6 = psVar6 + 1;
          psVar4 = psVar4 + 1;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        iVar9 = 0x40;
        do {
          *psVar6 = -0xfc0;
          psVar6 = psVar6 + 1;
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x400);
      }
      else {
        psVar6 = &DAT_06000800 + (DAT_02004f36 & 0x1f00) * 4;
        psVar4 = &DAT_082c9588;
        iVar9 = 0x3f;
        do {
          *psVar6 = (*psVar4 + 0x40U & 0xfff) + 0xe000;
          psVar6 = psVar6 + 1;
          psVar4 = psVar4 + 1;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        iVar9 = 0x40;
        psVar4 = &DAT_082c9608;
        do {
          *psVar6 = (*psVar4 + 0x40U & 0xfff) - 0x1000;
          psVar6 = psVar6 + 1;
          psVar4 = psVar4 + 1;
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x80);
        if (iVar9 < 0x400) {
          psVar4 = &DAT_082c9588 + iVar9;
          do {
            *psVar6 = *psVar4 + 0x40;
            psVar6 = psVar6 + 1;
            psVar4 = psVar4 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar9 < 0x400);
        }
      }
      DAT_02004f38 = 0x486;
      _DAT_02004f44 = 0;
      sub_080014E8(&DAT_082f1000,0x4000);
      sub_0800179C(&DAT_082f100c,0);
      FUN_080c88ec(&DAT_082e008c,(DAT_02004f38 & 0x1f00) * 8 + 0x6000000,0x200);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        DAT_02004f30 = DAT_02004f30 & 0xc8ff;
        DAT_03001ba2 = '@';
        DAT_03001ba1 = '@';
        DAT_03001ba0 = '@';
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        sub_08001E34(0xed);
      }
    }
    else if (bVar1 == 2) {
      DAT_02004f30 = DAT_02004f30 | 0x3600;
      *(undefined2 *)(param_1 + 8) = 0x20;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      *(undefined *)(param_1 + 6) = 0;
    }
    break;
  case 3:
    sVar3 = *(short *)(param_1 + 8);
    sVar8 = sVar3 + -1;
    *(short *)(param_1 + 8) = sVar8;
    DAT_03001ba0 = (char)sVar3 + '\x1f';
    if (sVar8 != 0) {
      DAT_03001ba1 = DAT_03001ba0;
      DAT_03001ba2 = DAT_03001ba0;
      return in_lr;
    }
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  case 4:
    uVar2 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar2 & 0xff;
    if ((uVar2 & 0x20) == 0) {
      DAT_02004f30 = DAT_02004f30 & 0xedff;
    }
    else {
      DAT_02004f30 = DAT_02004f30 | 0x1200;
    }
    if ((DAT_02004ca8 & 8) != 0) {
      sub_08001EAC(0x2a);
      DAT_02004f30 = DAT_02004f30 | 0x1200;
      _DAT_02004f40 = 0x100;
      DAT_02004f42 = 0xff98;
      *(undefined *)(param_1 + 0x40) = 0xff;
      *(undefined *)(param_1 + 0x41) = 0xff;
      iVar9 = *(int *)(param_1 + 0x10);
      if (iVar9 != 0) {
        iVar9 = 1;
      }
      *(short *)(param_1 + 8) = (short)iVar9;
LAB_080bda86:
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
LAB_080bda8c:
    sub_08001904(0x73,0x120);
    break;
  case 5:
    if ((*(int *)(param_1 + 0x10) != 0) && ((DAT_02004caa & 0xc0) != 0)) {
      *(ushort *)(param_1 + 8) = *(short *)(param_1 + 8) + 1U & 1;
      sub_08001EAC(0x29);
    }
    iVar9 = 0;
    pbVar7 = (byte *)(param_1 + 0x40);
    do {
      iVar5 = 0;
      if (*(short *)(param_1 + 8) == iVar9) {
        iVar5 = 0xff;
      }
      iVar5 = iVar5 - (uint)*pbVar7;
      if (iVar5 != 0) {
        iVar5 = iVar5 >> 3;
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        *pbVar7 = *pbVar7 + (char)iVar5;
      }
      pbVar7 = pbVar7 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    sub_080BE200(&DAT_082cad88,&DAT_082cada8,&DAT_03001960,*(byte *)(param_1 + 0x40));
    sub_080BE200(&DAT_082cad88,&DAT_082cada8,&DAT_03001980,*(undefined *)(param_1 + 0x41));
    if ((DAT_02004ca8 & 9) != 0) {
      if (*(short *)(param_1 + 8) == 0) {
        sub_080BF0A4(&DAT_020236e0,0);
      }
      else {
        sub_080BF0A4(&DAT_020236e0,0x100);
      }
      sub_08001EAC(0x1c);
      *(undefined2 *)(param_1 + 8) = 0x20;
      sub_08001E44(0xed);
      goto LAB_080bda86;
    }
    goto LAB_080bda8c;
  case 6:
    sVar3 = *(short *)(param_1 + 8) + -2;
    *(short *)(param_1 + 8) = sVar3;
    DAT_03001ba0 = (char)sVar3;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    sub_08001904(0x73,0x120);
    if (*(short *)(param_1 + 8) < 1) {
      DAT_03001ba2 = ' ';
      DAT_03001ba1 = ' ';
      DAT_03001ba0 = ' ';
      DAT_02004f30 = DAT_02004f30 & 0xc9ff;
      FUN_080bd390(param_1,5);
    }
  }
  return in_lr;
}

