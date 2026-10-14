// sub_0809ED64 at 0x0809ED64 (thumb)

undefined4 sub_0809ED64(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  uVar1 = *(ushort *)(param_1 + 0x52);
  if (uVar1 < 0x11) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0x10);
  }
  else {
    *(ushort *)(param_1 + 0x52) = uVar1 - 0x10;
  }
  return in_lr;
}

