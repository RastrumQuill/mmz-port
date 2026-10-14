// sub_0811BD1C at 0x0811BD1C (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0811BD1C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xdce) = 0;
  *(undefined *)(param_1 + 0xdd0) = 0;
  *(undefined *)(param_1 + 0xdd1) = 0;
  *(undefined *)(param_1 + 0xde7) = 0;
  uVar2 = 0;
  do {
    *(undefined *)(param_1 + 0xdd9 + uVar2) = 0xff;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  sub_0811C0C8(param_1);
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x1300;
  DAT_02000a06 = 0x4206;
  _DAT_02000a10 = 0;
  sub_08001D30(&DAT_08b6c1e0,0x4000);
  sub_08002208(&DAT_08b6c1ec,0);
  sub_08001D30(&DAT_08b6c1f4,(DAT_02000a06 & 0xc) * 0x1000);
  sub_08002208(&DAT_08b6c200,0);
  sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x84,0,0);
  sub_08001D30(&DAT_08c4453c,(DAT_0202e0c6 - 0x380) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44548,(DAT_0202dec6 - 0xb) * 0x20 + 0x200);
  sub_0810A6F0(param_1,0,0);
  sub_0810A6F0(param_1,1,0);
  sub_0810A6F0(param_1,1,1);
  bVar1 = 0;
  do {
    sub_0810A6F0(param_1,2,bVar1);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 7);
  sub_0800249C(0x2f,0);
  sub_0800249C(0x31,0);
  sub_0800249C(0x3a,0);
  *(undefined *)(param_1 + 0xde6) = 0x31;
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  *(undefined *)(param_1 + 1) = 1;
  sub_0811BEA4(param_1);
  return in_lr;
}

