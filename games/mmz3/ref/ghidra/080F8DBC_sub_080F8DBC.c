// sub_080F8DBC at 0x080F8DBC (thumb)

undefined4 sub_080F8DBC(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  puVar5 = (undefined2 *)(param_1 + 0xdcc);
  *(undefined4 *)(param_1 + 0xdc4) = 0x2e6800;
  *(undefined4 *)(param_1 + 0xdc8) = 0xf000;
  sub_08008BEC(3);
  sub_0800393C(&DAT_085d7e84,(DAT_0202fa9e - 0x2c4) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d7e90,(DAT_0202f89e - 5) * 0x20 + 0x200);
  DAT_0202fb4c = 900;
  DAT_0202f94c = 8;
  sub_0800393C(&DAT_085d8550,0x13080);
  sub_08003E14(&DAT_085d855c,(DAT_0202f94c - 4) * 0x20 + 0x200);
  DAT_0202fa10 = 0xf0;
  DAT_0202f810 = 0xe;
  sub_0800393C(&DAT_085d78f8,0x10a00);
  sub_08003E14(&DAT_085d7904,(DAT_0202f810 - 0xe) * 0x20 + 0x200);
  local_28 = 0x2e6800;
  local_24 = 0xb400;
  DAT_0202f5c0 = sub_080365CC(puVar5,&local_28,0);
  *(undefined4 *)(param_1 + 0xde0) = DAT_0202f5c0;
  iVar4 = 0x1000;
  uVar2 = 0;
  do {
    uVar3 = uVar2 + 1;
    local_28 = 0x2ed800 - iVar4;
    local_24 = 0x12800;
    sub_080C7D84(puVar5,&local_28,0,param_1 + 0xdd8,uVar2 & 0xff);
    iVar4 = iVar4 + 0x1000;
    uVar2 = uVar3;
  } while ((int)uVar3 < 3);
  *(undefined *)(param_1 + 0xdd8) = 3;
  *puVar5 = 0;
  *(undefined2 *)(param_1 + 6) = 0x60;
  DAT_0203710c = DAT_0203710c * 0x41c64e6d + 0x3039;
  uVar1 = sub_080FE4D8(DAT_0203710c >> 0x10,6);
  *(undefined2 *)(param_1 + 8) = uVar1;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xdd0) = 0;
  *(undefined2 *)(param_1 + 0xdd2) = 0;
  *(undefined2 *)(param_1 + 0xdd4) = 0;
  *(undefined2 *)(param_1 + 0xdd6) = 0;
  *(undefined4 *)(param_1 + 0xde4) = 0;
  *(undefined4 *)(param_1 + 0xde8) = 0;
  *(undefined4 *)(param_1 + 0xdfc) = 0;
  *(undefined4 *)(param_1 + 0xdf8) = 0;
  *(undefined2 *)(param_1 + 0xe04) = 0;
  *(undefined4 *)(param_1 + 0xe00) = 0x1c0;
  *(undefined *)(param_1 + 0xdd9) = 0;
  *(undefined2 *)(param_1 + 0xdda) = 0;
  *(undefined4 *)(param_1 + 0xdec) = 0;
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  *(undefined2 *)(param_1 + 0xdf4) = 0;
  *(undefined2 *)(param_1 + 0xdf6) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xe08) = DAT_02002454;
  *(undefined2 *)(param_1 + 0xe06) = 0;
  sub_08004694(0xad);
  return in_lr;
}

