// sub_08065638 at 0x08065638 (thumb)

undefined4 sub_08065638(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x4c);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = sub_08008360(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

