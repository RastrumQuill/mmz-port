// sub_0811C814 at 0x0811C814 (thumb)

undefined8 sub_0811C814(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 3) == '\0') {
    sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x84,0,0);
    sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
    *(undefined *)(param_1 + 0xdce) = 0;
    *(undefined *)(param_1 + 0xdd0) = 4;
    *(undefined *)(param_1 + 0xde2) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  sub_0811CE24(param_1);
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\x01') {
    bVar2 = (byte)DAT_02000766;
    if ((DAT_02000766 & 0x10) != 0) {
      sub_08002B10(1);
      uVar4 = 0;
      *(undefined *)(param_1 + 2) = 0;
      *(undefined *)(param_1 + 3) = 0;
      goto LAB_0811ca3e;
    }
    if ((DAT_02000764 & 0x81) == 0) {
      if ((DAT_02000764 & 2) != 0) {
        *(undefined *)(param_1 + 0xde7) = 1;
      }
    }
    else {
      if (*(char *)(param_1 + 0xdcf) != '\0') {
        sub_08002B10(2);
        *(byte *)(param_1 + 0xdce) = bVar2 & 0x10;
LAB_0811ca38:
        uVar3 = 2;
        goto LAB_0811ca3a;
      }
LAB_0811c950:
      sub_08002B10(4);
    }
  }
  else {
    if (cVar1 == '\x02') {
      if ((DAT_02000764 & 2) == 0) {
        if ((DAT_02000764 & 1) == 0) {
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
              goto LAB_0811ca3a;
            }
            sub_08002B10(1);
            *(char *)(param_1 + 0xde2) = *(char *)(param_1 + 0xde2) + -1;
          }
          else {
            sub_08002B10(1);
            *(char *)(param_1 + 0xdce) = *(char *)(param_1 + 0xdce) + -1;
          }
          goto LAB_0811ca3c;
        }
        bVar2 = *(byte *)(param_1 + 0xdd2 + (uint)*(byte *)(param_1 + 0xdce));
        uVar5 = (uint)bVar2;
        uVar6 = 0;
        if ((uVar5 != 0xff) &&
           (((int)(uint)*(byte *)(DAT_0202edac + (uint)(bVar2 >> 2)) >> (uVar5 & 3) + 4 & 1U) == 0))
        {
          uVar5 = sub_0811D2B0(uVar5);
          uVar6 = -(uVar5 & 0xff) >> 0x1f;
        }
        if (uVar6 == 0) goto LAB_0811c950;
        sub_08002B10(2);
        uVar3 = 3;
      }
      else {
        sub_08002B10(3);
        uVar3 = 1;
      }
    }
    else {
      if (cVar1 != '\x03') {
        if ((cVar1 == '\x04') && (DAT_02000764 != 0)) goto LAB_0811ca38;
        goto LAB_0811ca3c;
      }
      if ((DAT_02000764 & 2) == 0) {
        if ((DAT_02000764 & 1) == 0) goto LAB_0811ca3c;
        sub_0811D1D4(*(undefined *)(param_1 + 0xdd2 + (uint)*(byte *)(param_1 + 0xdce)));
        sub_08002B10(0x1c);
        uVar3 = 4;
      }
      else {
        sub_08002B10(3);
        uVar3 = 2;
      }
    }
LAB_0811ca3a:
    *(undefined *)(param_1 + 3) = uVar3;
  }
LAB_0811ca3c:
  uVar4 = 1;
LAB_0811ca3e:
  return CONCAT44(in_lr,uVar4);
}

