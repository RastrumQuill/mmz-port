// sub_0805B980 at 0x0805B980 (thumb)

undefined4 sub_0805B980(int param_1)

{
  undefined uVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = 0;
  local_18 = 0xfffff800;
  puVar6 = (ushort *)(param_1 + 0x90);
  if ((*puVar6 & 0x40) == 0) {
    if (*(char *)(param_1 + 0x10) != '\x04') {
      cVar3 = *(char *)(param_1 + 0xf);
      if (cVar3 == '\0') {
        iVar4 = sub_08048BE8(param_1);
        if (iVar4 != 0) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        cVar3 = *(char *)(param_1 + 0xf);
        if (cVar3 == '\0') {
          piVar5 = (int *)(param_1 + 0xbc);
          if (*piVar5 == 0) {
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082affa8 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082affd0 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            if ((*puVar6 & 1) == 0) {
              return in_lr;
            }
            iVar4 = sub_08015A64(0,param_1,&local_1c);
            *piVar5 = iVar4;
            if (iVar4 == 0) {
              return in_lr;
            }
            sub_0800561C(param_1 + 0x74,&DAT_082aff54);
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
            *(undefined4 *)(param_1 + 0x58) = 0;
            return in_lr;
          }
          iVar4 = sub_08015D94(*piVar5);
          if (iVar4 != 0) {
            if (*(char *)(param_1 + 0x10) == '\0') {
              sub_0800561C(param_1 + 0x74,&DAT_082aff1c);
            }
            else {
              sub_0800561C(param_1 + 0x74,&DAT_082aff38);
            }
            *piVar5 = 0;
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
            return in_lr;
          }
          iVar4 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0xa00,*(undefined4 *)(param_1 + 0x50));
          if (iVar4 < 0) {
            return in_lr;
          }
          iVar4 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0xa00,*(undefined4 *)(param_1 + 0x50));
          if (iVar4 < 0) {
            return in_lr;
          }
          iVar4 = *(int *)(param_1 + 0x58) + 0x40;
          *(int *)(param_1 + 0x58) = iVar4;
          if (0x700 < iVar4) {
            *(undefined4 *)(param_1 + 0x58) = 0x700;
          }
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
          iVar4 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x800);
          if (iVar4 < 0) {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
          }
          iVar4 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x800,*(undefined4 *)(param_1 + 0x50));
          if (-1 < iVar4) {
            return in_lr;
          }
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
          return in_lr;
        }
      }
      if (cVar3 == '\x01') {
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        *(undefined *)(param_1 + 0xf) = 2;
      }
      iVar4 = sub_08048BE8(param_1);
      if (iVar4 != 0) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
LAB_0805b9f4:
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082affa8 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082affd0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\x04') goto LAB_0805b9f4;
  uVar1 = *(undefined *)(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  uVar2 = 0;
  if ((*puVar6 & 0x1000) != 0) {
    if ((*puVar6 & 0x800) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      goto LAB_0805b9e4;
    }
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
LAB_0805b9e4:
  *(undefined *)(param_1 + 0xf) = uVar1;
  sub_0805BB98(param_1);
  return in_lr;
}

