// sub_08025CE8 at 0x08025CE8 (thumb)

undefined4 sub_08025CE8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x1e);
  sub_08003458(param_1 + 0x6c);
  bVar2 = *(byte *)(*(char *)(param_1 + 0x71) * 4 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x46) = bVar2;
  bVar2 = *(byte *)((uint)bVar2 * 8 + (&DAT_0854c000)[*(int *)(param_1 + 0xb8)] + 5);
  if ((uint)bVar2 != (uint)*(ushort *)(param_1 + 0x1c)) {
    puVar3 = (undefined *)
             ((int)(&DAT_08372000 + *(int *)(param_1 + 0xb8) * 4) +
             (uint)bVar2 * 0xc + *(int *)(&DAT_08372000 + *(int *)(param_1 + 0xb8) * 4));
    if (cVar1 == '\x01') {
      sub_08001574(puVar3,0x10000);
    }
    else {
      sub_08001574(puVar3,0x11800);
    }
    *(ushort *)(param_1 + 0x1c) = (ushort)bVar2;
  }
  return in_lr;
}

