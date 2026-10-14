// sub_08082E08 at 0x08082E08 (thumb)

undefined4 sub_08082E08(int param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    return in_lr;
  }
  bVar2 = *(byte *)(param_1 + 0xe);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        bVar1 = 0 < *(int *)(iVar6 + 0x4c) - *(int *)(param_1 + 0x4c);
        uVar3 = (uint)bVar1;
        *(uint *)(param_1 + 0x54) = uVar3 * 0x300 + -0x180;
        *(bool *)(param_1 + 0x44) = bVar1;
        if (uVar3 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar2 != 3) {
        return in_lr;
      }
      iVar4 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x4c) = iVar4;
      iVar5 = *(int *)(iVar6 + 0x4c) - iVar4;
      if (iVar5 < 0) {
        iVar5 = iVar4 - *(int *)(iVar6 + 0x4c);
      }
      if (iVar5 < 0x1000) {
        sub_08001EAC(0xa7);
        *(char *)(iVar6 + 200) = *(char *)(iVar6 + 200) + '\x01';
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined *)(param_1 + 0x94) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
        *(undefined4 *)(param_1 + 0xc) = 3;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc);
      }
      sub_08003458(param_1 + 0x6c);
      *(undefined *)(param_1 + 0x46) =
           *(undefined *)
            (*(char *)(param_1 + 0x71) * 4 +
            *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    sub_0800561C(param_1 + 0x74,&DAT_082b2bec);
    *(undefined4 *)(param_1 + 0x58) = 0x180;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  uVar3 = sub_08082794(param_1);
  if ((uVar3 & 1) != 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

