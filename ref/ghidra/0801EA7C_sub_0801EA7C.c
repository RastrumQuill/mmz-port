// sub_0801EA7C at 0x0801EA7C (thumb)

undefined4 sub_0801EA7C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  bVar1 = *(byte *)(param_1 + 0xbe);
  if (bVar1 == 0) {
    bVar1 = sub_08017D70(param_1);
  }
  if (bVar1 < 3) {
    uVar2 = sub_08016028(param_1);
    uVar2 = uVar2 & 0xff;
    if (uVar2 == 6) {
      sub_08018BE8(param_1,*(undefined *)(param_1 + 0x116));
    }
  }
  else {
    *(undefined *)(param_1 + 0xf) = 6;
    uVar2 = 6;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082a98a4 + uVar2 * 4));
  return in_lr;
}

