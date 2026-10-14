// sub_080529F8 at 0x080529F8 (thumb)

undefined4 sub_080529F8(int param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(uint *)(param_1 + 0x90);
  uVar3 = uVar1 & 0x40;
  if ((uVar1 & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = *(undefined *)(param_1 + 0xd);
    sub_08052C24(param_1);
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') &&
     (uVar4 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c), 0x7800 < uVar4)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(uint *)(param_1 + 0x90) = uVar3;
    *(char *)(param_1 + 0x94) = (char)uVar3;
  }
  else {
    piVar5 = (int *)(param_1 + 0xbc);
    if ((*(char *)piVar5 == '\0') ||
       (uVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c), uVar3 < 0x7801)) {
      cVar2 = *(char *)(param_1 + 0xf);
      if (cVar2 == '\0') {
        iVar6 = sub_08048BE8(param_1);
        if (iVar6 != 0) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        cVar2 = *(char *)(param_1 + 0xf);
        if (cVar2 == '\0') {
          if (*piVar5 == 0) {
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af5ec + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af5fc + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
              return in_lr;
            }
            iVar6 = sub_08015A64(0,param_1,&DAT_082af610);
            *piVar5 = iVar6;
            if (iVar6 != 0) {
              sub_0800561C(param_1 + 0x74,&DAT_082af5d0);
              *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
              *(undefined4 *)(param_1 + 0x58) = 0;
              return in_lr;
            }
            return in_lr;
          }
          iVar6 = sub_08015D94();
          if (iVar6 != 0) {
            sub_0800561C(param_1 + 0x74,&DAT_082af5b4);
            *piVar5 = 0;
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
            return in_lr;
          }
          iVar6 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800,*(undefined4 *)(param_1 + 0x50));
          if (-1 < iVar6) {
            iVar6 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50));
            if (iVar6 < 0) {
              return in_lr;
            }
            iVar6 = *(int *)(param_1 + 0x58) + 0x40;
            *(int *)(param_1 + 0x58) = iVar6;
            if (0x700 < iVar6) {
              *(undefined4 *)(param_1 + 0x58) = 0x700;
            }
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
            iVar6 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800);
            if (iVar6 < 0) {
              *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar6;
            }
            iVar6 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50));
            if (iVar6 < 0) {
              *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar6;
              return in_lr;
            }
            return in_lr;
          }
          return in_lr;
        }
      }
      if (cVar2 == '\x01') {
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        *(undefined *)(param_1 + 0xf) = 2;
      }
      iVar6 = sub_08048BE8(param_1);
      if (iVar6 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  DAT_02022aef = DAT_02022aef + '\x01';
  return in_lr;
}

