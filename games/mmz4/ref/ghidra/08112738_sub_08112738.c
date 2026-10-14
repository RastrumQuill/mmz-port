// sub_08112738 at 0x08112738 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08112738(int param_1)

{
  undefined4 in_lr;
  
  DAT_03002ec2 = 0x20;
  DAT_03002ec1 = 0x20;
  DAT_03002ec0 = 0x20;
  DAT_03002ec8 = 0;
  sub_08002348();
  DAT_02000a40 = 0;
  DAT_02000a50 = 0;
  DAT_02000a5e = 0xff;
  DAT_02000a60 = 0;
  DAT_03002ac0 = 0;
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x100;
  DAT_02000a04 = 0x4008;
  _DAT_02000a0c = 0;
  sub_08001FD4(&DAT_0202f620,0,0x580,0x3c0);
  sub_0810CE60();
  *(undefined4 *)(param_1 + 0x1ed8) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1edc) = 0;
  sub_08003384(param_1 + 0x9a0);
  sub_080055F4();
  sub_0801C734();
  DAT_0202dc38 = (uint)*(ushort *)(param_1 + 0x6260);
  DAT_0202dbe4 = 0xffffffff;
  DAT_0202dbf0 = *(undefined4 *)(param_1 + 0x63a8);
  DAT_0202dc34 = (undefined4 *)(param_1 + 0x1ed8);
  sub_0802B3E8(param_1 + 0x810,&DAT_02036600,1);
  sub_0803A738(param_1 + 0x838,&DAT_020379b0,0x18);
  sub_08050338(param_1 + 0x860,&DAT_0203a0b0,5);
  sub_0807F794(param_1 + 0x888,&DAT_03004b80,0x12);
  sub_080BCF18(param_1 + 0x8b0,&DAT_03003920,0x18);
  sub_080D0784(param_1 + 0x8d8,&DAT_03005950,0x40);
  sub_080E8EF0(param_1 + 0x900,&DAT_02038fd0,0x16);
  sub_08107CDC(param_1 + 0x928,&DAT_020368d0,10);
  sub_08108A84(param_1 + 0x950,&DAT_020359c0,0x10);
  sub_0802ACF0();
  sub_0810D828(&DAT_0202f620);
  sub_0810DE38(&DAT_0202f620);
  sub_080382BC(*(undefined4 *)(param_1 + 0x63a8),param_1 + 0x6348);
  sub_0801F224(param_1 + 0x9a0);
  DAT_0202e8c4 = DAT_0202e8c4 | 0xc0;
  DAT_0202e8d6 = 0;
  *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
  return in_lr;
}

