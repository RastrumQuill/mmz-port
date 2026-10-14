// sub_0805E280 at 0x0805E280 (thumb)

undefined4 sub_0805E280(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (cVar1 = sub_0805E0C0(param_1), cVar1 == '\0'))
  {
    cVar1 = *(char *)(param_1 + 0xf);
    if (cVar1 == '\0') {
      iVar3 = sub_08048BE8(param_1);
      if (iVar3 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar1 = *(char *)(param_1 + 0xf);
      if (cVar1 == '\0') {
        piVar4 = (int *)(param_1 + 0xbc);
        if (*piVar4 == 0) {
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0318 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b032c + (uint)*(byte *)(param_1 + 0xd) * 4));
          if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
            return in_lr;
          }
          iVar3 = sub_08015A64(0,param_1,&DAT_082b0350);
          *piVar4 = iVar3;
          if (iVar3 == 0) {
            return in_lr;
          }
          sub_0800561C(param_1 + 0x74,&DAT_082b02fc);
          *(undefined4 *)(param_1 + 0x58) = 0;
          sub_080033F0(param_1 + 0x6c,0);
          sub_08003458(param_1 + 0x6c);
          *(undefined *)(param_1 + 0x46) =
               *(undefined *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
          if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x1800;
          }
          *(undefined *)(param_1 + 0x45) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
          return in_lr;
        }
        iVar3 = sub_08015D94();
        if (iVar3 != 0) {
          sub_0800561C(param_1 + 0x74,&DAT_082b0270);
          *piVar4 = 0;
          return in_lr;
        }
        iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x700,*(undefined4 *)(param_1 + 0x50));
        if (iVar3 < 0) {
          return in_lr;
        }
        iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x700,*(undefined4 *)(param_1 + 0x50));
        if (iVar3 < 0) {
          return in_lr;
        }
        iVar3 = *(int *)(param_1 + 0x58) + 0x40;
        *(int *)(param_1 + 0x58) = iVar3;
        if (0x700 < iVar3) {
          *(undefined4 *)(param_1 + 0x58) = 0x700;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
        iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x700);
        if (iVar3 < 0) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
        }
        iVar3 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x700,*(undefined4 *)(param_1 + 0x50));
        if (-1 < iVar3) {
          return in_lr;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
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
    iVar3 = sub_08048BE8(param_1);
    if (iVar3 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0xd);
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    if (1 < (byte)(cVar1 - 1U)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    cVar1 = '\x01';
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  *(char *)(param_1 + 0xf) = cVar1;
  uVar2 = 0;
  if ((*(ushort *)(param_1 + 0x90) & 0x1000) != 0) {
    if ((*(ushort *)(param_1 + 0x90) & 0x800) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      goto LAB_0805e2fc;
    }
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
LAB_0805e2fc:
  sub_0805E4AC(param_1);
  return in_lr;
}

