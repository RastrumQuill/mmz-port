// sub_0805D7A4 at 0x0805D7A4 (thumb)

undefined4 sub_0805D7A4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xd) != '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_0805D7EC(param_1);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

