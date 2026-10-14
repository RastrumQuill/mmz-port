// sub_081207C0 at 0x081207C0 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_081207C0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  DAT_0202f61c = 0;
  sub_08121F94(param_1);
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x1300;
  DAT_02000a06 = 0x4206;
  _DAT_02000a10 = 0;
  sub_0800249C(0x33,0);
  sub_0800249C(0x79,0);
  sub_08001EA4(&DAT_08b6c1b8,(DAT_02000a06 & 0xc) << 0xc);
  sub_08002208(&DAT_08b6c1c4,0);
  sub_080027B8(param_1 + 0xed8,&DAT_08b2c000,0x23,0,0);
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  *(undefined *)(param_1 + 0xdce) = 0;
  *(undefined *)(param_1 + 0xdd8) = 0;
  *(undefined *)(param_1 + 1) = 1;
  *(undefined *)(param_1 + 3) = 0;
  *(undefined *)(param_1 + 2) = 0;
  sub_081208A0(param_1);
  return in_lr;
}

