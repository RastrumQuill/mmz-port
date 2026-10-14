// sub_0809D520 at 0x0809D520 (thumb)

undefined4 sub_0809D520(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      bVar1 = *(byte *)(param_1 + 0xe);
      if (bVar1 != 1) {
        if (1 < bVar1) {
          if (bVar1 != 2) {
            return in_lr;
          }
          *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
          sub_080177F4(param_1);
          return in_lr;
        }
        if (bVar1 != 0) {
          return in_lr;
        }
        if (*(char *)(param_1 + 0x10) == '\0') {
          sub_08017700(param_1,0xa01);
          sub_08007390(param_1 + 0x74,&DAT_0836736c);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0xb8);
          *(undefined4 *)(param_1 + 0x5c) = 0;
        }
        else {
          sub_08017700(param_1,0xa04);
          sub_08007390(param_1 + 0x74,&DAT_08367384);
          *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0xb8);
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        *(byte *)(param_1 + 0x13) = (byte)(uVar3 * 2 >> 0x11) & 1;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      return in_lr;
    }
  }
  else {
    sub_080B2484(3,param_1 + 0x54);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

