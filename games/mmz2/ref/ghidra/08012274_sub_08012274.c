// sub_08012274 at 0x08012274 (thumb)

undefined4 sub_08012274(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08006B38();
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 != param_1 + 0x14) {
    do {
      if ((*(byte *)(iVar3 + 10) & 1) != 0) {
        iVar4 = iVar3 + 0x34;
        if ((*(byte *)(iVar3 + 10) & 8) == 0) {
          sub_08004A80(param_2,iVar4,0,*(undefined *)(iVar3 + 0x25));
        }
        else {
          if ((*(uint *)(&DAT_0202e160 + (uint)(*(byte *)(iVar3 + 0x1d) >> 5) * 4) &
              1 << (*(byte *)(iVar3 + 0x1d) & 0x1f)) == 0) {
            bVar2 = *(char *)(iVar3 + 0x23) << 4;
            bVar1 = *(byte *)(iVar3 + 0x49);
          }
          else {
            bVar1 = *(byte *)(iVar3 + 0x49);
            bVar2 = 0xd0;
          }
          *(byte *)(iVar3 + 0x49) = bVar1 & 0xf | bVar2;
          if ((*(byte *)(iVar3 + 10) & 0x40) != 0) {
            *(byte *)(iVar3 + 0x47) =
                 *(byte *)(iVar3 + 0x47) & 0xc1 | (byte)((DAT_0202e148 & 0x1f) << 1);
            if (DAT_0202e148 < 0x1f) {
              DAT_0202e148 = DAT_0202e148 + 1;
            }
            if ((*(byte *)(iVar3 + 0xb) & 1) == 0) {
              sub_080037B4(iVar4,*(undefined *)(iVar3 + 0x24));
            }
            else if ((*(byte *)(iVar3 + 0xb) & 2) == 0) {
              sub_08003AB0(iVar4,*(undefined *)(iVar3 + 0x24));
            }
            else {
              sub_08003DC0(iVar4,*(undefined *)(iVar3 + 0x24));
            }
          }
          sub_08004A80(param_2,iVar4,((uint)*(byte *)(iVar3 + 0x49) << 0x1c) >> 0x1e,
                       *(undefined *)(iVar3 + 0x25));
        }
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar3;
    } while (iVar3 != param_1 + 0x14);
  }
  return in_lr;
}

