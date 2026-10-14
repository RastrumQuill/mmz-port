// sub_080399F0 at 0x080399F0 (thumb)

undefined4 sub_080399F0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  uVar4 = (uint)*(byte *)(param_1 + 100);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined *)(param_1 + 0x13) = 0x20;
  *(undefined *)(param_1 + 0x66) = 0;
  *(undefined *)(param_1 + 0x67) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0xffff;
  *(undefined *)(param_1 + 0x6a) = 0;
  *(ushort *)(param_1 + 0xbc) = *(ushort *)(iVar1 + 0x218) & 0x100;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  uVar3 = *(undefined4 *)(&DAT_08336504 + uVar4 * 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,uVar3,param_1 + 0x54,0);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8039ff5;
  iVar2 = (char)(&DAT_08335a08)[*(byte *)(iVar1 + 0x1fc)] + 4;
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  *(char *)(param_1 + 0x6b) = (char)iVar2;
  sub_0803A214(param_1,uVar4);
  sub_08012580(param_1);
  sub_080127D0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_083363d4 + uVar4 * 2));
  uVar3 = *(undefined4 *)(iVar1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x2c4);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_08039B60(param_1);
  return in_lr;
}

