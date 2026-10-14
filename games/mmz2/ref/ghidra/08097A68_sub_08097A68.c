// sub_08097A68 at 0x08097A68 (thumb)

undefined4 sub_08097A68(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 2) {
    if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08097C88(param_1);
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0xf);
    if (cVar2 == '\0') {
LAB_08097b36:
      iVar5 = sub_08065A24(param_1);
      if (iVar5 != 0) {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      cVar2 = *(char *)(param_1 + 0xf);
      if (cVar2 == '\0') {
        if (1 < *(byte *)(param_1 + 0x10)) {
          if (*(int *)(*(int *)(param_1 + 0x28) + 0xb8) != 0) {
            return in_lr;
          }
          sub_080EF118(param_1,*(undefined4 *)(&DAT_08343018 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080EF118(param_1,*(undefined4 *)(&DAT_08343030 + (uint)*(byte *)(param_1 + 0xd) * 4));
          return in_lr;
        }
        piVar7 = (int *)(param_1 + 0xb8);
        if (*piVar7 == 0) {
          pbVar6 = (byte *)(param_1 + 0xc0);
          if ((*pbVar6 & 2) != 0) {
            *pbVar6 = *pbVar6 & 0xfd;
            *(undefined *)(param_1 + 0xd) = 5;
            *(undefined *)(param_1 + 0xe) = 0;
          }
          if ((*pbVar6 & 1) == 0) {
            sub_080127E4(param_1,*(byte *)(param_1 + 0x12) >> 2 | 0x9d00);
          }
          else {
            *(undefined *)(param_1 + 0x12) = 4;
          }
          sub_080EF118(param_1,*(undefined4 *)(&DAT_08343018 + (uint)*(byte *)(param_1 + 0xd) * 4));
          sub_080EF118(param_1,*(undefined4 *)(&DAT_08343030 + (uint)*(byte *)(param_1 + 0xd) * 4));
          if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
            return in_lr;
          }
          iVar5 = sub_0801E11C(0,param_1,&DAT_08343058);
          *piVar7 = iVar5;
          if (iVar5 == 0) {
            return in_lr;
          }
          sub_08006E08(param_1 + 0x74,&DAT_08342fe8);
          *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
          *(undefined4 *)(param_1 + 0x60) = 0;
          return in_lr;
        }
        iVar5 = sub_0801E4D8();
        if (iVar5 == 0) {
          return in_lr;
        }
        sub_08006E08(param_1 + 0x74,&DAT_08342fb8);
        *piVar7 = 0;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x68);
        return in_lr;
      }
    }
    iVar5 = param_1;
    if (cVar2 == '\x01') {
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0xf) = 2;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      sub_08006E08(param_1 + 0x74,&DAT_08342fb8);
    }
LAB_08097b6c:
    iVar5 = sub_08065A24(iVar5);
    if (iVar5 == 0) {
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x28);
    uVar3 = DAT_0202ebbb & 0x20;
    if ((DAT_0202ebbb & 0x20) == 0) {
      if ((iVar5 == 0) || (*(byte *)(iVar5 + 0xc) < 2)) {
        cVar2 = *(char *)(param_1 + 0xf);
        if (cVar2 == '\0') {
          iVar4 = sub_08065A24(iVar5);
          if (iVar4 != 0) {
            *(undefined *)(param_1 + 0xf) = 1;
          }
          cVar2 = *(char *)(param_1 + 0xf);
          if (cVar2 == '\0') goto LAB_08097b36;
        }
        if (cVar2 == '\x01') {
          sub_080128D4(param_1);
          *(undefined *)(param_1 + 0xf) = 2;
        }
        goto LAB_08097b6c;
      }
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = 0;
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar3;
    *(uint *)(param_1 + 0x90) = uVar3;
    *(char *)(param_1 + 0x94) = (char)uVar3;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

