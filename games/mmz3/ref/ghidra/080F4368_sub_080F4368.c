// sub_080F4368 at 0x080F4368 (thumb)

undefined4 sub_080F4368(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  pbVar6 = (byte *)(param_1 + 0xdcc);
  *(undefined *)(param_1 + 0xe17) = 0;
  cVar2 = sub_080F3784(param_1);
  if (cVar2 == '\0') {
    if ((DAT_02002134 & 1) == 0) {
      iVar5 = 0xff;
      if ((DAT_02002136 & 0x40) != 0) {
        iVar5 = 0;
      }
      if ((DAT_02002136 & 0x10) != 0) {
        iVar5 = 1;
      }
      if ((DAT_02002136 & 0x80) != 0) {
        iVar5 = 2;
      }
      if ((DAT_02002136 & 0x20) != 0) {
        iVar5 = 3;
      }
      bVar1 = *pbVar6;
      if (iVar5 != 0xff) {
        uVar4 = (uint)(byte)(&UNK_0838ba9c)[iVar5 + (uint)bVar1 * 4];
        if (((int)(uint)*(byte *)(param_1 + 0xddb) >> uVar4 & 1U) == 0) {
          do {
            if (((uVar4 == 4) && (iVar5 == 0)) && ((*(byte *)(param_1 + 0xddb) & 8) == 0)) {
              *(undefined *)(param_1 + 0xdcc) = 1;
              goto LAB_080f4484;
            }
            iVar3 = uVar4 * 4;
            uVar4 = (uint)(byte)(&UNK_0838bab8)[iVar5 + iVar3];
            if (uVar4 == 0xff) {
              *(undefined *)(param_1 + 0xdcc) = 0;
              goto LAB_080f4484;
            }
          } while (((int)(uint)*(byte *)(param_1 + 0xddb) >> uVar4 & 1U) == 0);
          *(undefined *)(param_1 + 0xdcc) = (&UNK_0838bab8)[iVar5 + iVar3];
        }
        else {
          *pbVar6 = (&UNK_0838ba9c)[iVar5 + (uint)bVar1 * 4];
        }
LAB_080f4484:
        if ((uint)bVar1 != (uint)*(byte *)(param_1 + 0xdcc)) {
          sub_0800471C(1);
        }
      }
    }
    else {
      bVar1 = *pbVar6;
      if (bVar1 < 6) {
        *(byte *)(param_1 + 3) = bVar1 + 1;
        if (*pbVar6 == 2) {
          *(undefined *)(param_1 + 0xdcd) = 0;
        }
      }
      else {
        if ((DAT_02030104 & 0x20) == 0) {
          sub_0800471C(4);
          return in_lr;
        }
        *(byte *)(param_1 + 3) = bVar1 + 1;
      }
      sub_0800471C(2);
    }
  }
  return in_lr;
}

