// sub_0805F9A8 at 0x0805F9A8 (thumb)

undefined4 sub_0805F9A8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_0805FBF0(param_1);
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xf);
    if (cVar2 == '\0') {
LAB_0805fa98:
      iVar5 = sub_08048BE8(param_1);
      if (iVar5 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar2 = *(char *)(param_1 + 0xf);
      if (cVar2 == '\0') {
        if (*(char *)(param_1 + 0x10) != '\0') {
          if (*(int *)(*(int *)(param_1 + 0x20) + 0xbc) != 0) {
            return in_lr;
          }
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0470 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0488 + (uint)*(byte *)(param_1 + 0xd) * 4));
          return in_lr;
        }
        piVar7 = (int *)(param_1 + 0xbc);
        if (*piVar7 == 0) {
          pbVar6 = (byte *)(param_1 + 0xc4);
          if ((*pbVar6 & 2) != 0) {
            *pbVar6 = *pbVar6 & 0xfd;
            *(undefined *)(param_1 + 0xd) = 5;
            *(undefined *)(param_1 + 0xe) = 0;
          }
          if ((*pbVar6 & 1) == 0) {
            sub_080033F0(param_1 + 0x6c,*(byte *)(param_1 + 0x12) >> 2);
          }
          else {
            *(undefined *)(param_1 + 0x12) = 4;
          }
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0470 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0488 + (uint)*(byte *)(param_1 + 0xd) * 4));
          if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
            return in_lr;
          }
          iVar5 = sub_08015A64(0,param_1,&DAT_082b04a8);
          *piVar7 = iVar5;
          if (iVar5 == 0) {
            return in_lr;
          }
          sub_0800561C(param_1 + 0x74,&DAT_082b0454);
          *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(param_1 + 0x58) = 0;
          return in_lr;
        }
        iVar5 = sub_08015D94();
        if (iVar5 == 0) {
          return in_lr;
        }
        sub_0800561C(param_1 + 0x74,&DAT_082b0438);
        *piVar7 = 0;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
        return in_lr;
      }
    }
    iVar5 = param_1;
    if (cVar2 == '\x01') {
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      *(undefined *)(param_1 + 0xf) = 2;
    }
LAB_0805fae2:
    iVar5 = sub_08048BE8(iVar5);
    if (iVar5 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x20);
    uVar3 = DAT_02022ae0 & 0x10;
    if ((DAT_02022ae0 & 0x10) == 0) {
      if ((iVar5 == 0) || (*(byte *)(iVar5 + 0xc) < 2)) {
        cVar2 = *(char *)(param_1 + 0xf);
        if (cVar2 == '\0') {
          iVar4 = sub_08048BE8(iVar5);
          if (iVar4 != 0) {
            *(undefined *)(param_1 + 0xf) = 1;
          }
          cVar2 = *(char *)(param_1 + 0xf);
          if (cVar2 == '\0') goto LAB_0805fa98;
        }
        if (cVar2 == '\x01') {
          sub_08003458(param_1 + 0x6c);
          *(undefined *)(param_1 + 0x46) =
               *(undefined *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
          *(undefined *)(param_1 + 0xf) = 2;
        }
        goto LAB_0805fae2;
      }
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = 0;
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(uint *)(param_1 + 0x90) = uVar3;
    *(char *)(param_1 + 0x94) = (char)uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

