// sub_0811C178 at 0x0811C178 (thumb)

undefined8 sub_0811C178(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x85,0,0);
    sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
    *(undefined *)(param_1 + 0xdce) = 0;
    *(undefined *)(param_1 + 0xdd0) = 0;
    *(undefined *)(param_1 + 0xde2) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  sub_0811CD3C(param_1);
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 == '\x01') {
    sub_0811D07C(param_1);
    bVar1 = (byte)DAT_02000766;
    if ((DAT_02000766 & 0x20) != 0) {
      sub_08002B10(1);
      sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x85,0,0);
      sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
      *(undefined *)(param_1 + 2) = 1;
      *(undefined *)(param_1 + 3) = 0;
      uVar4 = 0;
      goto LAB_0811c4da;
    }
    if ((DAT_02000764 & 0x81) != 0) {
      if (*(char *)(param_1 + 0xdcf) == '\0') goto LAB_0811c462;
      sub_08002B10(2);
      *(byte *)(param_1 + 0xdce) = bVar1 & 0x20;
LAB_0811c4d4:
      uVar3 = 2;
      goto LAB_0811c4d6;
    }
    if ((DAT_02000764 & 2) != 0) {
      *(undefined *)(param_1 + 0xde7) = 1;
    }
  }
  else if (cVar2 == '\x02') {
    if ((DAT_02000764 & 2) == 0) {
      bVar1 = (byte)DAT_02000764;
      if ((DAT_02000764 & 1) == 0) {
        if ((DAT_02000766 & 0x10) != 0) {
          sub_08002B10(1);
          *(byte *)(param_1 + 0xdd0) = bVar1 & 1;
          uVar3 = 3;
          goto LAB_0811c4d6;
        }
        if ((DAT_02000766 & 0x40) == 0) {
          if ((DAT_02000766 & 0x80) != 0) {
            if (*(byte *)(param_1 + 0xdce) + 1 < (uint)*(byte *)(param_1 + 0xdcf)) {
              sub_08002B10(1);
              *(char *)(param_1 + 0xdce) = *(char *)(param_1 + 0xdce) + '\x01';
            }
            else if (*(char *)(param_1 + 0xde4) != '\0') {
              sub_08002B10(1);
              *(char *)(param_1 + 0xde2) = *(char *)(param_1 + 0xde2) + '\x01';
            }
          }
        }
        else if (*(char *)(param_1 + 0xdce) == '\0') {
          if (*(char *)(param_1 + 0xde3) == '\0') {
            sub_08002B10(3);
            uVar3 = 1;
            goto LAB_0811c4d6;
          }
          sub_08002B10(1);
          *(char *)(param_1 + 0xde2) = *(char *)(param_1 + 0xde2) + -1;
        }
        else {
          sub_08002B10(1);
          *(char *)(param_1 + 0xdce) = *(char *)(param_1 + 0xdce) + -1;
        }
      }
      else {
        cVar2 = sub_0811CF88(param_1,*(undefined *)
                                      (param_1 + 0xdd2 + (uint)*(byte *)(param_1 + 0xdce)));
        if (cVar2 == '\0') goto LAB_0811c462;
LAB_0811c45a:
        sub_08002B10(2);
      }
    }
    else {
      sub_08002B10(3);
      uVar3 = 1;
LAB_0811c4d6:
      *(undefined *)(param_1 + 3) = uVar3;
    }
  }
  else if (cVar2 == '\x03') {
    if ((DAT_02000764 & 2) == 0) {
      if ((DAT_02000764 & 1) == 0) {
        if ((DAT_02000766 & 0x20) != 0) {
          sub_08002B10(1);
          uVar3 = 2;
          goto LAB_0811c4d6;
        }
        if ((DAT_02000766 & 0x40) == 0) {
          if (((DAT_02000766 & 0x80) != 0) && (*(byte *)(param_1 + 0xdd0) < 4)) {
            sub_08002B10(1);
            *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + '\x01';
          }
        }
        else if (*(char *)(param_1 + 0xdd0) != '\0') {
          sub_08002B10(1);
          *(char *)(param_1 + 0xdd0) = *(char *)(param_1 + 0xdd0) + -1;
        }
      }
      else {
        if (*(char *)(param_1 + 0xdd0) == '\x04') {
          uVar5 = sub_0811D0D4(param_1 + 0xdd9);
          *(char *)(param_1 + 0xde1) = (char)uVar5;
          if ((((int)(uint)*(byte *)(DAT_0202edac + ((uVar5 << 0x18) >> 0x1a)) >> (uVar5 & 3) + 4 &
               1U) == 0) && (*(char *)(param_1 + 0xdda) != -1)) {
            *(undefined *)(param_1 + 0xddd) = *(undefined *)(param_1 + 0xdd9);
            *(char *)(param_1 + 0xdde) = *(char *)(param_1 + 0xdda);
            *(undefined *)(param_1 + 0xddf) = *(undefined *)(param_1 + 0xddb);
            *(undefined *)(param_1 + 0xde0) = *(undefined *)(param_1 + 0xddc);
            if ((uVar5 & 0xff) == 0xff) {
              sub_0811D280(param_1);
            }
            else {
              sub_0811D07C(param_1);
              sub_0811D1D4(uVar5 & 0xff);
            }
            sub_08002B10(0x1c);
            *(undefined *)(param_1 + 0xdce) = 0;
            uVar3 = 4;
            goto LAB_0811c4d6;
          }
        }
        else {
          cVar2 = sub_0811CFE8(param_1,*(undefined *)(param_1 + 0xdd0));
          if (cVar2 != '\0') goto LAB_0811c45a;
        }
LAB_0811c462:
        sub_08002B10(4);
      }
    }
    else {
      if (*(char *)(param_1 + 0xddc) == -1) {
        if (*(char *)(param_1 + 0xddb) == -1) {
          if (*(char *)(param_1 + 0xdda) == -1) {
            if (*(char *)(param_1 + 0xdd9) == -1) {
              *(undefined *)(param_1 + 3) = 1;
            }
            else {
              sub_0811CFE8(param_1,0);
            }
          }
          else {
            sub_0811CFE8(param_1,1);
          }
        }
        else {
          sub_0811CFE8(param_1,2);
        }
      }
      else {
        sub_0811CFE8(param_1,3);
      }
      sub_08002B10(3);
    }
  }
  else if ((cVar2 == '\x04') && (DAT_02000764 != 0)) goto LAB_0811c4d4;
  uVar4 = 1;
LAB_0811c4da:
  return CONCAT44(in_lr,uVar4);
}

