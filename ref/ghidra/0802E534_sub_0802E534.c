// sub_0802E534 at 0x0802E534 (thumb)

undefined4 sub_0802E534(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((DAT_02022b64 & 8) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x20) + 0x13) == '\0') {
      cVar1 = (&DAT_083a8013)
              [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
               (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (*(byte *)(*(int *)(param_1 + 0x20) + 0xf) < 2) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar2 = *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

