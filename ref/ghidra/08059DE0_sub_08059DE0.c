// sub_08059DE0 at 0x08059DE0 (thumb)

undefined4 sub_08059DE0(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x11) == '\x02') && ((DAT_02022ae0 & 0x10) != 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  puVar5 = (uint *)(param_1 + 0x90);
  uVar3 = *(ushort *)puVar5 & 0x40;
  if ((*(ushort *)puVar5 & 0x40) == 0) {
    if (((byte)(*(char *)(param_1 + 0x10) - 2U) < 2) &&
       (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *puVar5 = uVar3;
      *(char *)(param_1 + 0x94) = (char)uVar3;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    else {
      if (*(char *)(param_1 + 0xf) == '\0') {
        iVar4 = sub_08048BE8(param_1);
        if (iVar4 != 0) {
          *(undefined *)(param_1 + 0xf) = 1;
        }
        if (*(char *)(param_1 + 0xf) == '\0') {
          piVar6 = (int *)(param_1 + 0xbc);
          if (*piVar6 == 0) {
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afe64 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            sub_080C8A98(param_1,*(undefined4 *)(&DAT_082afe90 + (uint)*(byte *)(param_1 + 0xd) * 4)
                        );
            if ((*(ushort *)puVar5 & 1) == 0) {
              return in_lr;
            }
            iVar4 = sub_08015A64(0,param_1,&DAT_082afed0);
            *piVar6 = iVar4;
            if (iVar4 == 0) {
              return in_lr;
            }
            sub_0800561C(param_1 + 0x74,&DAT_082afe48);
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
            *(undefined4 *)(param_1 + 0x58) = 0;
            sub_080033F0(param_1 + 0x6c,5);
            sub_08003458(param_1 + 0x6c);
            *(undefined *)(param_1 + 0x46) =
                 *(undefined *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
            *(undefined *)(param_1 + 0x1f) = 0;
            *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
            *(undefined *)(param_1 + 0xd) = 0;
            *(undefined *)(param_1 + 0xe) = 0;
            return in_lr;
          }
          iVar4 = sub_08015D94();
          if (iVar4 != 0) {
            sub_0800561C(param_1 + 0x74,&DAT_082afd68);
            *piVar6 = 0;
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
          iVar4 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0xa00);
          if (iVar4 < 0) {
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
          }
          iVar4 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0xa00,*(undefined4 *)(param_1 + 0x50));
          if (-1 < iVar4) {
            return in_lr;
          }
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
          return in_lr;
        }
      }
      if (*(char *)(param_1 + 0xd) == '\x05') {
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
        bVar2 = *(byte *)(param_1 + 0x95);
        if (bVar2 < 0xff) {
          bVar2 = 0;
        }
        else {
          bVar2 = bVar2 + 1;
        }
        *(byte *)(param_1 + 0x95) = bVar2;
        sub_0800561C(param_1 + 0x74,&DAT_082afd68);
      }
      if (*(char *)(param_1 + 0xf) == '\x01') {
        sub_08003458(param_1 + 0x6c);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        *(undefined *)(param_1 + 0xf) = 2;
      }
      iVar4 = sub_08048BE8(param_1);
      if (iVar4 == 0) {
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0xd);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(char *)(param_1 + 0xf) = cVar1;
    if ((*(ushort *)puVar5 & 0x1800) == 0x1000) {
      if ((((cVar1 != '\x01') && (cVar1 != '\x03')) && (cVar1 != '\x06')) &&
         ((*(undefined4 *)(param_1 + 0x58) = 0, cVar1 != '\x02' && (cVar1 != '\b')))) {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    sub_0805A0B8(param_1);
  }
  return in_lr;
}

