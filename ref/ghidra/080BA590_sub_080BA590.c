// sub_080BA590 at 0x080BA590 (thumb)

undefined4 sub_080BA590(int param_1)

{
  undefined4 in_lr;
  
  if ((**(byte **)(param_1 + 0x20) < 2) && (*(char *)(param_1 + 0x73) != '\x03')) {
    *(uint *)(param_1 + 0x4c) =
         (uint)*(byte *)(param_1 + 0x12) * 0x1000 + 0xa400 +
         *(int *)(*(byte **)(param_1 + 0x20) + 8);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
    sub_080BA608(param_1);
  }
  return in_lr;
}

