// sub_080AB3B8 at 0x080AB3B8 (thumb)

undefined4 sub_080AB3B8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_0809C980();
  uVar1 = *(undefined4 *)(iVar2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (1 < *(byte *)(iVar2 + 0xd)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

