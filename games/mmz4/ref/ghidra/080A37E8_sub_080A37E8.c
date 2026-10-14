// sub_080A37E8 at 0x080A37E8 (thumb)

undefined4 sub_080A37E8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8715);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x12) + '\x1a';
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885ea18,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x80a41d5;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  uVar1 = (uint)*(byte *)(param_1 + 0x11) * 0x40 + 0x140;
  *(uint *)(param_1 + 0x5c) = uVar1;
  if (0x300 < uVar1) {
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5c);
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x10) & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080A38C8(param_1);
  return in_lr;
}

