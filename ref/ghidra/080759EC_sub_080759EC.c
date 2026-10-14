// sub_080759EC at 0x080759EC (thumb)

undefined4 sub_080759EC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  undefined *local_24;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if ((*(byte *)(iVar4 + 0xc) < 2) || ((DAT_02022b64 & 8) == 0)) {
    if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
      if (*(char *)(param_1 + 0xe) != '\0') {
        *(byte *)(param_1 + 0xe) = (byte)*(ushort *)(param_1 + 0x90) & 0x40;
        *(undefined *)(param_1 + 0x12) = 0x10;
      }
      iVar8 = param_1 + 0x6c;
      sub_08003458(iVar8);
      pbVar7 = (byte *)(param_1 + 0x70);
      pcVar6 = (char *)(param_1 + 0x71);
      local_24 = (undefined *)(param_1 + 0x46);
      *local_24 = *(undefined *)
                   (*pcVar6 * 4 + *(int *)((uint)*pbVar7 * 4 + *(int *)(param_1 + 0x6c)));
      bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
      *(bool *)(param_1 + 0x44) = bVar1;
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      local_2c = *(int *)(iVar4 + 0x4c);
      *(int *)(param_1 + 0x4c) = local_2c + 0x400;
      local_28 = *(int *)(iVar4 + 0x50) + (uint)*(byte *)(param_1 + 0x12) * 0x100 + -0x2e00;
      *(int *)(param_1 + 0x50) = local_28;
      bVar2 = *(byte *)(param_1 + 0xd);
      if (bVar2 == 1) {
        bVar2 = *(char *)(param_1 + 0x13) + 1;
        *(byte *)(param_1 + 0x13) = bVar2;
        if (bVar2 < 0x41) {
          return in_lr;
        }
        local_28 = local_28 + -0xe00;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          local_2c = local_2c + -0x1000;
          sub_0807548C(&local_2c,iVar4,0);
          sub_08001EAC(0x8b);
        }
        else {
          local_2c = local_2c + 0x1800;
          sub_0807548C(&local_2c,iVar4,1);
          sub_08001EAC(0x8b);
        }
        sub_080033F0(iVar8,4);
        sub_08003458(iVar8);
        *local_24 = *(undefined *)
                     (*pcVar6 * 4 + *(int *)((uint)*pbVar7 * 4 + *(int *)(param_1 + 0x6c)));
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
        sub_080033F0(iVar8,3);
        sub_08003458(iVar8);
        *local_24 = *(undefined *)
                     (*pcVar6 * 4 + *(int *)((uint)*pbVar7 * 4 + *(int *)(param_1 + 0x6c)));
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
          sub_080753B4(iVar4,0,*(undefined *)(param_1 + 0x8c));
          return in_lr;
        }
        bVar2 = *(char *)(param_1 + 0x13) + 1;
        *(byte *)(param_1 + 0x13) = bVar2;
        if (bVar2 < 5) {
          return in_lr;
        }
        sub_080033F0(iVar8,2);
        sub_08003458(iVar8);
        *local_24 = *(undefined *)
                     (*pcVar6 * 4 + *(int *)((uint)*pbVar7 * 4 + *(int *)(param_1 + 0x6c)));
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

