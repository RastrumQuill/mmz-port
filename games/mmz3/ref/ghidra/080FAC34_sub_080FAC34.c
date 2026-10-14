// sub_080FAC34 at 0x080FAC34 (thumb)

undefined4 sub_080FAC34(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  puVar3 = (undefined *)(param_1 + 0xdcc);
  *(undefined4 *)(param_1 + 0xdc4) = 0x26e800;
  *(undefined4 *)(param_1 + 0xdc8) = 0x22000;
  sub_08008BEC(7);
  sub_0800393C(&DAT_085d78f8,(DAT_0202fa10 - 0xa0) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7904,(DAT_0202f810 - 0xe) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7b8c,(DAT_0202fa52 - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7b98,(DAT_0202f852 - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7ba0,(DAT_0202fa54 - 0x219) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7bac,(DAT_0202f854 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d7bb4,(DAT_0202fa56 - 0x241) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7bc0,(DAT_0202f856 - 6) * 0x20 + 0x200);
  sub_08034868(puVar3,0x26e800,0x22000);
  uVar1 = sub_080712D8(puVar3,0x269700,0x22000);
  *(undefined4 *)(param_1 + 0xdd0) = uVar1;
  uVar1 = sub_080712D8(puVar3,0x26cd00,0x22000);
  *(undefined4 *)(param_1 + 0xdd4) = uVar1;
  uVar1 = sub_080712D8(puVar3,0x270300,0x22000);
  *(undefined4 *)(param_1 + 0xdd8) = uVar1;
  uVar1 = sub_080712D8(puVar3,0x273900,0x22000);
  *(undefined4 *)(param_1 + 0xddc) = uVar1;
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  *(byte *)(param_1 + 0xdf9) = ((byte)(uVar2 * 2 >> 0x11) & 0x1f) + 0x30;
  *(undefined *)(param_1 + 0xdfa) = 0;
  *puVar3 = 0;
  *(undefined *)(param_1 + 0xdcd) = 0;
  *(undefined *)(param_1 + 0xdce) = 0;
  *(undefined *)(param_1 + 0xdcf) = 0;
  *(undefined4 *)(param_1 + 0xdec) = 0;
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  *(undefined4 *)(param_1 + 0xdf4) = DAT_02002464;
  *(undefined *)(param_1 + 0xdf8) = 0;
  *(undefined *)(param_1 + 0xdfb) = 0;
  sub_08004694(0xbd);
  return in_lr;
}

