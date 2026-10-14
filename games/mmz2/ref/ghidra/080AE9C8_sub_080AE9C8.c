// sub_080AE9C8 at 0x080AE9C8 (thumb)

undefined4 sub_080AE9C8(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x74) == '\0') {
    if (*(short *)(param_1 + 0x78) == 0x100) {
      sub_08012580(param_1);
      goto LAB_080ae9fc;
    }
  }
  sub_080126A0(param_1);
LAB_080ae9fc:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,0xb);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x74);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x78);
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080AEA7C(param_1);
  return in_lr;
}

