// sub_080250B4 at 0x080250B4 (thumb)

undefined4 sub_080250B4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  bVar1 = *(byte *)(param_1 + 0x176);
  if (bVar1 == 0) {
    bVar1 = sub_08034A24(param_1);
  }
  if (bVar1 < 3) {
    uVar2 = sub_0803175C(param_1);
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 0x10) {
      sub_0801E9FC(param_1,*(undefined *)(param_1 + 0x180));
    }
  }
  else {
    *(undefined *)(param_1 + 0xf) = 0x10;
    uVar2 = 0x10;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08333bb4 + uVar2 * 4));
  return in_lr;
}

