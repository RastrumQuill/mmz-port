// sub_080F9E6C at 0x080F9E6C (thumb)

undefined4 sub_080F9E6C(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 in_lr;
  int local_2c;
  undefined4 local_28;
  int local_24;
  
  puVar4 = (undefined2 *)(param_1 + 0xdcc);
  *(undefined4 *)(param_1 + 0xdc4) = 0x16800;
  *(undefined4 *)(param_1 + 0xdc8) = 0xf000;
  local_24 = param_1;
  sub_08008BEC(4);
  sub_0800393C(&DAT_085d7a10,(DAT_0202fa2c - 0x200) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7a1c,(DAT_0202f82c - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8014,(DAT_0202fac6 - 0x240) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8020,(DAT_0202f8c6 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8028,(DAT_0202fac8 - 0x2df) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8034,(DAT_0202f8c8 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8064,(DAT_0202face - 0x39b) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8070,(DAT_0202f8ce - 5) * 0x20 + 0x200);
  DAT_0202fa2c = 0;
  DAT_0202f82c = 7;
  sub_0800393C(&DAT_085d7a10,0xc000);
  sub_08003E14(&DAT_085d7a1c,(DAT_0202f82c - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8c08,(DAT_0202fbf8 - 0x3ae) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8c14,(DAT_0202f9f8 - 6) * 0x20 + 0x200);
  sub_080C7C20(&local_2c,0);
  DAT_0202fa10 = 0x172;
  DAT_0202f810 = 0xe;
  sub_0800393C(&DAT_085d78f8,0x11a40);
  sub_08003E14(&DAT_085d7904,(DAT_0202f810 - 0xe) * 0x20 + 0x200);
  DAT_0202fb4e = 0x1e0;
  DAT_0202f94e = 9;
  sub_0800393C(&DAT_085d8564,0xfc00);
  sub_08003E14(&DAT_085d8570,(DAT_0202f94e - 4) * 0x20 + 0x200);
  local_2c = 0x11800;
  local_28 = 0xf600;
  sub_08035AFC(puVar4,&local_2c,0);
  iVar3 = 0x1000;
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    local_2c = 0x1d800 - iVar3;
    local_28 = 0x12800;
    sub_080C7D84(puVar4,&local_2c,2,param_1 + 0xdd8,uVar1 & 0xff);
    iVar3 = iVar3 + 0x1000;
    uVar1 = uVar2;
  } while ((int)uVar2 < 3);
  *(undefined *)(param_1 + 0xdd8) = 3;
  *puVar4 = 0;
  *(undefined2 *)(param_1 + 0xdce) = 0x78;
  *(undefined4 *)(param_1 + 0xdec) = 0;
  *(undefined2 *)(param_1 + 0xdd0) = 0;
  *(undefined2 *)(param_1 + 0xdd2) = 0;
  *(undefined4 *)(param_1 + 0xde4) = 0;
  *(undefined4 *)(param_1 + 0xde8) = 0;
  *(undefined4 *)(param_1 + 0xdf0) = DAT_0200245c;
  *(undefined2 *)(param_1 + 0xdda) = 0;
  sub_08004694(0xb3);
  *(undefined2 *)(local_24 + 4) = 0;
  return in_lr;
}

