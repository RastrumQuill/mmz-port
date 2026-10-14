// sub_0811FC6C at 0x0811FC6C (thumb)

undefined8 sub_0811FC6C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x82,0,0);
    sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
    *(undefined *)(param_1 + 0xdd9) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  sub_0812050C(param_1);
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 == '\x01') {
    bVar1 = (byte)DAT_02000766;
    if ((DAT_02000766 & 0x20) != 0) {
      sub_08002B10(1);
      uVar5 = 0;
      *(undefined *)(param_1 + 2) = 1;
      *(undefined *)(param_1 + 3) = 0;
      goto LAB_0811fea6;
    }
    uVar4 = DAT_02000766 & 0x10;
    if ((DAT_02000766 & 0x10) != 0) {
      sub_08002B10(1);
      *(undefined *)(param_1 + 2) = 3;
      *(byte *)(param_1 + 3) = bVar1 & 0x20;
      uVar5 = 0;
      goto LAB_0811fea6;
    }
    if (((DAT_02000764 & 1) == 0) && ((DAT_02000764 & 0x80) == 0)) {
      if ((DAT_02000764 & 2) != 0) {
        *(undefined *)(param_1 + 0xddd) = 1;
      }
    }
    else {
      if (*(char *)(param_1 + 0xdcf) != '\0') {
        sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0xb0,0,uVar4);
        sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
        sub_08002B10(2);
        *(char *)(param_1 + 0xdce) = (char)uVar4;
        goto LAB_0811fea0;
      }
LAB_0811fe04:
      sub_08002B10(4);
    }
  }
  else if (cVar2 == '\x02') {
    if ((DAT_02000764 & 2) != 0) {
      sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x82,0,0);
      sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
      sub_08002B10(3);
      uVar3 = 1;
      goto LAB_0811fea2;
    }
    if ((DAT_02000764 & 1) == 0) {
      if ((DAT_02000766 & 0x40) == 0) {
        if ((DAT_02000766 & 0x80) != 0) {
          if (*(byte *)(param_1 + 0xdce) + 1 < (uint)*(byte *)(param_1 + 0xdcf)) {
            sub_08002B10(1);
            *(char *)(param_1 + 0xdce) = *(char *)(param_1 + 0xdce) + '\x01';
          }
          else if (*(char *)(param_1 + 0xddb) != '\0') {
            sub_08002B10(1);
            *(char *)(param_1 + 0xdd9) = *(char *)(param_1 + 0xdd9) + '\x01';
          }
        }
      }
      else if (*(char *)(param_1 + 0xdce) == '\0') {
        if (*(char *)(param_1 + 0xdda) == '\0') {
          sub_08002B10(3);
          uVar3 = 1;
          goto LAB_0811fea2;
        }
        sub_08002B10(1);
        *(char *)(param_1 + 0xdd9) = *(char *)(param_1 + 0xdd9) + -1;
      }
      else {
        sub_08002B10(1);
        *(char *)(param_1 + 0xdce) = *(char *)(param_1 + 0xdce) + -1;
      }
    }
    else {
      if (*(char *)(param_1 + 0xdd2 + (uint)*(byte *)(param_1 + 0xdce)) == -1) goto LAB_0811fe04;
      sub_08002B10(2);
      *(undefined *)(param_1 + 3) = 3;
      *(undefined *)(param_1 + 0xdde) = 0;
    }
  }
  else if ((cVar2 == '\x03') && (cVar2 = sub_08120664(param_1), cVar2 != '\0')) {
LAB_0811fea0:
    uVar3 = 2;
LAB_0811fea2:
    *(undefined *)(param_1 + 3) = uVar3;
  }
  uVar5 = 1;
LAB_0811fea6:
  return CONCAT44(in_lr,uVar5);
}

