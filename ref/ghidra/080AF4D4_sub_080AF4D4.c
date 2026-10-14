// sub_080AF4D4 at 0x080AF4D4 (thumb)

undefined4 sub_080AF4D4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0809C6C4();
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  iVar1 = *(int *)(param_1 + 0x4c) + 0x800;
  *(int *)(param_1 + 0x4c) = iVar1;
  uVar2 = sub_08008360(iVar1,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080AF530(param_1);
  return in_lr;
}

