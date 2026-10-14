// sub_0804FDC4 at 0x0804FDC4 (thumb)

undefined4 sub_0804FDC4(int param_1)

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
        piVar3 = (int *)(param_1 + 0xb8);
        if (*piVar3 == 0) {
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af3e4 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af3fc + (uint)*(byte *)(param_1 + 0xd) * 4));
          if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
            return in_lr;
          }
          iVar2 = sub_08015A64(0,param_1,&DAT_082af414);
          *piVar3 = iVar2;
          if (iVar2 == 0) {
            return in_lr;
          }
          sub_0800561C(param_1 + 0x74,&DAT_082af3c8);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(param_1 + 0x58) = 0;
          sub_080033F0(param_1 + 0x6c,0xc);
          sub_08003458(param_1 + 0x6c);
          *(undefined *)(param_1 + 0x46) =
               *(undefined *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
          return in_lr;
        }
        iVar2 = sub_08015D94();
        if (iVar2 != 0) {
          sub_0800561C(param_1 + 0x74,&DAT_082af358);
          *piVar3 = 0;
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        iVar2 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0xa00,*(undefined4 *)(param_1 + 0x50));
        if (iVar2 < 0) {
          return in_lr;
        }
        iVar2 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0xa00,*(undefined4 *)(param_1 + 0x50));
        if (iVar2 < 0) {
          return in_lr;
        }
        iVar2 = *(int *)(param_1 + 0x58) + 0x40;
        *(int *)(param_1 + 0x58) = iVar2;
        if (0x700 < iVar2) {
          *(undefined4 *)(param_1 + 0x58) = 0x700;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
        iVar2 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0xa00);
        if (iVar2 < 0) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
        }
        iVar2 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0xa00,*(undefined4 *)(param_1 + 0x50));
        if (iVar2 < 0) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
        }
        cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x700);
        if (cVar1 != '\x0f') {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        sub_0804FFBC(param_1);
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
    sub_0804FFBC(param_1);
  }
  return in_lr;
}

