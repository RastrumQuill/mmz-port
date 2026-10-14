// sub_08077A54 at 0x08077A54 (thumb)

undefined4 sub_08077A54(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    iVar4 = *(int *)(param_1 + 0x58) + 0x20;
    *(int *)(param_1 + 0x58) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x58) = 0x700;
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    bVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    puVar5 = (uint *)(param_1 + 0x90);
    if (((*puVar5 & 0x10001) == 0) && ((*(byte *)(param_1 + 0x94) & 2) == 0)) {
      cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    if ((*(ushort *)puVar5 & 0x244) == 0) {
      if ((bVar2 & 0x80) != 0) {
        return in_lr;
      }
      if (bVar2 == 0) {
        return in_lr;
      }
    }
    *puVar5 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0808827C(2,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return in_lr;
}

