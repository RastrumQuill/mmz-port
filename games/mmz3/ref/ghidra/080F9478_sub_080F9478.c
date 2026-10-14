// sub_080F9478 at 0x080F9478 (thumb)

undefined4 sub_080F9478(int param_1)

{
  undefined uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xdc4) = 0x7800;
  *(undefined4 *)(param_1 + 0xdc8) = 0x5000;
  DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x3700;
  DAT_020023c6 = 0x206;
  DAT_020023c8 = 0x407;
  DAT_020023d0 = 0;
  DAT_020023d4 = 0;
  sub_0800393C(&DAT_08547c80,0x4000);
  sub_08003E14(&DAT_08547c8c,0);
  sub_080043C4(param_1 + 0xed8,&DAT_085222a0,0x80,0,0);
  sub_08004340(0x24,&DAT_085222a0,0x81,0,0);
  sub_0800393C(&DAT_085d8b2c,(DAT_0202fbe2 - 0x22c) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8b38,(DAT_0202f9e2 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8b40,(DAT_0202fbe4 - 0x274) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8b4c,(DAT_0202f9e4 - 10) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d78f8,(DAT_0202fa10 - 0xa0) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7904,(DAT_0202f810 - 0xe) * 0x20 + 0x200);
  *(undefined *)(param_1 + 0xdd0) = 0;
  *(undefined *)(param_1 + 0xdd1) = 0;
  *(undefined4 *)(param_1 + 0xdd4) = 0;
  *(undefined4 *)(param_1 + 0xdd8) = DAT_02002458;
  *(undefined2 *)(param_1 + 0xdd2) = 0;
  uVar4 = 0;
  do {
    *(undefined *)(param_1 + 0xde4 + uVar4) = 0xff;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 5);
  *(undefined2 *)(param_1 + 0xddc) = 0;
  *(undefined2 *)(param_1 + 0xdde) = 0x78;
  uVar4 = 0;
  do {
    DAT_0203710c = DAT_0203710c * 0x41c64e6d + 0x3039;
    uVar1 = sub_080FE4D8(DAT_0203710c >> 0x10,5);
    *(undefined *)(param_1 + 0xde0 + uVar4) = uVar1;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  uVar4 = 0;
  do {
    *(undefined *)(param_1 + 0xde9 + uVar4) = 0;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 5);
  uVar4 = 0;
  do {
    *(undefined2 *)(param_1 + 0xdf0 + uVar4 * 2) = 0xff;
    *(undefined *)(param_1 + 0xe04 + uVar4) = 0;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 10);
  *(undefined2 *)(param_1 + 0xdf0) = 0;
  *(undefined2 *)(param_1 + 0xdf4) = 1;
  *(undefined2 *)(param_1 + 0xdfa) = 2;
  *(undefined2 *)(param_1 + 0xdfe) = 3;
  *(undefined2 *)(param_1 + 0xe00) = 4;
  *(undefined *)(param_1 + 0xdee) = 0;
  *(undefined *)(param_1 + 0xdef) = 0;
  bVar2 = 0;
  do {
    sub_080B1C9C(param_1,0,bVar2);
    sub_080B1C9C(param_1,1,bVar2);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  bVar2 = 0;
  do {
    sub_0809BC4C(param_1,bVar2,0);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 4);
  bVar2 = 0;
  do {
    sub_080DD7D4(param_1,0,bVar2);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 10);
  sub_080DD7D4(param_1,1,0);
  uVar3 = sub_080C88B4(0xd800,0x5800,param_1 + 0xdd8,0,0,5,1);
  *(undefined4 *)(param_1 + 0xdcc) = uVar3;
  uVar1 = (undefined)*(undefined2 *)(DAT_020305e8 + 10);
  *(undefined *)(param_1 + 0xe0f) = uVar1;
  *(undefined *)(param_1 + 0xe0e) = uVar1;
  *(undefined2 *)(param_1 + 0xe10) = 0x40;
  *(undefined *)(param_1 + 0xe12) = 1;
  *(undefined *)(param_1 + 0xe13) = 0;
  *(undefined *)(param_1 + 0xe14) = 0;
  *(undefined *)(param_1 + 0xe15) = 0;
  *(undefined *)(param_1 + 0xe16) = 0;
  *(undefined *)(param_1 + 0xe17) = 0;
  sub_080040A8(0xd6,0);
  DAT_02002410 = DAT_02002410 | 0x2000;
  DAT_0200241c = 0x12;
  DAT_0200241e = DAT_0200241e | 4;
  DAT_02002414 = 0xd0e0;
  DAT_02002418 = 0x838;
  sub_08003B28(param_1 + 0xed8,(DAT_020023c6 & 0x1f00) << 3,0x1000);
  return in_lr;
}

