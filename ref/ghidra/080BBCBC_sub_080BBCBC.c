// sub_080BBCBC at 0x080BBCBC (thumb)

undefined4 sub_080BBCBC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar2 + 1) < 2) {
    if ((*(byte *)(iVar2 + 1) == 0) || (*(char *)(iVar2 + 2) == '\0')) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x9e8);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x9ec);
      if (*(byte *)(param_1 + 0x10) != 0) {
        if ((byte)(&DAT_0202b71f)[*(byte *)(param_1 + 0x10)] - 1 < 0x4e) {
          bVar1 = *(byte *)(param_1 + 10) | 1;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) & 0xfe;
        }
        *(byte *)(param_1 + 10) = bVar1;
      }
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080BBD7C(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b85b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

