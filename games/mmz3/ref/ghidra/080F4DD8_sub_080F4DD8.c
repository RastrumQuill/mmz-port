// sub_080F4DD8 at 0x080F4DD8 (thumb)

undefined4 sub_080F4DD8(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  undefined4 in_lr;
  
  uVar2 = DAT_02002136;
  iVar5 = *(int *)(param_1 + 0x64ac);
  iVar7 = *(int *)(param_1 + 0xdec);
  pbVar10 = (byte *)(param_1 + 0xe17);
  bVar9 = *pbVar10;
  if (bVar9 == 1) {
    if ((DAT_02002134 & 3) == 0) {
      bVar9 = *(byte *)(param_1 + 0xdcd);
      if ((DAT_02002136 & 0x20) != 0) {
        uVar4 = sub_080FE390(bVar9 + 1,*(undefined *)(iVar7 + 0x79));
        *(undefined *)(param_1 + 0xdcd) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        uVar4 = sub_080FE390((*(byte *)(param_1 + 0xdcd) - 1) + (uint)*(byte *)(iVar7 + 0x79));
        *(undefined *)(param_1 + 0xdcd) = uVar4;
      }
      if (((uVar2 & 0xc0) != 0) && (4 < *(byte *)(iVar7 + 0x79))) {
        if (*(byte *)(param_1 + 0xdcd) < 4) {
          uVar8 = *(byte *)(param_1 + 0xdcd) + 4;
          bVar1 = *(byte *)(iVar7 + 0x79);
          if (uVar8 < bVar1) {
            *(char *)(param_1 + 0xdcd) = (char)uVar8;
          }
          else {
            *(byte *)(param_1 + 0xdcd) = bVar1 - 1;
          }
        }
        else {
          *(byte *)(param_1 + 0xdcd) = *(byte *)(param_1 + 0xdcd) - 4;
        }
      }
      if ((uint)bVar9 != (uint)*(byte *)(param_1 + 0xdcd)) {
        sub_0800471C(1);
      }
      *(ushort *)(*(int *)(param_1 + 0xde8) + 0x74) =
           (*(byte *)(param_1 + 0xdcd) & 3) * -0x10 + 0x9c;
      if (*(byte *)(param_1 + 0xdcd) < 4) {
        *(undefined2 *)(*(int *)(param_1 + 0xde8) + 0x76) = 0x68;
      }
      else {
        *(undefined2 *)(*(int *)(param_1 + 0xde8) + 0x76) = 0x78;
      }
    }
    else {
      *(undefined *)(*(int *)(param_1 + 0xde8) + 0x78) = 1;
      *(undefined *)(param_1 + 0xdd1) = 1;
      *pbVar10 = *pbVar10 + 1;
      if ((DAT_02002134 & 2) == 0) {
        uVar4 = sub_080F5508(param_1,*(undefined *)(param_1 + 0xdcd));
        *(undefined *)(iVar5 + 0xc5) = uVar4;
        sub_0800471C(2);
      }
      else {
        sub_0800471C(3);
      }
    }
  }
  else if (bVar9 < 2) {
    if (((bVar9 == 0) && (*(undefined *)(param_1 + 0xe1d) = 1, *(int *)(param_1 + 0xdec) != 0)) &&
       (1 < *(byte *)(iVar7 + 0xd))) {
      uVar6 = sub_080E5F40(param_1,0,0);
      *(undefined4 *)(param_1 + 0xde8) = uVar6;
      *(undefined *)(param_1 + 0xdcd) = 0;
      bVar9 = 0;
      if (*(byte *)(iVar7 + 0x79) != 0) {
        do {
          cVar3 = sub_080F5508(param_1,bVar9);
          if (cVar3 == *(char *)(iVar5 + 0xc5)) {
            *(byte *)(param_1 + 0xdcd) = bVar9;
            break;
          }
          bVar9 = bVar9 + 1;
        } while (bVar9 < *(byte *)(iVar7 + 0x79));
      }
      *(ushort *)(*(int *)(param_1 + 0xde8) + 0x74) =
           (*(byte *)(param_1 + 0xdcd) & 3) * -0x10 + 0x9c;
      *(ushort *)(*(int *)(param_1 + 0xde8) + 0x76) =
           (ushort)(*(byte *)(param_1 + 0xdcd) >> 2) * 0x10 + 0x68;
      *pbVar10 = *pbVar10 + 1;
    }
  }
  else if ((bVar9 == 2) && (*(undefined *)(param_1 + 0xe1d) = 1, *(char *)(param_1 + 0xdd1) == '\0')
          ) {
    *(undefined *)(param_1 + 3) = 0;
  }
  return in_lr;
}

