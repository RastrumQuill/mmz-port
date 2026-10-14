// sub_08087A60 at 0x08087A60 (thumb)

undefined4 sub_08087A60(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) {
    uVar1 = (uint)*(byte *)(iVar2 + 0x12) + (uint)*(byte *)(param_1 + 0x11);
    if (uVar1 * 0x1000000 + 0xdf000000 >> 0x18 < 0x3f) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xf) = 0;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      if (*(char *)(iVar2 + 0xd) != '\0') {
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        if (*(char *)(param_1 + 0xf) == '\0') {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          sub_080055FC(param_1 + 0x74,&DAT_082b3144,param_1 + 0x4c,0x60);
          *(int *)(param_1 + 0xb4) = param_1;
          *(undefined4 *)(param_1 + 0xb0) = 0;
          *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        }
      }
      *(char *)(param_1 + 0x1f) = (char)uVar1;
      uVar1 = (uVar1 & 0xff) + 0xc0 & 0xff;
      *(int *)(param_1 + 0x4c) =
           *(int *)(iVar2 + 0x4c) + (short)(&DAT_080c8e24)[uVar1 + 0x40] * 0x28;
      *(int *)(param_1 + 0x50) = *(int *)(iVar2 + 0x50) + (short)(&DAT_080c8e24)[uVar1] * 0x28;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_08087BA4(param_1);
  }
  return in_lr;
}

