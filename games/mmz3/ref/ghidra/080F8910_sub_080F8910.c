// sub_080F8910 at 0x080F8910 (thumb)

undefined4 sub_080F8910(int param_1)

{
  undefined4 in_lr;
  
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_03002ec8 = 0;
  sub_08003F54();
  DAT_02002400 = 0;
  DAT_02002410 = 0;
  DAT_0200241e = 0xff;
  DAT_02002420 = 0;
  DAT_03002ac0 = 0;
  DAT_03002ec2 = 0;
  DAT_03002ec1 = 0;
  DAT_03002ec0 = 0;
  DAT_020023c0 = DAT_020023c0 & 0xf0f8 | 0x100;
  *(undefined4 *)(param_1 + 0x1ed8) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1edc) = 0;
  sub_08004818(param_1 + 0xdb8,param_1 + 0xdc4,0,0);
  sub_08004F90(param_1 + 0x9a0);
  sub_08004FC8(param_1 + 0x9a0,param_1 + 0xdb8);
  sub_08007200();
  sub_08016F4C();
  DAT_0202f608 = (uint)*(ushort *)(param_1 + 0x6260);
  DAT_0202f5b4 = 0xffffffff;
  DAT_0202f5c0 = *(undefined4 *)(param_1 + 0x64ac);
  DAT_0202f604 = (undefined4 *)(param_1 + 0x1ed8);
  sub_080257B0(param_1 + 0x810,&DAT_02037fa0,1);
  sub_08036E68(param_1 + 0x838,&DAT_02039310,0x18);
  sub_08063584(param_1 + 0x888,&DAT_03004b80,0x12);
  sub_0809C2DC(param_1 + 0x8b0,&DAT_03003920,0x18);
  sub_080B23AC(param_1 + 0x8d8,&DAT_03005950,0x40);
  sub_080C98A8(param_1 + 0x900,&DAT_0203a930,0x16);
  sub_080E0448(param_1 + 0x928,&DAT_02038230,10);
  sub_080E9BB4(&DAT_02030eb0);
  DAT_03002e7c = 0xffffffff;
  DAT_03002e78 = 0xffffffff;
  DAT_03002e74 = 0xffffffff;
  DAT_03002e70 = 0xffffffff;
  DAT_03002e6c = 0xffffffff;
  DAT_03002e68 = 0xffffffff;
  DAT_03002e64 = 0xffffffff;
  DAT_03002e60 = 0xffffffff;
  sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0838c19c + (uint)*(byte *)(param_1 + 1) * 4));
  *(undefined2 *)(param_1 + 4) = 0;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  return in_lr;
}

