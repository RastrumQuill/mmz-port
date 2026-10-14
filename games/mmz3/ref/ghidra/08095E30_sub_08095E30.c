// sub_08095E30 at 0x08095E30 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_08095E30(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar1 + 0xb4) = *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(iVar1 + 0x54);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    if (*(char *)(iVar1 + 0x10) == '\x04') {
      iVar1 = *(int *)(iVar1 + 0x28);
    }
    else {
      if ((byte)(*(char *)(iVar1 + 0xd) - 3U) < 2) {
        return in_lr;
      }
      if (*(char *)(iVar1 + 0xd) == '\b') {
        return in_lr;
      }
    }
    if (*(char *)(iVar1 + 0xbc) == '\0') {
      *(char *)(iVar1 + 0xbc) = '\x01';
      if ((*(char *)(iVar1 + 0x10) != '\x04') && (*(int *)(iVar1 + 0x2c) != 0)) {
        *(undefined4 *)(iVar1 + 0x2c) = 0;
        bRam0000000a = bRam0000000a & 0xf8;
        _PrefetchAbort = 3;
        _NotUsed = *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)bRam00000009 * 4) + 0xc);
        _DAT_0000008c = 0;
        _DAT_00000090 = 0;
        DAT_00000094 = 0;
      }
      *(undefined *)(iVar1 + 0x10) = 1;
      *(undefined *)(iVar1 + 0xd) = 7;
      *(undefined *)(iVar1 + 0xe) = 0;
      sub_08017700(iVar1,0xdb08);
      sub_080177F4(iVar1);
      if (*(int *)(iVar1 + 0xb8) == 0) {
        sub_08007390(iVar1 + 0x74,&DAT_08366884);
      }
      else {
        sub_08007390(iVar1 + 0x74,&DAT_08366974);
      }
      sub_080C6400(iVar1,0 < *(int *)(iVar1 + 0xb4));
    }
  }
  return in_lr;
}

