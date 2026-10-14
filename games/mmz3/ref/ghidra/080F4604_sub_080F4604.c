// sub_080F4604 at 0x080F4604 (thumb)

undefined4 sub_080F4604(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x64ac);
  pbVar3 = (byte *)(param_1 + 0xe17);
  bVar1 = *pbVar3;
  if (bVar1 == 1) {
    if ((DAT_02002134 & 3) == 0) {
      if ((*(byte *)(iVar4 + 0xca) & 0xc) == 0) {
        if ((DAT_02002136 & 0x30) != 0) {
          *(byte *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + 1U & 1;
          sub_0800471C(1);
        }
      }
      else {
        if ((DAT_02002136 & 0x10) != 0) {
          *(byte *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + 1U & 3;
          sub_0800471C(1);
        }
        if ((DAT_02002136 & 0x20) != 0) {
          *(byte *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + 3U & 3;
          sub_0800471C(1);
        }
      }
      *(ushort *)(*(int *)(param_1 + 0xde8) + 0x74) =
           (ushort)*(byte *)(param_1 + 0xdcd) * 0x10 + 0x44;
    }
    else {
      *(undefined *)(*(int *)(param_1 + 0xde8) + 0x78) = 1;
      *(undefined *)(param_1 + 0xdd1) = 1;
      *pbVar3 = *pbVar3 + 1;
      if ((DAT_02002134 & 2) == 0) {
        if (*(char *)(iVar4 + 0xc0) == *(char *)(param_1 + 0xdcd)) {
          *(undefined *)(iVar4 + 0xc0) = *(undefined *)(iVar4 + 0xc1);
        }
        *(undefined *)(iVar4 + 0xc1) = *(undefined *)(param_1 + 0xdcd);
        sub_0800471C(2);
      }
      else {
        sub_0800471C(3);
      }
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) &&
       (*(undefined *)(param_1 + 0xe1d) = 1, 2 < *(byte *)(*(int *)(param_1 + 0xde4) + 0xd))) {
      iVar2 = sub_080E5F40(param_1,0,0);
      *(int *)(param_1 + 0xde8) = iVar2;
      *(undefined *)(param_1 + 0xdcd) = *(undefined *)(iVar4 + 0xc1);
      *(ushort *)(iVar2 + 0x74) = (ushort)*(byte *)(param_1 + 0xdcd) * 0x10 + 0x44;
      *(undefined2 *)(*(int *)(param_1 + 0xde8) + 0x76) = 0x50;
      *pbVar3 = *pbVar3 + 1;
    }
  }
  else if ((bVar1 == 2) && (*(undefined *)(param_1 + 0xe1d) = 1, *(char *)(param_1 + 0xdd1) == '\0')
          ) {
    *(undefined *)(param_1 + 3) = 0;
  }
  return in_lr;
}

