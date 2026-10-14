// sub_08081EA0 at 0x08081EA0 (thumb)

undefined4 sub_08081EA0(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(char *)(param_1 + 0xb8) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc))) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xb8) = '\x01';
    }
  }
  puVar2 = (uint *)(param_1 + 0x90);
  if ((*(char *)(param_1 + 0x10) == '\x01') && (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc))) {
    *puVar2 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8;
    *puVar2 = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b2928 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b2940 + (uint)*(byte *)(param_1 + 0xd) * 4));
  if (((*puVar2 & 0x10001) == 0) && ((*(byte *)(param_1 + 0x94) & 2) == 0)) {
    cVar1 = (&DAT_02022fe0)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  else {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
    *(undefined *)(param_1 + 0x1e) = 0xd;
  }
  return in_lr;
}

