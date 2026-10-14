// sub_0804AEC0 at 0x0804AEC0 (thumb)

undefined4 sub_0804AEC0(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xf) == '\0') && (iVar3 = sub_08048BE8(param_1), iVar3 != 0)) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\x04') {
    puVar6 = (undefined4 *)(param_1 + 0x90);
    if ((DAT_02022ae0 & 0x10) != 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar6 = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    iVar3 = *(int *)(param_1 + 0x20);
    if (1 < *(byte *)(iVar3 + 0xc)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar6 = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    if ((*(ushort *)puVar6 & 0x40) != 0) {
      *(int *)(iVar3 + 0x50) = *(int *)(iVar3 + 0x50) + 0x1400;
      *(undefined *)(iVar3 + 0x45) = 1;
      *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 0x20;
      *(undefined4 *)(iVar3 + 0x58) = 0;
      iVar5 = *(int *)(iVar3 + 0x24);
      if (iVar5 != 0) {
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
        *(undefined4 *)(iVar5 + 0x90) = 0;
        *(undefined *)(iVar5 + 0x94) = 0;
        *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
        *(undefined4 *)(iVar5 + 0xc) = 3;
        *(undefined4 *)(iVar5 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(iVar5 + 9) * 4) + 0xc);
        *(undefined4 *)(iVar3 + 0x24) = 0;
      }
      *(undefined *)(iVar3 + 0x10) = 2;
      *(undefined *)(iVar3 + 0xd) = 1;
      sub_080033F0(iVar3 + 0x6c,1);
      sub_08003458(iVar3 + 0x6c);
      *(undefined *)(iVar3 + 0x46) =
           *(undefined *)
            (*(char *)(iVar3 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(iVar3 + 0x70) * 4 + *(int *)(iVar3 + 0x6c)));
      bVar1 = *(int *)(DAT_0202286c + 0x4c) < *(int *)(iVar3 + 0x4c);
      if (bVar1) {
        uVar4 = 0x240;
      }
      else {
        uVar4 = 0xfffffdc0;
      }
      *(undefined4 *)(iVar3 + 0x54) = uVar4;
      *(bool *)(iVar3 + 0x44) = bVar1;
      if (bVar1) {
        bVar2 = *(byte *)(iVar3 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(iVar3 + 10) & 0xef;
      }
      *(byte *)(iVar3 + 10) = bVar2;
    }
  }
  else if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc4) = 1;
    sub_0804AD34(param_1);
    sub_0804B2F8(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x04') {
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      sub_080C8A98(param_1,*(undefined4 *)
                            ((uint)*(byte *)(param_1 + 0xd) * 4 +
                            *(int *)(&DAT_082aeed0 + (uint)*(byte *)(param_1 + 0x10) * 4)));
      sub_080C8A98(param_1,*(undefined4 *)
                            ((uint)*(byte *)(param_1 + 0xd) * 4 +
                            *(int *)(&DAT_082aeee8 + (uint)*(byte *)(param_1 + 0x10) * 4)));
    }
    else if (*(int *)(param_1 + 0x20) == 0) {
      iVar3 = param_1 + 0x6c;
      sub_08003458(iVar3);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      sub_080C8A98(param_1,*(undefined4 *)
                            ((uint)*(byte *)(param_1 + 0xd) * 4 +
                            *(int *)(&DAT_082aeed0 + (uint)*(byte *)(param_1 + 0x10) * 4)));
      sub_080C8A98(param_1,*(undefined4 *)
                            ((uint)*(byte *)(param_1 + 0xd) * 4 +
                            *(int *)(&DAT_082aeee8 + (uint)*(byte *)(param_1 + 0x10) * 4)));
      if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
        iVar5 = sub_08015A64(0,param_1,&DAT_082af09c);
        *(int *)(param_1 + 0x20) = iVar5;
        if (iVar5 != 0) {
          sub_0800561C(param_1 + 0x74,&DAT_082aef2c);
          *(undefined4 *)(param_1 + 0x58) = 0;
          iVar5 = *(int *)(param_1 + 0x24);
          if (iVar5 != 0) {
            *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
            *(undefined4 *)(iVar5 + 0x90) = 0;
            *(undefined *)(iVar5 + 0x94) = 0;
            *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
            *(undefined4 *)(iVar5 + 0xc) = 3;
            *(undefined4 *)(iVar5 + 0x14) =
                 *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(iVar5 + 9) * 4) + 0xc);
            *(undefined4 *)(param_1 + 0x24) = 0;
          }
          *(undefined *)(param_1 + 0x1f) = 0;
          sub_080033F0(iVar3,1);
          sub_08003458(iVar3);
          *(undefined *)(param_1 + 0x46) =
               *(undefined *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
          *(undefined *)(param_1 + 0x45) = 1;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
          sub_0804AC18(param_1);
        }
      }
    }
    else {
      iVar3 = sub_08015D94();
      if (iVar3 == 0) {
        iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,*(undefined4 *)(param_1 + 0x50));
        if ((-1 < iVar3) &&
           (iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50)),
           -1 < iVar3)) {
          iVar3 = *(int *)(param_1 + 0x58) + 0x40;
          *(int *)(param_1 + 0x58) = iVar3;
          if (0x700 < iVar3) {
            *(undefined4 *)(param_1 + 0x58) = 0x700;
          }
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
          iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800);
          if (iVar3 < 0) {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
          }
          iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50));
          if (iVar3 < 0) {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
          }
        }
      }
      else {
        sub_0800561C(param_1 + 0x74,&DAT_082aef10);
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined *)(param_1 + 0x10) = 2;
        *(undefined *)(param_1 + 0xd) = 0;
        sub_0804C5E8(param_1);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xf) = 2;
    }
    iVar3 = sub_08048BE8(param_1);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

