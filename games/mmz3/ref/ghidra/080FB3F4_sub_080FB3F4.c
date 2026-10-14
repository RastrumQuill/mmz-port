// sub_080FB3F4 at 0x080FB3F4 (thumb)

undefined4 sub_080FB3F4(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  puVar1 = (undefined *)(param_1 + 0xdcc);
  *(undefined4 *)(param_1 + 0xdc4) = 0x16800;
  *(undefined4 *)(param_1 + 0xdc8) = 0x41000;
  sub_08008BEC(9);
  sub_0800393C(&DAT_085d78f8,(DAT_0202fa10 - 0xa0) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7904,(DAT_0202f810 - 0xe) * 0x20 + 0x200);
  DAT_0202fa7a = 0x167;
  DAT_0202f87a = 0;
  sub_0800393C(&DAT_085d7d1c,0xbb60);
  sub_08003E14(&DAT_085d7d28,(DAT_0202f87a - 9) * 0x20 + 0x200);
  DAT_0202fa40 = 0x195;
  DAT_0202f840 = 2;
  sub_0800393C(&DAT_085d7ad8,0xc120);
  sub_08003E14(&DAT_085d7ae4,(DAT_0202f840 - 9) * 0x20 + 0x200);
  DAT_0202fbee = 0x280;
  DAT_0202f9ee = 0;
  sub_0800393C(&DAT_085d8ba4,0xf000);
  sub_08003E14(&DAT_085d8bb0,(DAT_0202f9ee - 5) * 0x20 + 0x200);
  DAT_0202fbf0 = 0x2a7;
  DAT_0202f9f0 = 2;
  sub_0800393C(&DAT_085d8bb8,0xf000);
  sub_08003E14(&DAT_085d8bc4,(DAT_0202f9f0 - 6) * 0x20 + 0x200);
  DAT_0202fbf2 = 0x2d8;
  DAT_0202f9f2 = 2;
  sub_0800393C(&DAT_085d8bcc,0xf000);
  sub_08003E14(&DAT_085d8bd8,(DAT_0202f9f2 - 7) * 0x20 + 0x200);
  DAT_0202fbf4 = 0x2ec;
  DAT_0202f9f4 = 5;
  sub_0800393C(&DAT_085d8be0,0xf000);
  sub_08003E14(&DAT_085d8bec,(DAT_0202f9f4 - 8) * 0x20 + 0x200);
  uVar2 = sub_0803610C(puVar1,0x16800,0x3dc00);
  *(undefined4 *)(param_1 + 0xdd0) = uVar2;
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  uVar2 = sub_08099AAC(puVar1,uVar3 * 2 >> 0x11 & 1);
  *(undefined4 *)(param_1 + 0xdd8) = uVar2;
  *(undefined2 *)(param_1 + 0xde0) = 0x3c;
  *(undefined2 *)(param_1 + 0xde2) = 0x3c;
  *(undefined2 *)(param_1 + 0xde4) = 0xb4;
  *(undefined2 *)(param_1 + 0xde6) = 0xb4;
  *(undefined4 *)(param_1 + 0xdec) = 0x708;
  *(undefined *)(param_1 + 0xdfd) = 0;
  *(undefined4 *)(param_1 + 0xde8) = 0;
  *(undefined *)(param_1 + 0xe01) = 0;
  *(undefined *)(param_1 + 0xdfe) = 0;
  *(undefined *)(param_1 + 0xe00) = 0;
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  *(undefined4 *)(param_1 + 0xdf4) = 0;
  *(undefined4 *)(param_1 + 0xdf8) = DAT_02002468;
  *puVar1 = 0;
  *(undefined *)(param_1 + 0xdcd) = 0;
  *(undefined *)(param_1 + 0xdce) = 0;
  *(undefined *)(param_1 + 0xdcf) = 0;
  *(undefined *)(param_1 + 0xdfc) = 0;
  sub_08004694(0xb6);
  sub_0800471C(0x32);
  return in_lr;
}

