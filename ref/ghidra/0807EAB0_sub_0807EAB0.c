// sub_0807EAB0 at 0x0807EAB0 (thumb)

undefined4 sub_0807EAB0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar3 + 0xc) < 2) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b267c + (uint)*(byte *)(param_1 + 0xe) * 4));
    if ((*(int *)(iVar3 + 0x24) == param_1) && (*(byte *)(iVar3 + 0xe) < 5)) {
      if (*(byte *)(iVar3 + 0xe) != 4) {
        return in_lr;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar3 + 0x50) = uVar1;
      return in_lr;
    }
    uVar2 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if (uVar2 < 0x2001) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar1 = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

