// sub_08015F80 at 0x08015F80 (thumb)

undefined4 sub_08015F80(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  bVar1 = *(byte *)(*(char *)(param_1 + 0x71) * 4 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x46) = bVar1;
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x1c) = 0xff;
  }
  else {
    FUN_080c88ec(&DAT_082a7fb4,&DAT_030019a0,8);
    bVar1 = *(byte *)((uint)bVar1 * 8 + (&DAT_08540000)[*(int *)(param_1 + 0xb8)] + 5);
    if ((uint)bVar1 != (uint)*(ushort *)(param_1 + 0x1c)) {
      sub_08001574((undefined *)
                   ((int)(&DAT_08320000 + *(int *)(param_1 + 0xb8) * 4) +
                   (uint)bVar1 * 0xc + *(int *)(&DAT_08320000 + *(int *)(param_1 + 0xb8) * 4)),
                   0x10000);
      *(ushort *)(param_1 + 0x1c) = (ushort)bVar1;
    }
  }
  return in_lr;
}

