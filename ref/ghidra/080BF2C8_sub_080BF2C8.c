// sub_080BF2C8 at 0x080BF2C8 (thumb)

undefined4 sub_080BF2C8(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  DAT_03001ba2 = 0x20;
  DAT_03001ba1 = 0x20;
  DAT_03001ba0 = 0x20;
  DAT_02004f70 = 0;
  DAT_02004f80 = 0;
  DAT_02004f8e = 0xff;
  DAT_02004f90 = 0;
  DAT_030017a0 = 0;
  DAT_02004f30 = DAT_02004f30 & 0xf0f8 | 0x100;
  *(undefined4 *)(param_1 + 0x1aec) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1af0) = 0;
  sub_08003358(param_1 + 0x99c);
  sub_0800554C();
  DAT_0202285c = 0;
  DAT_02022884 = 0;
  DAT_02022894 = 0;
  DAT_02022888 = 0;
  DAT_02022864 = 0;
  DAT_02022880 = 0;
  DAT_02022874 = 0;
  DAT_02022868 = 0;
  DAT_02022878 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x6e94);
  DAT_02022890 = *puVar1;
  DAT_02022860 = 0xffffffff;
  DAT_0202286c = &DAT_0202b5a0;
  DAT_0202288c = (undefined4 *)(param_1 + 0x1aec);
  sub_08015DAC(param_1 + 0x80c,&DAT_0202b5a0,2);
  sub_08025ABC(param_1 + 0x834,&DAT_03003280,10);
  sub_0802960C(param_1 + 0x85c,&DAT_0202c810,5);
  sub_08048950(param_1 + 0x884,&DAT_03004980,0x14);
  sub_08076470(param_1 + 0x8ac,&DAT_03001fc0,0x18);
  sub_0808803C(param_1 + 0x8d4,&DAT_03005920,0x40);
  sub_0809C630(param_1 + 0x8fc,&DAT_03003b20,0x12);
  sub_080B30AC(param_1 + 0x924,&DAT_0202ba00,8);
  sub_080B3CE0(param_1 + 0x94c,&DAT_0202a6e0,0x10);
  sub_080158C0();
  sub_080BC454(&DAT_020236ec);
  sub_080BC7A8(&DAT_020236ec);
  sub_0800F228(*(undefined *)puVar1,param_1 + 0x6ea4);
  sub_0800F4C0();
  sub_0801C7EC(&DAT_0202b5a0,param_1 + 0x6f24);
  sub_0800FA0C(*(undefined *)puVar1,param_1 + 0x99c);
  DAT_03001b5c = 0xffffffff;
  DAT_03001b58 = 0xffffffff;
  DAT_03001b54 = 0xffffffff;
  DAT_03001b50 = 0xffffffff;
  DAT_03001b4c = 0xffffffff;
  DAT_03001b48 = 0xffffffff;
  DAT_03001b44 = 0xffffffff;
  DAT_03001b40 = 0xffffffff;
  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
  return in_lr;
}

