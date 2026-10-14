// sub_0801CA0C at 0x0801CA0C (thumb)

undefined4 sub_0801CA0C(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080054B4();
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 != param_1 + 0x14) {
    do {
      if ((*(byte *)(iVar3 + 10) & 1) != 0) {
        iVar4 = iVar3 + 0x34;
        if ((*(byte *)(iVar3 + 10) & 8) == 0) {
          sub_080033FC(param_2,iVar4,0,*(undefined *)(iVar3 + 0x25));
        }
        else {
          if ((*(uint *)(&DAT_0202dc10 + (uint)(*(byte *)(iVar3 + 0x1d) >> 5) * 4) &
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
                 *(byte *)(iVar3 + 0x47) & 0xc1 | (byte)((DAT_0202dc04 & 0x1f) << 1);
            if (DAT_0202dc04 < 0x1f) {
              DAT_0202dc04 = DAT_0202dc04 + 1;
            }
            if ((*(byte *)(iVar3 + 0xb) & 1) == 0) {
              FUN_0800053c(iVar4,*(undefined *)(iVar3 + 0x24));
            }
            else if ((*(byte *)(iVar3 + 0xb) & 2) == 0) {
              FUN_08000590(iVar4,*(undefined *)(iVar3 + 0x24));
            }
            else {
              FUN_08000590(iVar4,*(undefined *)(iVar3 + 0x24));
            }
          }
          sub_080033FC(param_2,iVar4,((uint)*(byte *)(iVar3 + 0x49) << 0x1c) >> 0x1e,
                       *(undefined *)(iVar3 + 0x25));
        }
      }
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar3;
    } while (iVar3 != param_1 + 0x14);
  }
  return in_lr;
}

