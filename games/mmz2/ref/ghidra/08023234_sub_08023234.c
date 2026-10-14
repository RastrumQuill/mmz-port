// sub_08023234 at 0x08023234 (thumb)

undefined4 sub_08023234(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_083339f8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 0;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  *(undefined *)(param_1 + 0x174) = 0;
  *(undefined *)(param_1 + 0x175) = 0;
  *(undefined *)(param_1 + 0x17a) = 0;
  *(undefined *)(param_1 + 0x17b) = 0;
  *(undefined *)(param_1 + 0x17c) = 0;
  *(undefined *)(param_1 + 0x2b6) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  sub_0801EA94(param_1);
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x29c) = 0;
  sub_080D568C(param_1,0);
  uVar2 = sub_080D62A8(param_1);
  *(undefined4 *)(param_1 + 0x2a4) = uVar2;
  uVar2 = sub_0801EF38(param_1,0,0);
  bVar1 = sub_08022C40(param_1,uVar2);
  *(byte *)(param_1 + 0x18a) = bVar1;
  if (0x59 < bVar1) {
    sub_0801E6AC(0x32);
  }
  *(undefined *)(param_1 + 0x17f) = 0xff;
  *(undefined *)(param_1 + 0x182) = 0;
  *(undefined *)(param_1 + 0x181) = 0;
  *(undefined *)(param_1 + 0x2ba) = 0;
  *(undefined *)(param_1 + 0x2b7) = 0;
  *(undefined *)(param_1 + 0x188) = 0;
  *(undefined *)(param_1 + 0x189) = 0;
  *(undefined *)(param_1 + 0x18c) = 0;
  *(undefined *)(param_1 + 0x18d) = 0;
  *(undefined *)(param_1 + 0x193) = 0;
  *(undefined *)(param_1 + 0x192) = 0;
  sub_0801EAB0(param_1);
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801EEE0(param_1);
  sub_0801F128(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_080AD01C(param_1,0);
  sub_08023420(param_1);
  return in_lr;
}

