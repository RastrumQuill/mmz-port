// sub_080B06C8 at 0x080B06C8 (thumb)

undefined4 sub_080B06C8(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  sub_0809C980();
  bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = bVar1;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (((*(ushort *)(param_1 + 0x90) & 0x2000) != 0) && (DAT_02022874 != '\0')) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        if ((*(uint *)(DAT_02022b20 + 0x10) & 0x2000) == 0) {
          sub_080BC808(0x2de);
        }
        else if (DAT_02022afa == '\0') {
          sub_080BC808(0x2df);
          DAT_02022afa = DAT_02022afa + '\x01';
        }
        else {
          sub_080BC808(0x2e0);
        }
      }
      else if ((*(uint *)(DAT_02022b20 + 0x10) & 0x8000) == 0) {
        if ((*(uint *)(DAT_02022b20 + 0x10) & 0x4000) == 0) {
          if (*(char *)(DAT_02022b20 + 0xf) == '\r') {
            sub_080BC808(0x266);
          }
          else if ((DAT_02022ae9 & 0x80) == 0) {
            sub_080BC808(0x265);
            DAT_02022ae9 = DAT_02022ae9 | 0x80;
          }
          else {
            sub_080BC808(0x26a);
          }
        }
        else {
          sub_080BC808(0x267);
        }
      }
      else {
        sub_080BC808(0x268);
      }
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (DAT_0202365a == 0) {
    DAT_02022874 = '\0';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

