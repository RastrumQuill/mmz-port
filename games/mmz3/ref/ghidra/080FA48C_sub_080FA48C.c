// sub_080FA48C at 0x080FA48C (thumb)

undefined4 sub_080FA48C(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  puVar5 = (undefined2 *)(param_1 + 0xdcc);
  *(undefined4 *)(param_1 + 0xdc4) = 0x16800;
  *(undefined4 *)(param_1 + 0xdc8) = 0xf000;
  sub_08008BEC(10);
  DAT_0202fa9e = 0;
  DAT_0202f89e = 7;
  sub_0800393C(&DAT_085d7e84,0xa780);
  sub_08003E14(&DAT_085d7e90,(DAT_0202f89e - 5) * 0x20 + 0x200);
  DAT_0202fbf6 = 200;
  DAT_0202f9f6 = 8;
  sub_0800393C(&DAT_085d8bf4,0xd900);
  sub_08003E14(&DAT_085d8c00,(DAT_0202f9f6 - 7) * 0x20 + 0x200);
  DAT_0202fb52 = 0x1e0;
  DAT_0202f952 = 9;
  sub_0800393C(&DAT_085d858c,0xfc00);
  sub_08003E14(&DAT_085d8598,(DAT_0202f952 - 4) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8640,(DAT_0202fb64 - 0x1ca) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d864c,(DAT_0202f964 - 0xb) * 0x20 + 0x200);
  DAT_0202fa10 = 0xf0;
  DAT_0202f810 = 0xe;
  sub_0800393C(&DAT_085d78f8,0x10a00);
  sub_08003E14(&DAT_085d7904,(DAT_0202f810 - 0xe) * 0x20 + 0x200);
  local_28 = 0x12c00;
  local_24 = 0xf000;
  DAT_0202f5c0 = sub_0803526C(puVar5,&local_28,0);
  *(undefined4 *)(param_1 + 0xde0) = DAT_0202f5c0;
  iVar4 = 0x1000;
  uVar2 = 0;
  do {
    uVar3 = uVar2 + 1;
    local_28 = 0x1d800 - iVar4;
    local_24 = 0x12800;
    iVar1 = sub_080C7D84(puVar5,&local_28,3,param_1 + 0xdd8,uVar2 & 0xff);
    *(int *)(iVar1 + 0x2c) = param_1;
    iVar4 = iVar4 + 0x1000;
    uVar2 = uVar3;
  } while ((int)uVar3 < 3);
  *(undefined *)(param_1 + 0xdd8) = 3;
  *puVar5 = 0;
  *(undefined2 *)(param_1 + 6) = 0x78;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xdd0) = 0;
  *(undefined2 *)(param_1 + 0xdd2) = 0;
  *(undefined4 *)(param_1 + 0xde4) = 0;
  *(undefined4 *)(param_1 + 0xde8) = 0;
  *(undefined4 *)(param_1 + 0xdfc) = 0;
  *(undefined4 *)(param_1 + 0xdf8) = 0;
  *(undefined2 *)(param_1 + 0xdda) = 0;
  *(undefined2 *)(param_1 + 0xe04) = 0;
  *(undefined4 *)(param_1 + 0xe00) = 0x200;
  *(undefined *)(param_1 + 0xdd9) = 0;
  *(undefined4 *)(param_1 + 0xdec) = 0;
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  *(undefined2 *)(param_1 + 0xdf4) = 0;
  *(undefined2 *)(param_1 + 0xdf6) = 0;
  *(undefined4 *)(param_1 + 0xe08) = DAT_02002460;
  *(undefined2 *)(param_1 + 0xe06) = 0;
  sub_08004694(0xb7);
  *(undefined2 *)(param_1 + 4) = 0;
  return in_lr;
}

