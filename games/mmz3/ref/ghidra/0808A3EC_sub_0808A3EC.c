// sub_0808A3EC at 0x0808A3EC (thumb)

undefined4 sub_0808A3EC(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (0x40 < bVar1) {
      *(undefined *)(param_1 + 0xf) = 1;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  else if (2 < *(byte *)(*(int *)(param_1 + 0x28) + 0xd)) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

