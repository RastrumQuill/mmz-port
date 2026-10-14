// sub_080EC838 at 0x080EC838 (thumb)

undefined8 sub_080EC838(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + 0x250);
  bVar2 = *pbVar5;
  if (bVar2 == 5) {
    *pbVar5 = 6;
    sub_08001514();
LAB_080ec9c8:
    sub_080013F8();
LAB_080ec9cc:
    uVar4 = 1;
  }
  else {
    if (bVar2 < 6) {
      if (bVar2 == 2) {
        *(undefined *)(param_1 + 0x252) = 1;
        *(undefined *)(param_1 + 0x251) = 0x3c;
        *pbVar5 = 3;
        sub_08001560();
      }
      else if (bVar2 < 3) {
        if (bVar2 == 0) {
          *(undefined *)(param_1 + 0x252) = 0;
          *(undefined *)(param_1 + 0x251) = 0x3c;
          *pbVar5 = 1;
          sub_08001364();
        }
        else if (bVar2 == 1) {
          cVar1 = sub_080013D0();
          if (cVar1 == '\0') {
            cVar1 = *(char *)(param_1 + 0x251);
            if (cVar1 != '\0') goto LAB_080ec948;
            *pbVar5 = 2;
            sub_0800100C();
          }
          else {
            sub_0800471C(6);
            *(undefined *)(param_1 + 0x253) = 0;
            *pbVar5 = 4;
          }
        }
      }
      else if (bVar2 == 3) {
        cVar1 = sub_08001610();
        if (cVar1 == '\0') {
          DAT_02001750 = 0;
          *(undefined *)(param_1 + 0x253) = 0;
LAB_080ecab8:
          *pbVar5 = 9;
        }
        else {
          cVar1 = *(char *)(param_1 + 0x251);
          if (cVar1 == '\0') {
            *pbVar5 = 0;
            sub_080017C4();
          }
          else {
LAB_080ec948:
            *(char *)(param_1 + 0x251) = cVar1 + -1;
          }
        }
      }
      else if (bVar2 == 4) {
        cVar1 = sub_080013F8();
        if (cVar1 == '\0') {
          if (*(char *)(param_1 + 0x253) == '\x01') {
            bVar2 = 5;
          }
          else {
            if (*(char *)(param_1 + 0x253) != '\x02') goto LAB_080ec9cc;
            bVar2 = 7;
          }
        }
        else {
          bVar2 = 0x80;
        }
        *pbVar5 = bVar2;
        goto LAB_080ec9cc;
      }
    }
    else {
      if (bVar2 == 8) {
        cVar1 = sub_08001418();
        if (cVar1 != '\0') {
          *pbVar5 = 2;
          *(undefined4 *)(param_1 + 0x24c) = 0;
          sub_0800100C();
        }
        goto LAB_080ec9cc;
      }
      if (bVar2 < 9) {
        if (bVar2 == 6) {
          cVar1 = sub_08001438();
          if (cVar1 == '\0') {
            *pbVar5 = 0x80;
          }
          else if (cVar1 == '\x01') {
            *pbVar5 = 2;
            uVar3 = sub_0800153C();
            *(uint *)(param_1 + 0x24c) = uVar3 & 0xffff;
            sub_0800100C();
          }
          goto LAB_080ec9cc;
        }
        if (bVar2 == 7) {
          *pbVar5 = 8;
          sub_0800100C();
          goto LAB_080ec9c8;
        }
      }
      else if (bVar2 == 10) {
        cVar1 = sub_08001598();
        if (*(char *)(param_1 + 0x253) == '\0') {
          uVar4 = 2;
          goto LAB_080ecade;
        }
        if (cVar1 == '\0') goto LAB_080ecab8;
        *pbVar5 = 0;
      }
      else if (bVar2 < 10) {
        cVar1 = sub_08001598();
        if (cVar1 == '\0') {
          if ((ushort)(DAT_02001750 - 1) < 0x1ff) {
            if (DAT_02001750 == 0xff) {
              uVar4 = 4;
            }
            else if (DAT_02001750 == 0x102) {
              uVar4 = 5;
            }
            else if ((DAT_02001750 & 1) == 0) {
              uVar4 = 3;
            }
            else {
              uVar4 = 6;
            }
            *(undefined4 *)(param_1 + 0x24c) = uVar4;
            if ((&DAT_02002358)[(byte)(&DAT_0838b658)[*(int *)(param_1 + 0x24c)]] !=
                *(char *)((int)&DAT_080fe64c +
                         (((byte)(&DAT_0838b658)[*(int *)(param_1 + 0x24c)] + 0x18) * 0x1000000 >>
                         0x17))) {
              *(undefined *)(param_1 + 0x250) = 10;
              sub_080017C4();
            }
          }
        }
        else if (cVar1 == '\x01') {
          *pbVar5 = 0x80;
        }
      }
      else if (bVar2 == 0x80) {
        *(undefined4 *)(param_1 + 0x24c) = 0xffffffff;
        *pbVar5 = 0;
        sub_0800100C();
        sub_080017C4();
      }
    }
    uVar4 = 0;
  }
LAB_080ecade:
  return CONCAT44(in_lr,uVar4);
}

