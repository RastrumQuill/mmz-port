// sub_08103D28 at 0x08103D28 (thumb)

undefined4 sub_08103D28(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  DAT_0202e1f6 = 0x38d;
  DAT_0202dff6 = 10;
  sub_08001D30(&DAT_08c4511c,0xfce0);
  sub_08002208(&DAT_08c45128,(DAT_0202dff6 - 8) * 0x20 + 0x200);
  uVar1 = 0;
  do {
    *(undefined4 *)(param_1 + 0xb4 + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  uVar1 = 0;
  do {
    *(undefined4 *)(uVar1 * 4 + param_1 + 0x5c) = 0;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0x20;
  return in_lr;
}

