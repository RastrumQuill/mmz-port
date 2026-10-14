// sub_080B73D8 at 0x080B73D8 (thumb)

undefined4 sub_080B73D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0xbc) = *(int *)(*(int *)(param_1 + 0x20) + 0x4c) + *(int *)(param_1 + 0xc4);
  *(int *)(param_1 + 0xc0) = *(int *)(*(int *)(param_1 + 0x20) + 0x50) + *(int *)(param_1 + 200);
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8368 + (uint)*(byte *)(param_1 + 0xe) * 4));
  uVar1 = sub_080C8B68(*(byte *)(param_1 + 0x12) + 1,0xa0);
  *(char *)(param_1 + 0x12) = (char)uVar1;
  iVar2 = sub_080C8B68(uVar1,0xa0);
  iVar2 = sub_080C8AD0(iVar2 << 8,0xa0);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[iVar2] * 0xc;
  iVar2 = sub_080C8B68(uVar1,0x50);
  iVar2 = sub_080C8AD0(iVar2 << 8,0x50);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + (short)(&DAT_080c8e24)[iVar2] * -4;
  return in_lr;
}

