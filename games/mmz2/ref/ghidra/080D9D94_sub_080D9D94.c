// sub_080D9D94 at 0x080D9D94 (thumb)

undefined4 sub_080D9D94(int param_1)

{
  undefined *puVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if ((DAT_0202ebb4 & 2) == 0) {
    puVar1 = &DAT_0834b994;
  }
  else {
    puVar1 = &DAT_0834b96c;
  }
  *(undefined4 *)(param_1 + 0x58) =
       *(undefined4 *)(puVar1 + (uint)*(byte *)(param_1 + 0x11) * 8 + 4);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080D9E88(param_1);
  return in_lr;
}

