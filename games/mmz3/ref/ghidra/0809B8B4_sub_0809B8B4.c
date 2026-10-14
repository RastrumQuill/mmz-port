// sub_0809B8B4 at 0x0809B8B4 (thumb)

undefined4 sub_0809B8B4(int param_1)

{
  int iVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xe900);
  sub_080177F4(param_1);
  sub_08017BCC(param_1,*(char *)(param_1 + 0x11) + '\x05');
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(uint *)(param_1 + 0x54) = ((uint)*(byte *)(param_1 + 0x10) * 0x20 + 0x18) * 0x100;
  *(undefined4 *)(param_1 + 0x58) = 0;
  puVar2 = (ushort *)(iVar1 + 0xe10);
  *(uint *)(param_1 + 0x60) = (uint)*puVar2;
  *(uint *)(param_1 + 0x5c) = (uint)*puVar2;
  *(undefined *)(param_1 + 0x13) = 0;
  sub_0809B948(param_1);
  return in_lr;
}

