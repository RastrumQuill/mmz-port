// sub_0802D024 at 0x0802D024 (thumb)

undefined4 sub_0802D024(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    if ((DAT_02030104 & 0x10) == 0) {
      *(byte *)(param_1 + 0x231) = DAT_02030104 & 0x10;
      uVar4 = sub_08025A04(param_1);
      if ((short)(uVar4 & 0xff) < (short)*(ushort *)(param_1 + 0xa4)) {
        uVar4 = sub_08025A04(param_1);
        *(ushort *)(param_1 + 0xa4) = uVar4 & 0xff;
      }
    }
    sub_08025BDC(param_1);
    sub_08036FA8(0x8039c71);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x12) = 0x14;
    goto LAB_0802d0f8;
  case 1:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    goto LAB_0802d0f8;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0x3402);
    uVar5 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
LAB_0802d0f8:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 3:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0x12) = 0;
      if ((DAT_02030104 & 0x10) != 0) {
        cVar3 = sub_08032AE8(param_1,0xff);
        if (cVar3 != '\0') {
          sub_08017700(param_1,0x3400);
          *(undefined *)(param_1 + 0x12) = 0;
          *(undefined *)(param_1 + 0x13) = 0;
          *(undefined *)(param_1 + 0xf) = 4;
          return in_lr;
        }
        *(undefined *)(param_1 + 0x12) = 0;
      }
      *(undefined *)(param_1 + 0xf) = 5;
    }
    break;
  case 4:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      uVar1 = sub_08032AE8(param_1,*(undefined *)(param_1 + 0x13));
      sub_080C6D8C(param_1 + 0x54,uVar1,*(byte *)(param_1 + 0x13) & 1);
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      bVar2 = sub_08032AE8(param_1,0xff);
      if (*(byte *)(param_1 + 0x13) < bVar2) {
        uVar1 = sub_08032AE8(param_1);
        sub_080C6D8C(param_1 + 0x54,uVar1,*(byte *)(param_1 + 0x13) & 1);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      bVar2 = sub_08032AE8(param_1,0xff);
      if (*(byte *)(param_1 + 0x13) < bVar2) {
        cVar3 = sub_08032AE8(param_1,0xff);
        *(byte *)(param_1 + 0x12) = (byte)(cVar3 - *(char *)(param_1 + 0x13)) >> 1;
      }
      else {
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        *(undefined *)(param_1 + 0x12) = 0x20;
      }
    }
    break;
  case 5:
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      if ((DAT_02030104 & 0x10) != 0) {
        *(undefined *)(param_1 + 0x231) = 1;
      }
      sub_08017700(param_1,0x3301);
      *(undefined *)(param_1 + 0xf) = 10;
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return in_lr;
}

