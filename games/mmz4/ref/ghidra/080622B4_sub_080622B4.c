// sub_080622B4 at 0x080622B4 (thumb)

undefined4 sub_080622B4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar1 + -0x2e00;
    sub_08065A40(param_1,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFC8(param_1,CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)),
               (short)*(char *)(param_1 + 0x71),*(char *)(param_1 + 0x72) + 1);
  sub_0801CFF0(param_1);
  iVar1 = (int)*(char *)(param_1 + 0x71);
  sub_08005784(param_1 + 0x74,
               *(int *)(iVar1 * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + iVar1) * 0x18);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

