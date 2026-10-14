// sub_0805BFB8 at 0x0805BFB8 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 sub_0805BFB8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0x10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_0800561C(param_1 + 0x74,&DAT_082aff1c);
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      _DAT_00000090 = 0;
      DAT_00000094 = 0;
      bRam0000000a = bRam0000000a & 0xf8;
      _NotUsed = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)bRam00000009 * 4) + 0xc);
      _PrefetchAbort = 3;
    }
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0x12) = 0x60;
  }
  return in_lr;
}

