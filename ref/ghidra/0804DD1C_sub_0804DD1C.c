// sub_0804DD1C at 0x0804DD1C (thumb)

undefined4 sub_0804DD1C(int param_1)

{
  uint *puVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    sub_080033F0(param_1 + 0x6c,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc);
  puVar1 = (uint *)(param_1 + 0xc0);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (short)(&DAT_080c8e24)[*puVar1 >> 8] * 0x2d;
  *puVar1 = *puVar1 + 0x200 & 0xffff;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

