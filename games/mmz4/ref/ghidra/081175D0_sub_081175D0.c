// sub_081175D0 at 0x081175D0 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_081175D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x63a8);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined *)(param_1 + 0xdf2) = *(undefined *)(iVar2 + 0xc0);
  *(undefined *)(param_1 + 0xdf3) = *(undefined *)(iVar2 + 0xc1);
  *(undefined *)(param_1 + 0xdf4) = *(undefined *)(iVar2 + 0xc2);
  *(char *)(param_1 + 0xdf6) =
       *(char *)(iVar2 + 0xf3) + *(char *)(iVar2 + 0xf2) + *(char *)(iVar2 + 0xf1);
  *(undefined *)(param_1 + 0xe06) = DAT_0202e8f0;
  *(undefined *)(param_1 + 0xe07) = DAT_0202e8f1;
  *(undefined *)(param_1 + 0xdf5) = *(undefined *)(iVar2 + 0xdf);
  *(byte *)(param_1 + 0xdf8) = 0;
  sub_081179B8(param_1);
  DAT_02000a00 = DAT_02000a00 & 0xf0f8 | 0x1300;
  DAT_02000a06 = 0x4206;
  _DAT_02000a10 = 0;
  sub_08001D30(&DAT_08b6c1a4,0x4000);
  sub_08002208(&DAT_08b6c1b0,0);
  sub_08128884(param_1,*(undefined4 *)(&DAT_08885dac + (uint)*(byte *)(param_1 + 0xdf8) * 4));
  *(undefined *)(param_1 + 2) = 1;
  uVar1 = sub_0810A59C(param_1,0,0);
  *(undefined4 *)(param_1 + 0xdec) = uVar1;
  sub_0800249C(0x12,0);
  *(undefined *)(param_1 + 1) = 1;
  sub_081176FC(param_1);
  return in_lr;
}

