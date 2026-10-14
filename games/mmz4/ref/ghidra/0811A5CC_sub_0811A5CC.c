// sub_0811A5CC at 0x0811A5CC (thumb)

undefined4 sub_0811A5CC(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  pcVar4 = (char *)(param_1 + 0xdf7);
  if (*pcVar4 == '\0') {
    *(undefined *)(param_1 + 0xdd3) = 0;
    *(undefined *)(param_1 + 0xddb) = 0;
    *pcVar4 = *pcVar4 + '\x01';
  }
  sub_080025D8(0x16);
  sub_0811AAC8(param_1);
  if ((DAT_02000764 & 2) != 0) {
    sub_080027B8(param_1 + 0x16d8,&DAT_08b2c000,0x15,0,0);
    sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
    sub_08002B10(3);
    *(undefined *)(param_1 + 3) = 2;
    *pcVar4 = '\0';
    return in_lr;
  }
  if ((DAT_02000766 & 0x40) == 0) {
    if ((DAT_02000766 & 0x80) == 0) goto LAB_0811a6c6;
    if (*(byte *)(param_1 + 0xdd3) + 1 < (uint)*(byte *)(param_1 + 0xdda)) {
      sub_08002B10(1);
      *(char *)(param_1 + 0xdd3) = *(char *)(param_1 + 0xdd3) + '\x01';
      goto LAB_0811a6c6;
    }
    if (*(char *)(param_1 + 0xddd) == '\0') goto LAB_0811a6c6;
    sub_08002B10(1);
    cVar1 = *(char *)(param_1 + 0xddb) + '\x01';
  }
  else {
    if (*(char *)(param_1 + 0xdd3) != '\0') {
      sub_08002B10(1);
      *(char *)(param_1 + 0xdd3) = *(char *)(param_1 + 0xdd3) + -1;
      goto LAB_0811a6c6;
    }
    if (*(char *)(param_1 + 0xddc) == '\0') goto LAB_0811a6c6;
    sub_08002B10(1);
    cVar1 = *(char *)(param_1 + 0xddb) + -1;
  }
  *(char *)(param_1 + 0xddb) = cVar1;
LAB_0811a6c6:
  sub_0811AAC8(param_1);
  uVar3 = 0;
  do {
    if (5 < uVar3) {
LAB_0811a72a:
      sub_0811AB74(param_1);
      sub_0810D214(&DAT_0886aa8a,1,0x12);
      return in_lr;
    }
    pbVar2 = (byte *)(param_1 + 0xdd4 + uVar3);
    if (*pbVar2 == 0xff) {
      if (uVar3 == 0) {
        sub_0810D214(&DAT_0886bab7,3,2);
      }
      goto LAB_0811a72a;
    }
    sub_0810D214(&DAT_0886a17c + (ushort)(&DAT_08869ac0)[*pbVar2 + 0x118],3,uVar3 * 2 + 2);
    uVar3 = uVar3 + 1 & 0xff;
  } while( true );
}

