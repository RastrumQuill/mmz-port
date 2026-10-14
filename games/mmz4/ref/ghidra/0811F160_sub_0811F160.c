// sub_0811F160 at 0x0811F160 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0811F160(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xdce) = 0;
  *(undefined *)(param_1 + 0xdd1) = 0;
  *(undefined *)(param_1 + 0xddd) = 0;
  *(undefined *)(param_1 + 0xddf) = 0;
  *(undefined *)(param_1 + 0xde0) = 0;
  sub_0811F480(param_1);
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x1300;
  DAT_02000a06 = 0x4206;
  _DAT_02000a10 = 0;
  sub_08001D30(&DAT_08b6c1e0,0x4000);
  sub_08002208(&DAT_08b6c1ec,0);
  sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x26,0,0);
  sub_08001D30(&DAT_08c4453c,(DAT_0202e0c6 - 0x380) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44548,(DAT_0202dec6 - 0xb) * 0x20 + 0x200);
  sub_0810C130(param_1,0,0);
  sub_0810C130(param_1,1,0);
  sub_0810C130(param_1,1,1);
  sub_0810C3C0(param_1,0);
  sub_0810C3C0(param_1,1);
  sub_0810C3C0(param_1,2);
  sub_0810C3C0(param_1,3);
  sub_0800249C(0x2f,0);
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  sub_08002B10(0x95);
  *(undefined *)(param_1 + 1) = 1;
  sub_0811F2A4(param_1);
  return in_lr;
}

