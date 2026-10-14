// sub_080C04B8 at 0x080C04B8 (thumb)

undefined4 sub_080C04B8(int param_1)

{
  ushort *puVar1;
  undefined4 in_lr;
  sbyte asStack_c [4];
  
  sub_08128B5C(asStack_c,&DAT_081299e8,2);
  if (*(char *)(param_1 + 0xf) == '\0') {
    puVar1 = (ushort *)(*(int *)(param_1 + 0x28) + 0xb4);
    *puVar1 = (ushort)(1 << asStack_c[*(byte *)(param_1 + 0x11)]) | *puVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}

