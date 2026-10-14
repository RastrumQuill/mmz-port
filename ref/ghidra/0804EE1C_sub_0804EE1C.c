// sub_0804EE1C at 0x0804EE1C (thumb)

undefined4 sub_0804EE1C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  puVar4 = (uint *)(param_1 + 0x90);
  uVar2 = *(ushort *)puVar4 & 0x40;
  if ((*(ushort *)puVar4 & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_0804F1A8(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\x02') {
    iVar5 = *(int *)(param_1 + 0x20);
    if ((DAT_02022ae0 & 0x10) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar4 = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    if (1 < *(byte *)(iVar5 + 0xc)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar4 = uVar2;
      *(char *)(param_1 + 0x94) = (char)uVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar3 = sub_08048BE8(iVar5);
      if (iVar3 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') goto LAB_0804ef56;
    }
    if (cVar1 == '\x01') {
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xf) = 2;
    }
    iVar3 = sub_08048BE8(iVar5);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    if (*(char *)(param_1 + 0x10) != '\x02') {
      return in_lr;
    }
    uVar2 = *(uint *)(iVar5 + 0x90);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
LAB_0804ef56:
      iVar5 = sub_08048BE8(param_1);
      if (iVar5 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        if (*(char *)(param_1 + 0x10) == '\x02') {
          iVar5 = *(int *)(param_1 + 0x20);
          if (1 < *(byte *)(iVar5 + 0xc)) {
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined *)(param_1 + 0x94) = 0;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
            *(undefined4 *)(param_1 + 0xc) = 3;
            *(undefined4 *)(param_1 + 0x14) =
                 *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
          }
          if (*(int *)(iVar5 + 0x20) == 0) {
            if (1 < (byte)(*(char *)(iVar5 + 0xd) - 1U)) {
              sub_0800561C(param_1 + 0x74,&DAT_082af274);
            }
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af2c8 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af2e4 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            return in_lr;
          }
          sub_0800561C(param_1 + 0x74,&DAT_082af290);
          *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar5 + 0x4c);
          iVar5 = *(int *)(iVar5 + 0x50);
        }
        else {
          if (*(int *)(param_1 + 0x20) == 0) {
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af2c8 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af2e4 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
              return in_lr;
            }
            iVar5 = sub_08015A64(0,param_1,&DAT_082af304);
            *(int *)(param_1 + 0x20) = iVar5;
            if (iVar5 == 0) {
              return in_lr;
            }
            sub_0800561C(param_1 + 0x74,&DAT_082af2ac);
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
            *(undefined4 *)(param_1 + 0x58) = 0;
            return in_lr;
          }
          iVar5 = sub_08015D94();
          if (iVar5 != 0) {
            sub_0800561C(param_1 + 0x74,&DAT_082af258);
            *(undefined4 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
            return in_lr;
          }
          iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,*(int *)(param_1 + 0x50) + 0x1000);
          if (iVar5 < 0) {
            return in_lr;
          }
          iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(int *)(param_1 + 0x50) + 0x1000);
          if (iVar5 < 0) {
            return in_lr;
          }
          iVar5 = *(int *)(param_1 + 0x58) + 0x40;
          *(int *)(param_1 + 0x58) = iVar5;
          if (0x700 < iVar5) {
            *(undefined4 *)(param_1 + 0x58) = 0x700;
          }
          iVar5 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
          *(int *)(param_1 + 0x50) = iVar5;
          iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,iVar5 + 0x1000);
          if (iVar5 < 0) {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
          }
          iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(int *)(param_1 + 0x50) + 0x1000);
          if (-1 < iVar5) {
            return in_lr;
          }
          iVar5 = *(int *)(param_1 + 0x50) + iVar5;
        }
        *(int *)(param_1 + 0x50) = iVar5;
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
    iVar5 = sub_08048BE8(param_1);
    if (iVar5 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
    if (*(char *)(param_1 + 0x10) != '\x02') {
      return in_lr;
    }
    iVar5 = *(int *)(param_1 + 0x20);
    uVar2 = *(uint *)(iVar5 + 0x90);
  }
  if (((uVar2 & 0x10001) == 0) && ((*(byte *)(iVar5 + 0x94) & 2) == 0)) {
    cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
    *(char *)(param_1 + 0x1e) = cVar1;
  }
  return in_lr;
}

