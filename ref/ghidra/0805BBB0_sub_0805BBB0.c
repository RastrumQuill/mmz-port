// sub_0805BBB0 at 0x0805BBB0 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0805BBB0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(iVar1 + 0xb8) = *(int *)(DAT_0202286c + 0x4c) - *(int *)(iVar1 + 0x4c);
  if ((*(ushort *)(param_1 + 0x1a) & 1) != 0) {
    if (*(char *)(iVar1 + 0x10) == '\x04') {
      iVar1 = *(int *)(iVar1 + 0x20);
    }
    else {
      if ((byte)(*(char *)(iVar1 + 0xd) - 3U) < 2) {
        return in_lr;
      }
      if (*(char *)(iVar1 + 0xd) == '\b') {
        return in_lr;
      }
    }
    if (*(char *)(iVar1 + 0xc0) == '\0') {
      *(char *)(iVar1 + 0xc0) = '\x01';
      if ((*(char *)(iVar1 + 0x10) != '\x04') && (*(int *)(iVar1 + 0x24) != 0)) {
        *(undefined4 *)(iVar1 + 0x24) = 0;
        bRam0000000a = bRam0000000a & 0xf8;
        _PrefetchAbort = 3;
        _NotUsed = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)bRam00000009 * 4) + 0xc);
        _DAT_00000090 = 0;
        DAT_00000094 = 0;
      }
      *(undefined *)(iVar1 + 0x10) = 1;
      *(undefined *)(iVar1 + 0xd) = 7;
      *(undefined *)(iVar1 + 0xe) = 0;
      sub_080033F0(iVar1 + 0x6c,8);
      sub_08003458(iVar1 + 0x6c);
      *(undefined *)(iVar1 + 0x46) =
           *(undefined *)
            (*(char *)(iVar1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(iVar1 + 0x70) * 4 + *(int *)(iVar1 + 0x6c)));
      sub_0800561C(iVar1 + 0x74,&DAT_082aff38);
      sub_0808FF30(iVar1,0 < *(int *)(iVar1 + 0xb8));
    }
  }
  return in_lr;
}

