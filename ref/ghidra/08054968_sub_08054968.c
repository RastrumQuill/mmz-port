// sub_08054968 at 0x08054968 (thumb)

undefined4 sub_08054968(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  undefined4 *local_24;
  
  bVar2 = *(byte *)(param_1 + 0x10) >> 1;
  uVar4 = (uint)bVar2;
  if (uVar4 == 0) {
    if (((DAT_02022adf & 0x80) != 0) || ((DAT_02022ae0 & 0x10) != 0)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(byte *)(param_1 + 0x94) = bVar2;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    local_24 = (undefined4 *)(param_1 + 0x90);
    if (*(int *)(param_1 + 0x20) != 0) {
      bVar2 = *(byte *)(*(int *)(param_1 + 0x20) + 0xc);
      if (bVar2 == 4) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *local_24 = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
        return in_lr;
      }
      if (1 < bVar2) {
        if ((DAT_02022ae0 & 2) == 0) {
          sub_080033F0(param_1 + 0x6c,1);
          bVar2 = 0;
          do {
            sub_08003458(param_1 + 0x6c);
            *(undefined *)(param_1 + 0x46) =
                 *(undefined *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
            bVar2 = bVar2 + 1;
          } while (bVar2 < 0xe);
        }
        else {
          *(undefined4 *)(param_1 + 0x58) = 0;
          if (DAT_02022b2c < 9999) {
            DAT_02022b2c = DAT_02022b2c + 1;
          }
          sub_08015794(param_1,param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0xc) = 2;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
          uVar1 = 0;
          if (1 < *(byte *)(param_1 + 0x10)) {
            uVar1 = 2;
          }
          *(undefined *)(param_1 + 0xd) = uVar1;
          sub_08054D44(param_1);
        }
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
  }
  else if (((uVar4 == 1) && (*(int *)(param_1 + 0x24) != 0)) &&
          (1 < *(byte *)(*(int *)(param_1 + 0x24) + 0xc))) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  local_24 = (undefined4 *)(param_1 + 0x90);
  if ((*(ushort *)local_24 & 0x40) == 0) {
    cVar3 = *(char *)(param_1 + 0xf);
    if (cVar3 == '\0') {
      iVar5 = sub_08048BE8(param_1);
      if (iVar5 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar3 = *(char *)(param_1 + 0xf);
      if (cVar3 == '\0') {
        piVar6 = (int *)(param_1 + 0xc4);
        if (*piVar6 == 0) {
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af84c + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af858 + (uint)*(byte *)(param_1 + 0xd) * 4));
          if ((*(ushort *)local_24 & 1) == 0) {
            return in_lr;
          }
          iVar5 = sub_08015A64(0,param_1,&UNK_082af8dc + uVar4 * 8);
          *piVar6 = iVar5;
          if (iVar5 == 0) {
            return in_lr;
          }
          if (*(byte *)(param_1 + 0x10) < 2) {
            sub_0800561C(param_1 + 0x74,&DAT_082af814);
          }
          else {
            sub_0800561C(param_1 + 0x74,&DAT_082af830);
          }
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(param_1 + 0x58) = 0;
          if (uVar4 != 0) {
            return in_lr;
          }
          sub_080033F0(param_1 + 0x6c,1);
          sub_08003458(param_1 + 0x6c);
          *(undefined *)(param_1 + 0x46) =
               *(undefined *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
          return in_lr;
        }
        iVar5 = sub_08015D94(*piVar6);
        if (iVar5 != 0) {
          if (*(byte *)(param_1 + 0x10) < 2) {
            sub_0800561C(param_1 + 0x74,&DAT_082af7dc);
          }
          else {
            sub_0800561C(param_1 + 0x74,&DAT_082af7f8);
          }
          *piVar6 = 0;
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
          return in_lr;
        }
        iVar5 = *(int *)(param_1 + 0x50);
        if (uVar4 < 2) {
          iVar5 = iVar5 + 0x1000;
        }
        iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x1000,iVar5);
        if (iVar5 < 0) {
          return in_lr;
        }
        iVar5 = *(int *)(param_1 + 0x50);
        if (uVar4 < 2) {
          iVar5 = iVar5 + 0x1000;
        }
        iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x1000,iVar5);
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
        if (uVar4 < 2) {
          iVar5 = iVar5 + 0x1000;
        }
        iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + -0x1000,iVar5);
        if (iVar5 < 0) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
        }
        iVar5 = *(int *)(param_1 + 0x50);
        if (uVar4 < 2) {
          iVar5 = iVar5 + 0x1000;
        }
        iVar5 = sub_08007B30(*(int *)(param_1 + 0x4c) + 0x1000,iVar5);
        if (-1 < iVar5) {
          return in_lr;
        }
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
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
    iVar5 = sub_08048BE8(param_1);
    if (iVar5 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    uVar1 = 0;
    if (1 < *(byte *)(param_1 + 0x10)) {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    sub_08054D44(param_1);
  }
  return in_lr;
}

