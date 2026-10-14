// sub_08066AE8 at 0x08066AE8 (thumb)

undefined4 sub_08066AE8(int param_1)

{
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

