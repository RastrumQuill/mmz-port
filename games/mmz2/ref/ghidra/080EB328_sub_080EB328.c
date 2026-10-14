// sub_080EB328 at 0x080EB328 (thumb)

undefined4 sub_080EB328(int param_1)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar2 = DAT_02000d14 & 2;
  if ((DAT_02000d14 & 2) == 0) {
    iVar6 = *(int *)(param_1 + 0x75b8);
    uVar4 = (uint)*(byte *)(param_1 + 0xdd8);
    if ((DAT_02000d14 & 0x31) != 0) {
      if ((DAT_02000d14 & 1) == 0) {
        if ((DAT_02000d14 & 0x10) == 0) {
          iVar5 = uVar4 - 1;
        }
        else {
          iVar5 = uVar4 + 1;
        }
        uVar4 = sub_080EF1E8(iVar5 + 3,3);
        *(char *)(param_1 + 0xdd8) = (char)uVar4;
        sub_080032EC(1);
      }
      else {
        pbVar3 = (byte *)(iVar6 + 0x20a + uVar4);
        bVar1 = (byte)uVar2;
        if (0x50 < *pbVar3 - 1) {
          *(undefined *)(param_1 + 2) = 1;
          *(byte *)(param_1 + 3) = bVar1;
          *(ushort *)(param_1 + 4) = uVar2;
          sub_080032EC(1);
          return in_lr;
        }
        *pbVar3 = bVar1;
        sub_080032EC(3);
      }
    }
    sub_080EBB64(iVar6,uVar4 & 0xff);
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return in_lr;
}

