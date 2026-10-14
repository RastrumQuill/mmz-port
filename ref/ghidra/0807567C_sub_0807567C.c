// sub_0807567C at 0x0807567C (thumb)

undefined4 sub_0807567C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar4 + 0xc) < 2) || ((DAT_02022b64 & 8) == 0)) {
    if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
      if (*(char *)(param_1 + 0xe) != '\0') {
        *(byte *)(param_1 + 0xe) = (byte)*(ushort *)(param_1 + 0x90) & 0x40;
        *(undefined *)(param_1 + 0x12) = 0x10;
      }
      iVar6 = param_1 + 0x6c;
      sub_08003458(iVar6);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
      *(bool *)(param_1 + 0x44) = bVar1;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      local_28 = *(int *)(iVar4 + 0x4c);
      *(int *)(param_1 + 0x4c) = local_28 + 0x400;
      local_24 = *(int *)(iVar4 + 0x50) + (uint)*(byte *)(param_1 + 0x12) * 0x100 + -0x2e00;
      *(int *)(param_1 + 0x50) = local_24;
      bVar2 = *(byte *)(param_1 + 0xd);
      if (bVar2 == 1) {
        bVar2 = *(char *)(param_1 + 0x13) + 1;
        *(byte *)(param_1 + 0x13) = bVar2;
        if (bVar2 < 0x11) {
          return in_lr;
        }
        sub_080033F0(iVar6,0);
        sub_08003458(iVar6);
        *(undefined *)(param_1 + 0x46) =
             *(undefined *)
              (*(char *)(param_1 + 0x71) * 4 +
              *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
        *(undefined *)(param_1 + 0x13) = 0;
      }
      else if (bVar2 < 2) {
        if (bVar2 != 0) {
          return in_lr;
        }
        cVar3 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar3;
        if (cVar3 != -1) {
          return in_lr;
        }
        *(undefined *)(param_1 + 0x12) = 0;
        *(undefined *)(param_1 + 0x13) = 0;
      }
      else {
        if (bVar2 != 2) {
          if (bVar2 != 3) {
            return in_lr;
          }
          bVar2 = *(char *)(param_1 + 0x12) + 1;
          *(byte *)(param_1 + 0x12) = bVar2;
          if (bVar2 < 0x11) {
            return in_lr;
          }
          *(undefined4 *)(param_1 + 0xc) = 3;
          *(undefined4 *)(param_1 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
          uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
          DAT_02022890 = uVar5 & 0x7fffffff;
          if ((uVar5 * 2 >> 0x11 & 1) != 0) {
            sub_08068230(iVar4,0,*(undefined *)(param_1 + 0x8c));
            return in_lr;
          }
          sub_080753B4(iVar4,1,*(undefined *)(param_1 + 0x8c));
          return in_lr;
        }
        if (*(char *)(param_1 + 0x13) == '\x14') {
          local_24 = local_24 + -0x1400;
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            local_28 = local_28 + -0x1000;
            sub_0807541C(&local_28,iVar4,0x60,0xfffffe00);
            sub_0807541C(&local_28,iVar4,0x180,0xfffffe00);
          }
          else {
            local_28 = local_28 + 0x1800;
            sub_0807541C(&local_28,iVar4,0x60,0xfffffe00);
            sub_0807541C(&local_28,iVar4,0x180,0xfffffe00);
          }
        }
        bVar2 = *(char *)(param_1 + 0x13) + 1;
        *(byte *)(param_1 + 0x13) = bVar2;
        if (bVar2 < 0x39) {
          return in_lr;
        }
        *(undefined *)(param_1 + 0x12) = 0;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
      sub_08075570(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

