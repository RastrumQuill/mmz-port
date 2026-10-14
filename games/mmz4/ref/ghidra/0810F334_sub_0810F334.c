// sub_0810F334 at 0x0810F334 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0810F334(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_28;
  undefined4 local_24;
  
  switch(*(undefined *)(param_1 + 5)) {
  case 0:
    DAT_03002ec2 = 0x20;
    DAT_03002ec1 = 0x20;
    DAT_03002ec0 = 0x20;
    DAT_03002ec8 = 0;
    sub_08002348();
    DAT_02000a40 = 0;
    DAT_02000a50 = 0;
    DAT_02000a5e = 0xff;
    DAT_02000a60 = 0;
    DAT_03002ac0 = 0;
    sub_0810CE60();
    sub_0800201C();
    sub_0810CED4();
    DAT_02000a00 = DAT_02000a00 & 0xf0f8;
    sub_080012EC(1);
    DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x3e00;
    DAT_02000a06 = 0x8c0a;
    DAT_02000a08 = 0x8e0e;
    DAT_02000a0a = 0x4a02;
    _DAT_02000a10 = 0;
    DAT_02000a14 = 0;
    DAT_02000a18 = 0;
    local_28 = 0;
    sub_081284E4(&local_28,&DAT_06006000,0x1000400);
    local_24 = 0;
    sub_081284E4(&local_24,(DAT_02000a08 & 0x1f00) * 8 + 0x6000000,0x1000400);
    local_24 = 0;
    sub_081284E4(&local_24,(DAT_02000a0a & 0x1f00) * 8 + 0x6000000,0x1000400);
    sub_08001D30(&DAT_08b6ccd0,(DAT_02000a0a & 0xc) << 0xc);
    sub_08002208(&DAT_08b6ccdc,0);
    sub_08002734(0x38,&DAT_08b2c000,0xa4,0,0);
    sub_08001D30(&DAT_08b6cd0c,(DAT_02000a06 & 0xc) << 0xc);
    sub_08002208(&DAT_08b6cd18,0);
    sub_08001D30(&DAT_08b6cd20,(DAT_02000a08 & 0xc) * 0x1000);
    sub_08002208(&DAT_08b6cd2c,0);
    sub_08002734(0x12,&DAT_08b2c000,0xa7,0,0);
    DAT_02000a40 = 0x3946;
    DAT_02000a42 = 0x1010;
    sub_08002A88(0x9d);
    *(undefined2 *)(param_1 + 8) = 0xff40;
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  case 1:
    if (*(short *)(param_1 + 10) < 0x40) {
      iVar2 = *(ushort *)(param_1 + 10) + 1;
      *(short *)(param_1 + 10) = (short)iVar2;
      DAT_03002ec0 = (undefined)(iVar2 * 0x10000 >> 0x11);
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
    }
    else {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
switchD_0810f352_caseD_2:
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
    sub_0810F7B0(param_1);
    if ((ushort)(*(short *)(param_1 + 8) - 0x670U) < 0x20) {
      sub_0810F96C(*(short *)(param_1 + 8) - 0x70U & 0xff);
    }
    if ((ushort)(*(short *)(param_1 + 8) - 0x690U) < 0x20) {
      sub_0810FA00(*(short *)(param_1 + 8) + 0x70U & 0xff);
    }
    if ((ushort)(*(short *)(param_1 + 8) - 0xda0U) < 0x20) {
      sub_0810F96C(*(short *)(param_1 + 8) + 0x60U & 0xff);
    }
    if ((ushort)(*(short *)(param_1 + 8) - 0xdc0U) < 0x20) {
      sub_0810FA00(*(short *)(param_1 + 8) + 0x40U & 0xff);
    }
    if (*(short *)(param_1 + 8) == 0x690) {
      sub_08001D30(&DAT_08b6cce4,(DAT_02000a0a & 0xc) << 0xc);
      sub_08002208(&DAT_08b6ccf0,0);
      sub_08002734(0x38,&DAT_08b2c000,0xa5,0,0);
    }
    else if (*(short *)(param_1 + 8) == 0xdc0) {
      sub_08001D30(&DAT_08b6ccf8,(DAT_02000a0a & 0xc) << 0xc);
      sub_08002208(&DAT_08b6cd04,0);
      sub_08002734(0x38,&DAT_08b2c000,0xa6,0,0);
    }
    if (*(char *)(param_1 + 7) == '\0') {
      uVar1 = 0xb;
    }
    else {
      uVar1 = 8;
    }
    if ((uVar1 & DAT_02000764) == 0) {
      if (*(short *)(param_1 + 8) == 0x174c) {
        sub_08002A98(0x9d);
      }
      if (0x1787 < *(short *)(param_1 + 8)) {
        *(undefined2 *)(param_1 + 10) = 0x20;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
switchD_0810f352_caseD_3:
        iVar2 = *(ushort *)(param_1 + 10) - 1;
        *(short *)(param_1 + 10) = (short)iVar2;
        DAT_03002ec0 = (undefined)iVar2;
        DAT_03002ec1 = DAT_03002ec0;
        DAT_03002ec2 = DAT_03002ec0;
        if (iVar2 * 0x10000 < 1) {
          DAT_02000a00 = DAT_02000a00 & 0xf0ff | 0x100;
          sub_08001FD4(&DAT_0202f620,(DAT_02000a04 & 0x1f00) << 3,0x580,0x3c0);
          DAT_03002ec2 = 0x20;
          DAT_03002ec1 = 0x20;
          DAT_03002ec0 = 0x20;
          DAT_03002ec8 = 0;
          sub_08002348();
          DAT_02000a40 = 0;
          DAT_02000a50 = 0;
          DAT_02000a5e = 0xff;
          DAT_02000a60 = 0;
          DAT_03002ac0 = 0;
          sub_0810CE60();
          sub_080029C0();
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        }
      }
    }
    else {
      *(undefined2 *)(param_1 + 10) = 1;
      *(undefined *)(param_1 + 5) = 3;
    }
    break;
  case 2:
    goto switchD_0810f352_caseD_2;
  case 3:
    goto switchD_0810f352_caseD_3;
  case 4:
    if (*(char *)(param_1 + 7) == '\0') {
      *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
      sub_0810F0B0(&DAT_0202f3b0,1);
      sub_080013B0(0x80007cd);
    }
    else {
      sub_0810F0B0(param_1,5);
    }
  }
  return in_lr;
}

