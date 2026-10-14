// sub_080C7C78 at 0x080C7C78 (thumb)

undefined4 sub_080C7C78(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = *(undefined4 *)(iVar6 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(uint *)(param_1 + 0x5c) = (uVar4 * 2 + -1) * 0x1c0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0xb5) + -1;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 100) = iVar3;
  *(int *)(param_1 + 0x54) = *(int *)(iVar6 + 0x54) + iVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
  uVar5 = (uint)(byte)(~*(byte *)(param_1 + 0x12) + *(char *)(param_1 + 0xb5));
  iVar3 = iVar3 * (uVar4 * 2 + -1);
  iVar6 = iVar3 + -0x800;
  if (iVar6 < 0) {
    iVar6 = iVar3 + 0x7ff;
  }
  if ((int)uVar5 < iVar6 >> 0xc) {
    if (*(byte *)(param_1 + 0x12) == 0) {
      bVar1 = true;
    }
    else {
      iVar6 = sub_080C7A54(param_1,uVar5);
      if (iVar6 != 0) {
        *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
      }
      bVar1 = iVar6 == 0;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    if (bVar1) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

