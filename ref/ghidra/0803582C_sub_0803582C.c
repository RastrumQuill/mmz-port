// sub_0803582C at 0x0803582C (thumb)

undefined4 sub_0803582C(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (*(short *)(param_1 + 0x8c) != 0)) ||
     (bVar2 = (byte)DAT_02022b64, (DAT_02022b64 & 0x10) != 0)) {
    sub_0803699C(param_1);
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      *(bool *)(param_1 + 200) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
      piVar3 = (int *)(param_1 + 0xd8);
      if (*piVar3 == 0) {
        iVar4 = sub_08015A64(8,param_1,&DAT_082ad734);
        *piVar3 = iVar4;
        if (iVar4 != 0) {
          *(undefined *)(param_1 + 0xd) = 0x13;
          *(undefined *)(param_1 + 0xe) = 1;
        }
      }
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
        *(undefined *)(param_1 + 0xe4) = 0x80;
        *(undefined *)(param_1 + 0xd) = 0x13;
        *(undefined *)(param_1 + 0xe) = 1;
        return in_lr;
      }
      if (((((*piVar3 == 0) && (cVar1 = *(char *)(param_1 + 0xd), 1 < (byte)(cVar1 - 4U))) &&
           ((cVar1 != '\r' && ((cVar1 != '\a' && (cVar1 != '\b')))))) && (cVar1 != '\t')) &&
         ((((cVar1 != '\n' && (cVar1 != '\v')) && (cVar1 != '\f')) &&
          ((cVar1 != '\x13' && (cVar1 != '\x14')))))) {
        *(undefined *)(param_1 + 0xd) = 0x13;
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082ad69c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar2 & 0x10;
    sub_080355E4(param_1);
  }
  return in_lr;
}

