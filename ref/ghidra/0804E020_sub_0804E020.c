// sub_0804E020 at 0x0804E020 (thumb)

undefined4 sub_0804E020(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar2 = sub_08048BE8(param_1);
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af18c + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af190 + (uint)*(byte *)(param_1 + 0xd) * 4));
        return in_lr;
      }
    }
    if (cVar1 == '\x01') {
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xf) = 2;
    }
    iVar2 = sub_08048BE8(param_1);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0804E0E0(param_1);
  }
  return in_lr;
}

