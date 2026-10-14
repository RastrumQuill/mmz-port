// sub_08089BFC at 0x08089BFC (thumb)

undefined4 sub_08089BFC(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x20);
  if ((*(uint *)(iVar9 + 0xc) & 0xffff00) == 0x20600) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08089D94(param_1);
  }
  else {
    uVar4 = sub_0801901C(iVar9,0);
    *(undefined4 *)(param_1 + 0x4c) = uVar4;
    uVar4 = sub_08019068(iVar9,0);
    *(undefined4 *)(param_1 + 0x50) = uVar4;
    bVar1 = *(byte *)(param_1 + 0xd);
    uVar8 = (uint)*(byte *)(param_1 + 0x10);
    if (*(char *)(iVar9 + 0x219) == '\x01') {
      pbVar5 = (byte *)(iVar9 + 0x122 + uVar8);
    }
    else {
      pbVar5 = (byte *)(iVar9 + 0x122);
    }
    bVar2 = *pbVar5;
    uVar3 = *(undefined *)(iVar9 + 0x18a + uVar8);
    uVar6 = sub_08018780(iVar9,uVar3);
    uVar6 = (uint)(uVar6 <= bVar2);
    uVar7 = sub_08018768(iVar9,uVar3);
    if (uVar7 <= bVar2) {
      uVar6 = uVar6 + 1;
    }
    *(char *)(param_1 + 0xd) = (char)uVar6;
    if (uVar6 != bVar1) {
      if (uVar6 == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        if (bVar1 == 0) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
          sub_080033F0(param_1 + 0x6c,(&DAT_082b3444)[uVar8 * 2]);
          *(byte *)(param_1 + 0x12) = bVar1;
        }
        if (uVar6 == 1) {
          *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xe0;
          *(undefined *)(param_1 + 0x1e) = 0xe;
        }
        else {
          *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xf0;
          *(undefined *)(param_1 + 0x1e) = 0xf;
        }
      }
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (uVar8 != 0) {
      uVar8 = (uint)*(byte *)(*(int *)(param_1 + 0x24) + 0xd);
      if (uVar6 < uVar8) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        *(undefined *)(param_1 + 0x12) = 0;
      }
      else if ((*(byte *)(param_1 + 0x12) == 0) ||
              (iVar9 = *(byte *)(param_1 + 0x12) - 1, *(char *)(param_1 + 0x12) = (char)iVar9,
              iVar9 == 0)) {
        sub_08001EAC(*(undefined2 *)(&DAT_082b3448 + (uVar6 - 1) * 2));
        *(undefined *)(param_1 + 0x12) = 0x18;
      }
    }
  }
  return in_lr;
}

