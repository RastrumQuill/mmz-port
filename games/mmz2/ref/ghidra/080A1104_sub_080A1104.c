// sub_080A1104 at 0x080A1104 (thumb)

undefined4 sub_080A1104(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_083445a4)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\x03') {
    sub_08012738(param_1);
    sub_080127D0(param_1);
    sub_080128AC(param_1,0xa718,*(byte *)(param_1 + 0xb6) & 1,2);
    bVar1 = *(byte *)(param_1 + 0xb5);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb4);
  }
  else {
    sub_08012580(param_1);
  }
  sub_080A11B8(param_1);
  return in_lr;
}

