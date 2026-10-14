// sub_08122798 at 0x08122798 (thumb)

undefined4 sub_08122798(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x625e) = 0;
  DAT_020359bc = &DAT_02036600;
  DAT_020359b8 = &DAT_02036600;
  sub_08038114(param_1 + 0x6348,*(undefined *)(param_1 + 1));
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
  DAT_03002ec2 = 0;
  DAT_03002ec1 = 0;
  DAT_03002ec0 = 0;
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x100;
  puVar1 = (undefined4 *)(param_1 + 0x1ed8);
  *puVar1 = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1edc) = 0;
  sub_08002C0C(param_1 + 0xdb8,param_1 + 0xdc4,0,0);
  sub_08003384(param_1 + 0x9a0);
  sub_080033BC(param_1 + 0x9a0,param_1 + 0xdb8);
  sub_080055F4();
  sub_0801C734();
  DAT_0202dc38 = (uint)*(ushort *)(param_1 + 0x6260);
  DAT_0202dbe4 = 0xffffffff;
  DAT_0202dbf0 = *(undefined4 *)(param_1 + 0x63a8);
  DAT_0202dc34 = puVar1;
  sub_0802B3E8(param_1 + 0x810,&DAT_02036600,1,puVar1,(undefined4 *)(param_1 + 0x63a8));
  sub_0803A738(param_1 + 0x838,&DAT_020379b0,0x18);
  sub_0807F794(param_1 + 0x888,&DAT_03004b80,0x12);
  sub_080BCF18(param_1 + 0x8b0,&DAT_03003920,0x18);
  sub_080D0784(param_1 + 0x8d8,&DAT_03005950,0x40);
  sub_080E8EF0(param_1 + 0x900,&DAT_02038fd0,0x16);
  sub_08107CDC(param_1 + 0x928,&DAT_020368d0,10);
  sub_0810D828(&DAT_0202f620);
  sub_0810DE38(&DAT_0202f620);
  DAT_03002e7c = 0xffffffff;
  DAT_03002e78 = 0xffffffff;
  DAT_03002e74 = 0xffffffff;
  DAT_03002e70 = 0xffffffff;
  DAT_03002e6c = 0xffffffff;
  DAT_03002e68 = 0xffffffff;
  DAT_03002e64 = 0xffffffff;
  DAT_03002e60 = 0xffffffff;
  DAT_02000aa8 = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08886500 + (uint)*(byte *)(param_1 + 1) * 4));
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 1;
  *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  return in_lr;
}

