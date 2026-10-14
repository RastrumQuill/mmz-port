// sub_0810FD84 at 0x0810FD84 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0810FD84(int param_1)

{
  undefined4 in_lr;
  undefined4 local_2c [2];
  undefined2 local_24;
  
  sub_08001FD4(&DAT_0202f620,(DAT_02000a04 & 0x1f00) << 3,0x580,0x3c0);
  DAT_02000a40 = 0;
  local_24 = 0;
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x1200;
  DAT_02000a06 = 0x206;
  local_2c[0] = 0;
  sub_081284E4(local_2c,&DAT_06001000,0x1000200);
  _DAT_02000a10 = 0;
  sub_08003384(param_1 + 0x14);
  sub_08002C0C(param_1 + 0x220,(undefined4 *)(param_1 + 0x22c),0,0);
  sub_080033BC(param_1 + 0x14,param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x22c) = 0x7800;
  *(undefined4 *)(param_1 + 0x230) = 0x5000;
  sub_0801C734();
  DAT_0202dc38 = 0;
  *(undefined *)(param_1 + 6) = 1;
  *(undefined *)(param_1 + 7) = (undefined)local_24;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08885be8 + (uint)*(byte *)(param_1 + 5) * 4));
  return in_lr;
}

