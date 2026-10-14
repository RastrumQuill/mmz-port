// sub_080A77C0 at 0x080A77C0 (thumb)

undefined4 sub_080A77C0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_080a7852;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080127E4(param_1,*(undefined2 *)(&DAT_08345288 + (uint)*(byte *)(param_1 + 0x12) * 2));
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_080a7852:
  sub_080128D4(param_1);
  if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((byte)(&DAT_0834528e)[*(byte *)(param_1 + 0x12)] <= bVar1) {
      uVar2 = *(byte *)(param_1 + 0x12) + 1;
      *(char *)(param_1 + 0x12) = (char)uVar2;
      if ((uVar2 & 0xff) == 2) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_08006DE4(param_1 + 0x74,&DAT_0834519c,param_1 + 0x54,0);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      if (*(char *)(param_1 + 0x12) == '\x03') {
        *(undefined *)(param_1 + 0xd) = 8;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
  }
  return in_lr;
}

