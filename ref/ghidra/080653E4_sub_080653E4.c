// sub_080653E4 at 0x080653E4 (thumb)

undefined4 sub_080653E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
  *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0x50) + 0x800;
  if (1 < *(byte *)(iVar1 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

