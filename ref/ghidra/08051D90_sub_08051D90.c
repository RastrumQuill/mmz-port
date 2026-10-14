// sub_08051D90 at 0x08051D90 (thumb)

undefined4 sub_08051D90(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
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
        piVar4 = (int *)(param_1 + 0xb8);
        if (*piVar4 == 0) {
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af554 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af574 + (uint)*(byte *)(param_1 + 0xd) * 4));
          if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
            iVar2 = sub_08015A64(0,param_1,&DAT_082af598);
            *piVar4 = iVar2;
            if (iVar2 != 0) {
              sub_0800561C(param_1 + 0x74,&DAT_082af538);
              *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
              *(undefined4 *)(param_1 + 0x58) = 0;
            }
          }
        }
        else {
          iVar2 = sub_08015D94();
          if (iVar2 == 0) {
            iVar2 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,*(int *)(param_1 + 0x50) + 0x800)
            ;
            if ((-1 < iVar2) &&
               (iVar2 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,
                                     *(int *)(param_1 + 0x50) + 0x800), -1 < iVar2)) {
              iVar2 = *(int *)(param_1 + 0x58) + 0x40;
              *(int *)(param_1 + 0x58) = iVar2;
              if (0x700 < iVar2) {
                *(undefined4 *)(param_1 + 0x58) = 0x700;
              }
              iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
              *(int *)(param_1 + 0x50) = iVar2;
              iVar2 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,iVar2 + 0x800);
              if (iVar2 < 0) {
                *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
              }
              iVar2 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(int *)(param_1 + 0x50) + 0x800
                                  );
              if (iVar2 < 0) {
                *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar2;
              }
            }
          }
          else {
            sub_0800561C(param_1 + 0x74,&DAT_082af51c);
            *piVar4 = 0;
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
          }
        }
        uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
        if (uVar3 < 0x8001) {
          return in_lr;
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
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
    sub_08051F70(param_1);
  }
  return in_lr;
}

