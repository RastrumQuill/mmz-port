// sub_08076148 at 0x08076148 (thumb)

undefined4 sub_08076148(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && ((DAT_02022b64 & 0x10) == 0)) {
    iVar2 = param_1 + 0x6c;
    sub_08003458(iVar2);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    iVar1 = DAT_0202286c;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(DAT_0202286c + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    if ((*(char *)(param_1 + 0xd) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_080033F0(iVar2,8);
      sub_08003458(iVar2);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08075570(param_1);
  }
  return in_lr;
}

