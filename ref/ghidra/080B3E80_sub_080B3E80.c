// sub_080B3E80 at 0x080B3E80 (thumb)

undefined4 sub_080B3E80(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  bVar1 = *(byte *)(*(char *)(param_1 + 0x71) * 4 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x46) = bVar1;
  bVar1 = *(byte *)((uint)bVar1 * 8 + (&DAT_08593000)[*(ushort *)(param_1 + 0xb8)] + 5);
  if ((uint)bVar1 != (uint)*(ushort *)(param_1 + 0xba)) {
    iVar4 = (int)(&DAT_08530000 + *(ushort *)(param_1 + 0xb8)) +
            (uint)bVar1 * 0x14 + (&DAT_08530000)[*(ushort *)(param_1 + 0xb8)];
    sub_08001574(iVar4,0x10000);
    sub_0800179C(iVar4 + 0xc,0x200);
    uVar3 = *(ushort *)(iVar4 + 6) >> 6 & 0xff;
    *(ushort *)(param_1 + 0x42) = uVar3;
    cVar2 = *(char *)(iVar4 + 0x13);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
    *(ushort *)(param_1 + 0xba) = (ushort)bVar1;
    *(ushort *)(param_1 + 0x1c) = uVar3;
    *(char *)(param_1 + 0x1e) = cVar2;
  }
  return in_lr;
}

