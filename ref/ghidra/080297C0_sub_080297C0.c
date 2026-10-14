// sub_080297C0 at 0x080297C0 (thumb)

undefined4 sub_080297C0(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 9);
  sub_08003458(param_1 + 0x6c);
  bVar2 = *(byte *)(*(char *)(param_1 + 0x71) * 4 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x46) = bVar2;
  bVar2 = *(byte *)((uint)bVar2 * 8 + *(int *)(&DAT_08552000 + (uint)bVar1 * 4) + 5);
  if ((uint)bVar2 != (uint)*(ushort *)(param_1 + 0x1c)) {
    iVar4 = (int)(&DAT_083a8000 + bVar1) + (uint)bVar2 * 0x14 + (&DAT_083a8000)[bVar1];
    sub_08001574(iVar4,0x10000);
    sub_0800179C(iVar4 + 0xc,0x200);
    *(ushort *)(param_1 + 0x42) = *(ushort *)(iVar4 + 6) >> 6;
    cVar3 = *(char *)(iVar4 + 0x13);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar3 << 4;
    *(ushort *)(param_1 + 0x1c) = (ushort)bVar2;
    *(char *)(param_1 + 0x1e) = cVar3;
  }
  return in_lr;
}

