// sub_080EBADC at 0x080EBADC (thumb)

undefined4 sub_080EBADC(int param_1)

{
  short sVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 6);
  uVar5 = (uint)bVar2;
  if (uVar5 == 0) {
    sub_08004694(0xbf);
    DAT_020023c0 = DAT_020023c0 & 0xf0ff;
    DAT_02002400 = 0x248;
    DAT_02002402 = 0x1000;
    DAT_02030c4c = uVar5;
    sub_080ECB8C(param_1);
    sub_080ECCE4(param_1);
    sub_080ED1D4(param_1);
    *(undefined *)(param_1 + 0x234) = 0;
    *(undefined *)(param_1 + 0x235) = 0;
    *(ushort *)(param_1 + 8) = (ushort)bVar2;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (uVar5 != 1) goto LAB_080ebc08;
  sub_080ECC18(param_1);
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 < 0x10e) {
    if (sVar1 == 0x10d) {
      DAT_020023c0 = DAT_020023c0 & 0xc7ff;
    }
    else if (sVar1 < 0xb8) {
      if (0x53 < sVar1) {
        sub_080ED280(param_1,1);
      }
    }
    else {
      sub_080ED280(param_1,0);
    }
  }
  sVar1 = *(short *)(param_1 + 8);
  if (sVar1 < 0x118) {
    if (sVar1 < 0xf0) {
      if (sVar1 < 200) {
        if (sVar1 < 0x8c) {
          if (99 < sVar1) {
            sub_080ECF90(param_1,0);
          }
        }
        else {
          sub_080ECF90(param_1,1);
        }
      }
      else {
        sub_080ECF90(param_1,2);
      }
    }
    else {
      sub_080ECF90(param_1,3);
    }
  }
  if (0x10e < *(short *)(param_1 + 8)) {
    sub_080ECDB0(param_1);
  }
  if (0x19e < *(short *)(param_1 + 8)) {
    DAT_020023c0 = DAT_020023c0 | 0x3800;
    sub_080ED280(param_1,2);
  }
LAB_080ebc08:
  cVar4 = *(char *)(param_1 + 0x235);
  if (cVar4 == '\0') {
    bVar2 = *(byte *)(param_1 + 0x234);
    if (bVar2 < 0x40) {
      bVar2 = bVar2 + 1;
      *(byte *)(param_1 + 0x234) = bVar2;
      DAT_03002ec0 = bVar2 >> 1;
      DAT_03002ec1 = DAT_03002ec0;
      DAT_03002ec2 = DAT_03002ec0;
    }
  }
  else {
    cVar4 = cVar4 + -1;
    *(char *)(param_1 + 0x235) = cVar4;
    DAT_03002ec0 = 0x40 - cVar4;
    DAT_03002ec1 = DAT_03002ec0;
    DAT_03002ec2 = DAT_03002ec0;
  }
  uVar3 = *(short *)(param_1 + 8) + 1;
  *(ushort *)(param_1 + 8) = uVar3;
  if ((int)((uint)uVar3 * 0x10000) < 0x1ad0001) {
    if ((*(char *)(param_1 + 0x236) == '\0') && ((DAT_02002134 & 0xb) == 0)) {
      return in_lr;
    }
    sub_0800471C(0x14d);
    sub_080046A4(0xbf);
  }
  else {
    sub_0800471C(0x14d);
  }
  DAT_03002ec2 = 0x40;
  DAT_03002ec1 = 0x40;
  DAT_03002ec0 = 0x40;
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)(param_1 + 5) = 2;
  return in_lr;
}

