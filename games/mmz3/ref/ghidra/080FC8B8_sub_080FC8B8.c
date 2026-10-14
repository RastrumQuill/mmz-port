// sub_080FC8B8 at 0x080FC8B8 (thumb)

undefined4 sub_080FC8B8(undefined4 param_1,byte *param_2)

{
  char *pcVar1;
  undefined4 in_lr;
  
  if ((*param_2 & 0x80) != 0) {
    for (pcVar1 = *(char **)(param_2 + 0x20); pcVar1 != (char *)0x0;
        pcVar1 = *(char **)(pcVar1 + 0x34)) {
      if (*pcVar1 != '\0') {
        if ((pcVar1[1] & 7U) != 0) {
          sub_080FC8A8();
        }
        *pcVar1 = '\0';
      }
      *(undefined4 *)(pcVar1 + 0x2c) = 0;
    }
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  return in_lr;
}

