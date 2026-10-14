// sub_08031718 at 0x08031718 (thumb)

undefined4 sub_08031718(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) != 0) || (*(short *)(param_1 + 0x8c) == 0)) &&
     ((DAT_02022b64 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_08031804(param_1);
    return in_lr;
  }
  sub_08033AFC(param_1);
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(bool *)(param_1 + 0xd0) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    piVar3 = (int *)(param_1 + 0xe0);
    if (*piVar3 == 0) {
      iVar2 = sub_08015A64(6,param_1,&DAT_082ad53c);
      *piVar3 = iVar2;
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xd) = 0x2c;
        *(undefined *)(param_1 + 0xe) = 1;
        if (*piVar3 != 0) goto LAB_080317e0;
      }
      cVar1 = *(char *)(param_1 + 0xd);
      if (((((cVar1 == '\x02') || (cVar1 == '\f')) ||
           ((cVar1 == '\x11' || ((cVar1 == '\x12' || (cVar1 == '\x13')))))) || (cVar1 == '#')) ||
         (cVar1 == '.')) {
        *(undefined *)(param_1 + 0xd) = 0x2c;
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
  }
LAB_080317e0:
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad3c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

