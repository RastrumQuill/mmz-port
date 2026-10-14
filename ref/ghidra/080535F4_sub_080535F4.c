// sub_080535F4 at 0x080535F4 (thumb)

undefined4 sub_080535F4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
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
        piVar3 = (int *)(param_1 + 0xbc);
        if (*piVar3 != 0) {
          iVar2 = sub_08015D94();
          if (iVar2 == 0) {
            return in_lr;
          }
          *piVar3 = 0;
          sub_0800561C(param_1 + 0x74,&DAT_082af644);
          return in_lr;
        }
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af6b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af6c8 + (uint)*(byte *)(param_1 + 0xd) * 4));
        if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
          return in_lr;
        }
        iVar2 = sub_08015A64(0,param_1,&DAT_082af6dc);
        *piVar3 = iVar2;
        if (iVar2 == 0) {
          return in_lr;
        }
        sub_0800561C(param_1 + 0x74,&DAT_082af67c);
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
    sub_08053704(param_1);
  }
  return in_lr;
}

