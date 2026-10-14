// sub_0810B818 at 0x0810B818 (thumb)

undefined4 sub_0810B818(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar4 = 0xff;
    iVar2 = *(int *)(param_1 + 0x28);
    uVar7 = (uint)(byte)(&DAT_08869820)[*(byte *)(iVar2 + 0xdd0)];
    if ((DAT_02000764 & 0x40) != 0) {
      uVar4 = (uint)(byte)(&DAT_0886982a)[(*(byte *)(iVar2 + 0xdce) + uVar7) * 4];
    }
    if (uVar4 == 0xff) {
      if ((DAT_02000764 & 0x80) != 0) {
        uVar4 = (uint)(byte)(&DAT_0886982b)[(*(byte *)(iVar2 + 0xdce) + uVar7) * 4];
      }
      if (uVar4 == 0xff) {
        if ((DAT_02000764 & 0x20) != 0) {
          uVar4 = (uint)(byte)(&DAT_0886982c)[(*(byte *)(iVar2 + 0xdce) + uVar7) * 4];
        }
        if ((uVar4 == 0xff) && ((DAT_02000764 & 0x10) != 0)) {
          uVar4 = (uint)(byte)(&DAT_0886982d)[(*(byte *)(iVar2 + 0xdce) + uVar7) * 4];
        }
      }
    }
    *(undefined *)(*(int *)(param_1 + 0x28) + 0xdcf) =
         *(undefined *)(*(int *)(param_1 + 0x28) + 0xdce);
    if (((uVar4 != 0xff) && (*(char *)(*(int *)(param_1 + 0x28) + 1) == '\x02')) &&
       (*(byte *)(*(int *)(param_1 + 0x28) + 2) < 2)) {
      sub_08002B10(1);
      *(char *)(*(int *)(param_1 + 0x28) + 0xdce) = (char)uVar4;
      uVar5 = (&DAT_08869794)[uVar4 * 2];
      *(undefined4 *)(param_1 + 100) = (&DAT_08869790)[uVar4 * 2];
      *(undefined4 *)(param_1 + 0x68) = uVar5;
      *(undefined *)(param_1 + 0x12) = 6;
      iVar8 = *(int *)(param_1 + 0x54);
      iVar2 = FUN_081288bc(*(int *)(param_1 + 100) - iVar8,6);
      *(int *)(param_1 + 0x5c) = iVar2;
      iVar6 = *(int *)(param_1 + 0x58);
      iVar3 = FUN_081288bc(*(int *)(param_1 + 0x68) - iVar6,6);
      *(int *)(param_1 + 0x60) = iVar3;
      *(undefined *)(param_1 + 0x12) = 5;
      *(int *)(param_1 + 0x54) = iVar8 + iVar2;
      *(int *)(param_1 + 0x58) = iVar6 + iVar3;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined *)(*(int *)(param_1 + 0x28) + 0xdcf) =
         *(undefined *)(*(int *)(param_1 + 0x28) + 0xdce);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x28) + 0xdce);
      uVar5 = (&DAT_08869794)[uVar4 * 2];
      *(undefined4 *)(param_1 + 0x54) = (&DAT_08869790)[uVar4 * 2];
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      *(undefined *)(param_1 + 0xd) = 0;
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x28) + 0xdd1) == '\x02') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088695c0)[*(byte *)(param_1 + 9)] + 8);
    sub_0810B6D8(param_1);
  }
  else {
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

