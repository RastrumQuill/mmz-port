// sub_0809D884 at 0x0809D884 (thumb)

undefined4 sub_0809D884(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
    uVar2 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    if ((*(uint *)(param_1 + 0xb4) & 2) == 0) {
      bVar1 = *(byte *)(param_1 + 0xe);
      if (bVar1 != 1) {
        if (1 < bVar1) {
          if (bVar1 != 2) {
            return in_lr;
          }
          sub_080177F4(param_1);
          if (*(char *)(param_1 + 0x73) != '\x03') {
            return in_lr;
          }
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        if (bVar1 != 0) {
          return in_lr;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_08017700(param_1,0x1905);
        sub_08007390(param_1 + 0x74,&DAT_083673d8);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x71) == '\x01') {
        sub_08007390(param_1 + 0x74,&DAT_083673f0);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(uint *)(param_1 + 0xb4) = 0;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
    sub_0809D7A4(param_1);
  }
  return in_lr;
}

