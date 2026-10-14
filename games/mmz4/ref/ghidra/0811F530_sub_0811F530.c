// sub_0811F530 at 0x0811F530 (thumb)

undefined8 sub_0811F530(int param_1)

{
  char cVar1;
  undefined uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x80,0,0);
    sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
    *(undefined *)(param_1 + 0xdd9) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  sub_081203AC(param_1);
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x01') {
    uVar3 = DAT_02000766 & 0x10;
    if ((DAT_02000766 & 0x10) != 0) {
      sub_08002B10(1);
      uVar4 = 0;
      *(undefined *)(param_1 + 2) = 1;
      *(undefined *)(param_1 + 3) = 0;
      goto LAB_0811f74e;
    }
    if (((DAT_02000764 & 1) == 0) && ((DAT_02000764 & 0x80) == 0)) {
      if ((DAT_02000764 & 2) != 0) {
        *(undefined *)(param_1 + 0xddd) = 1;
      }
    }
    else {
      if (*(char *)(param_1 + 0xdcf) != '\0') {
        sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0xae,0,uVar3);
        sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
        sub_08002B10(2);
        *(char *)(param_1 + 0xdce) = (char)uVar3;
        goto LAB_0811f748;
      }
LAB_0811f6ac:
      sub_08002B10(4);
    }
  }
  else if (cVar1 == '\x02') {
    if ((DAT_02000764 & 2) != 0) {
      sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x80,0,0);
      sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
      sub_08002B10(3);
      uVar2 = 1;
      goto LAB_0811f74a;
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
          uVar2 = 1;
          goto LAB_0811f74a;
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
      if (*(char *)(param_1 + 0xdd2 + (uint)*(byte *)(param_1 + 0xdce)) == -1) goto LAB_0811f6ac;
      sub_08002B10(2);
      *(undefined *)(param_1 + 3) = 3;
      *(undefined *)(param_1 + 0xdde) = 0;
    }
  }
  else if ((cVar1 == '\x03') && (cVar1 = sub_08120664(param_1), cVar1 != '\0')) {
LAB_0811f748:
    uVar2 = 2;
LAB_0811f74a:
    *(undefined *)(param_1 + 3) = uVar2;
  }
  uVar4 = 1;
LAB_0811f74e:
  return CONCAT44(in_lr,uVar4);
}

