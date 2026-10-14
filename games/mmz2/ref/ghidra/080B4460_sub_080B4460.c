// sub_080B4460 at 0x080B4460 (thumb)

undefined4 sub_080B4460(int param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    puVar2 = &DAT_08346c28;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      puVar2 = &DAT_08346c30;
    }
    sub_080B469C(param_1,puVar2);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B42EC(param_1);
  }
  else if (*(char *)(param_1 + 0xd) == '\0') {
    puVar2 = &DAT_08346c28;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      puVar2 = &DAT_08346c30;
    }
    cVar1 = sub_080B4838(param_1,*(undefined4 *)(param_1 + 0x5c),puVar2);
    if (cVar1 == '\0') {
      puVar2 = &DAT_08346c28;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        puVar2 = &DAT_08346c30;
      }
      cVar1 = sub_080B471C(param_1,puVar2);
      if (cVar1 != '\0') {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        *(undefined *)(param_1 + 0x76) = 0;
      }
    }
    else {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined *)(param_1 + 0x76) = 0;
    }
  }
  else {
    pcVar3 = (char *)(param_1 + 0x76);
    *pcVar3 = *pcVar3 + '\x01';
    if (*pcVar3 == '\x01') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100;
    }
    else if (*pcVar3 == '\x03') {
      puVar2 = &DAT_08346c28;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        puVar2 = &DAT_08346c30;
      }
      sub_080B469C(param_1,puVar2);
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0x10);
      sub_080B42EC(param_1);
    }
  }
  return in_lr;
}

