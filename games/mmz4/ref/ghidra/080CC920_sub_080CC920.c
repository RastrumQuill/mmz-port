// sub_080CC920 at 0x080CC920 (thumb)

undefined4 sub_080CC920(undefined4 *param_1,undefined param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c44ec4,(DAT_0202e1ba - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44ed0,(DAT_0202dfba - 4) * 0x20 + 0x200);
  iVar1 = sub_08005500(DAT_0202ed94);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 8;
    *(undefined *)(iVar1 + 9) = 0x2c;
    *(undefined4 *)(iVar1 + 0x14) = 0x80cc9bd;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    uVar2 = param_1[1];
    *(undefined4 *)(iVar1 + 0x54) = *param_1;
    *(undefined4 *)(iVar1 + 0x58) = uVar2;
    *(undefined *)(iVar1 + 0x10) = param_2;
    *(undefined *)(iVar1 + 0x11) = param_3;
  }
  return in_lr;
}

