// sub_080DDB08 at 0x080DDB08 (thumb)

undefined4 sub_080DDB08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  uVar4 = *(uint *)(param_1 + 0x8c);
  if (((uVar4 & 1) != 0) && ((uVar4 & 0x20000) != 0)) {
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 3;
    sub_0801749C(param_1);
    sub_08017700(param_1,0x9c00);
    sub_08014C9C();
    sub_0801ACF8(4,param_1 + 0x54);
    sub_0800471C(0x11d);
    uVar4 = 0;
    do {
      iVar1 = sub_0800710C(DAT_02030630);
      if (iVar1 != 0) {
        *(undefined *)(iVar1 + 0x25) = 0x1e;
        *(undefined *)(iVar1 + 9) = 0x2b;
        *(undefined4 *)(iVar1 + 0x14) = 0x80dda29;
        *(undefined2 *)(iVar1 + 0x20) = 0;
        *(undefined *)(iVar1 + 0x22) = 0;
        *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
        *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
        *(undefined *)(iVar1 + 0x10) = 1;
        *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
        iVar5 = *(int *)(param_1 + 0x58);
        iVar2 = (int)(uVar4 * 0x10000) >> 0x10;
        if (iVar2 == 0) {
          iVar5 = iVar5 + -0x1000;
        }
        *(int *)(iVar1 + 0x58) = iVar5;
        if (1 < iVar2) {
          *(int *)(iVar1 + 0x58) = iVar5 + iVar2 * 0x1000;
        }
      }
      uVar3 = uVar4 * 0x10000 + 0x10000;
      uVar4 = uVar3 >> 0x10;
    } while ((int)uVar3 >> 0x10 < 3);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080DDC0C(param_1);
  }
  return in_lr;
}

