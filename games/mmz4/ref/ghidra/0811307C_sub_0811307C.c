// sub_0811307C at 0x0811307C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0811307C(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 in_lr;
  undefined4 local_1c [2];
  
  switch(*(undefined *)(param_1 + 2)) {
  case 0:
    DAT_030032e0 = DAT_030032e0 | 0x80;
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  case 1:
    sVar4 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar4;
    if (sVar4 != 0) goto switchD_08113092_caseD_7;
    *(undefined *)(DAT_0202dbf0 + 0xd) = 0xb;
    *(undefined *)(DAT_0202dbf0 + 0xe) = 0;
    *(undefined *)(DAT_0202dbf0 + 0xf) = 0;
    *(undefined2 *)(param_1 + 4) = 0x20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_08113092_caseD_2:
    sVar4 = *(short *)(param_1 + 4) + 1;
    *(short *)(param_1 + 4) = sVar4;
    DAT_03002ec0 = (byte)sVar4;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
    if (sVar4 < 0x40) goto switchD_08113092_caseD_7;
    sub_081123F8(param_1);
    DAT_03002ac0 = 0;
    DAT_02000a00 = DAT_02000a00 & 0xb0ff | 0x1200;
    DAT_02000a60 = 0;
    sub_0800243C();
    DAT_02000a06 = 0x204;
    _DAT_02000a10 = 0;
    sub_08001D30(&DAT_08b6ca28,0x4000);
    sub_08002208(&DAT_08b6ca34,0);
    sub_08001D30(&DAT_08b6ca3c,(DAT_02000a06 & 0xc) * 0x1000);
    sub_08002208(&DAT_08b6ca48,0);
    sub_08002734(0x12,&DAT_08b2c000,0x82,0,0);
    sub_08112294();
    *(undefined2 *)(param_1 + 4) = 0x40;
    *(undefined2 *)(param_1 + 6) = 0x1000;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_08113092_caseD_3:
    if (0x20 < *(short *)(param_1 + 4)) {
      sVar4 = *(short *)(param_1 + 4) + -1;
      *(short *)(param_1 + 4) = sVar4;
      DAT_03002ec2 = (byte)sVar4;
      bVar1 = 0xff;
LAB_08113316:
      DAT_03002ec0 = bVar1 & (byte)sVar4;
      DAT_03002ec1 = DAT_03002ec0;
      goto switchD_08113092_caseD_7;
    }
    uVar2 = 0;
    break;
  case 2:
    goto switchD_08113092_caseD_2;
  case 3:
    goto switchD_08113092_caseD_3;
  case 4:
    if (*(short *)(param_1 + 4) < 0x40) {
      uVar3 = *(short *)(param_1 + 4) + 1;
      goto LAB_08113304;
    }
    if (*(char *)(param_1 + 3) == '\0') {
      DAT_0202e8c5 = DAT_0202e8c5 | 1;
      if (DAT_0202e8e7 + -5 < 1) {
        DAT_0202e8e7 = '\0';
      }
      else {
        DAT_0202e8e7 = DAT_0202e8e7 + -5;
      }
      sub_0811225C();
    }
    else {
      DAT_0202e8c5 = DAT_0202e8c5 & 0xfe;
      sub_08112294();
      if ((DAT_02000c80 & 0x7f) == 10) {
        puVar6 = &DAT_0202ea54;
        uVar5 = 0;
      }
      else {
        puVar6 = &DAT_0202ea58;
        uVar5 = 0x3c0000;
      }
      *puVar6 = uVar5;
    }
    sub_0802B7B4(DAT_0202dbf0);
    DAT_0202dc08 = 0;
    *(undefined *)(DAT_0202dbf0 + 0x4c) = 1;
    *(byte *)(DAT_0202dbf0 + 0x4a) = *(byte *)(DAT_0202dbf0 + 0x4a) | 0x10;
    *(byte *)(DAT_0202dbf0 + 10) = *(byte *)(DAT_0202dbf0 + 10) | 0x10;
    *(undefined *)(DAT_0202dbf0 + 0xd) = 0xb;
    *(undefined *)(DAT_0202dbf0 + 0xe) = 2;
    *(undefined *)(DAT_0202dbf0 + 0xf) = 0;
    sub_081124AC(param_1);
    sub_08002464();
    sub_0801D5E0(&DAT_0202ea30);
    sub_0801C7CC(DAT_0202eda0);
    sub_0801C7CC(DAT_0202ed90);
    uVar2 = 8;
    break;
  case 5:
    sVar4 = *(short *)(param_1 + 4) + -1;
    *(short *)(param_1 + 4) = sVar4;
    if (sVar4 != 0) goto switchD_08113092_caseD_7;
    uVar2 = 0x40;
    break;
  case 6:
    if (*(short *)(param_1 + 4) == 0) {
      if ((*(char *)(DAT_0202dbf0 + 0xfc) == '\v') && (*(char *)(DAT_0202dbf0 + 0xd) == '\0')) {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        sub_08112080(param_1,0x400);
      }
      goto switchD_08113092_caseD_7;
    }
    uVar3 = *(short *)(param_1 + 4) - 1;
LAB_08113304:
    *(ushort *)(param_1 + 4) = uVar3;
    bVar1 = (char)((int)((uint)uVar3 << 0x10) >> 0x11) + 0x20;
    sVar4 = 0xff;
    DAT_03002ec2 = bVar1;
    goto LAB_08113316;
  default:
    goto switchD_08113092_caseD_7;
  }
  *(undefined2 *)(param_1 + 4) = uVar2;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
switchD_08113092_caseD_7:
  if ((byte)(*(char *)(param_1 + 2) - 3U) < 2) {
    if (*(char *)(param_1 + 3) == '\0') {
      sVar4 = *(short *)(param_1 + 6) + 1;
    }
    else {
      sVar4 = *(short *)(param_1 + 6) + -1;
    }
    *(short *)(param_1 + 6) = sVar4;
    sub_08002734(0x12,&DAT_08b2c000,
                 ((int)((uint)*(ushort *)(param_1 + 6) << 0x10) >> 0x11 & 3U) - 0x7e & 0xff,0,
                 (*(ushort *)(param_1 + 6) & 1) << 5);
    uVar2 = 0;
    if ((*(ushort *)(param_1 + 6) & 1) == 0) {
      uVar2 = 0x100;
    }
    _DAT_02000a10 = CONCAT22(uVar2,_DAT_02000a10);
  }
  else {
    iVar7 = param_1 + 0x9a0;
    sub_08003470(iVar7);
    sub_0800560C();
    DAT_0202dc04 = 0;
    local_1c[0] = 0;
    sub_081284E4(local_1c,&DAT_0202dc10,0x1000008);
    sub_0801F2E0(1);
    sub_0801C79C(DAT_0202ed84);
    sub_0801C7CC(DAT_0202edb0);
    sub_080D07EC();
    sub_0801CA0C(DAT_0202eda0,iVar7);
    sub_0801CA0C(DAT_0202ed8c,iVar7);
    sub_0801CA0C(DAT_0202ed90,iVar7);
    sub_0801CA0C(DAT_0202ed84,iVar7);
    sub_0801C924(DAT_0202edb0,iVar7);
    sub_0803A7E8(iVar7);
    sub_0801C924(DAT_0202ed94,iVar7);
    sub_0801C924(DAT_0202ed9c,iVar7);
    sub_0801CA0C(DAT_0202eda4,iVar7);
    sub_0801F460(1);
    sub_081145DC(param_1);
    sub_0810DE84();
  }
  return in_lr;
}

